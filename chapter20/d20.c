#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int arithmetic_operation(int n, int m, char operation)
{
    switch (operation)
    {
    case '+':
        return n + m;
    case '-':
        return n - m;
    case '*':
        return n * m;
    case '/':
        return n / m;
    default:
        printf("Invalid arithmetic operation.\n");
        exit(1);
    }
}

bool comparison_operation(int n, int m, char operation)
{
    switch (operation)
    {
    case '<':
        return n < m;
    case '>':
        return n > m;
    case '=':
        return n == m;
    default:
        printf("Invalid comparison operation.\n");
        exit(1);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: %s <switch> <n> <m>\n", argv[0]);
        return 1;
    }

    char operation = argv[1][0];
    int n = atoi(argv[2]);
    int m = atoi(argv[3]);
    int result;
    bool comparison_result;

    if (operation == '+' || operation == '-' || operation == '*' || operation == '/')
    {
        result = arithmetic_operation(n, m, operation);
        printf("%d %c %d = %d\n", n, operation, m, result);
    }
    else if (operation == '<' || operation == '>' || operation == '=')
    {
        comparison_result = comparison_operation(n, m, operation);
        printf("%d %c %d is %s\n", n, operation, m, comparison_result ? "True" : "False");
    }
    else
    {
        printf("Invalid operation.\n");
        return 1;
    }

    return 0;
}
