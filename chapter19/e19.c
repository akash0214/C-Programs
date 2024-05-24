#include <stdio.h>

struct customer
{
    int accno;
    char name[30];
    float balance;
};

struct trans
{
    int accno;
    char trans_type;
    float amount;
};

void update_customer_file(const char *customer_file, const char *transaction_file)
{
    FILE *customer_fp = fopen(customer_file, "r+b");
    FILE *transaction_fp = fopen(transaction_file, "rb");

    if (customer_fp == NULL || transaction_fp == NULL)
    {
        printf("Error opening files.\n");
        return;
    }

    struct customer cust;
    struct trans tr;

    while (fread(&tr, sizeof(struct trans), 1, transaction_fp) == 1)
    {
        fseek(customer_fp, 0, SEEK_SET);
        while (fread(&cust, sizeof(struct customer), 1, customer_fp) == 1)
        {
            if (cust.accno == tr.accno)
            {
                if (tr.trans_type == 'D')
                {
                    cust.balance += tr.amount;
                }
                else if (tr.trans_type == 'W')
                {
                    if (cust.balance - tr.amount >= 100)
                    {
                        cust.balance -= tr.amount;
                    }
                    else
                    {
                        printf("Error: Insufficient balance in account %d for withdrawal.\n", cust.accno);
                    }
                }
                fseek(customer_fp, -sizeof(struct customer), SEEK_CUR);
                fwrite(&cust, sizeof(struct customer), 1, customer_fp);
                break;
            }
        }
    }

    // Close files
    fclose(customer_fp);
    fclose(transaction_fp);
}

int main()
{
    const char *customer_file = "CUSTOMER.DAT";
    const char *transaction_file = "TRANSACTIONS.DAT";

    update_customer_file(customer_file, transaction_file);

    printf("Customer file updated successfully.\n");

    return 0;
}
