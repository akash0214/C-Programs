#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct
{
    int accession_number;
    char title[100];
    char author[50];
    float price;
    int issued; // 0 for not issued, 1 for issued
} Book;

void add_book(Book books[], int *count)
{
    if (*count >= MAX_BOOKS)
    {
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    printf("Enter book details:\n");
    printf("Accession number: ");
    scanf("%d", &books[*count].accession_number);
    printf("Title: ");
    scanf(" %[^\n]%*c", books[*count].title);
    printf("Author: ");
    scanf(" %[^\n]%*c", books[*count].author);
    printf("Price: ");
    scanf("%f", &books[*count].price);
    books[*count].issued = 0; // Not issued by default

    (*count)++;
}

void display_book(Book book)
{
    printf("Accession number: %d\n", book.accession_number);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
    printf("Status: %s\n", book.issued ? "Issued" : "Available");
}

void display_all_books(Book books[], int count)
{
    printf("All Books in Library:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Book %d:\n", i + 1);
        display_book(books[i]);
        printf("\n");
    }
}

void list_books_by_author(Book books[], int count, char author[])
{
    printf("Books by %s:\n", author);
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(books[i].author, author) == 0)
        {
            display_book(books[i]);
            found = 1;
        }
    }
    if (!found)
    {
        printf("No books found by %s\n", author);
    }
}

void list_book_by_accession_number(Book books[], int count, int accession_number)
{
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (books[i].accession_number == accession_number)
        {
            display_book(books[i]);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Book with accession number %d not found\n", accession_number);
    }
}

void list_books_in_order(Book books[], int count)
{
    printf("Books in the order of accession number:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Book %d:\n", i + 1);
        display_book(books[i]);
        printf("\n");
    }
}

int main()
{
    Book books[MAX_BOOKS];
    int count = 0;
    int choice;
    char author[50];
    int accession_number;

    do
    {
        printf("\nLibrary Management System Menu:\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of book specified by accession number\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_book(books, &count);
            break;
        case 2:
            display_all_books(books, count);
            break;
        case 3:
            printf("Enter author name: ");
            scanf(" %[^\n]%*c", author);
            list_books_by_author(books, count, author);
            break;
        case 4:
            printf("Enter accession number: ");
            scanf("%d", &accession_number);
            list_book_by_accession_number(books, count, accession_number);
            break;
        case 5:
            printf("Number of books in the library: %d\n", count);
            break;
        case 6:
            list_books_in_order(books, count);
            break;
        case 7:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 7.\n");
        }
    } while (choice != 7);

    return 0;
}
