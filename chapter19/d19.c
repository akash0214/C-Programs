#include <stdio.h>

void offset_cipher(const char *source_file, const char *target_file, int offset)
{
    FILE *source = fopen(source_file, "r");
    FILE *target = fopen(target_file, "w");

    if (source == NULL || target == NULL)
    {
        printf("Error opening files.\n");
        return;
    }

    int ch;
    while ((ch = fgetc(source)) != EOF)
    {
        ch = ch + offset;
        fputc(ch, target);
    }

    // Close files
    fclose(source);
    fclose(target);
}

void substitution_cipher(const char *source_file, const char *target_file, const char *substitution_table)
{
    FILE *source = fopen(source_file, "r");
    FILE *target = fopen(target_file, "w");

    if (source == NULL || target == NULL)
    {
        printf("Error opening files.\n");
        return;
    }

    int ch;
    while ((ch = fgetc(source)) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            fputc(substitution_table[ch - 'A'], target);
        }
        else
        {
            fputc(ch, target); 
        }
    }

    // Close files
    fclose(source);
    fclose(target);
}

int main()
{
    const char *source_file = "source.txt";
    const char *target_offset = "target_offset.txt";
    const char *target_substitution = "target_substitution.txt";

    // Offset cipher parameters
    int offset = 128;

    // Substitution cipher parameters
    const char substitution_table[] = "!@#$%^&*()_+-={}[]|\\:;\"'<>,.?/1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // Encrypt using offset cipher
    offset_cipher(source_file, target_offset, offset);

    // Encrypt using substitution cipher
    substitution_cipher(source_file, target_substitution, substitution_table);

    printf("Encryption/Decryption completed.\n");

    return 0;
}
