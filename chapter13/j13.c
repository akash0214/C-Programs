#include <stdio.h>
#include <stdlib.h>

#define MAX 10 // Maximum size of the dequeue

char dequeue[MAX];
int left = -1, right = -1;

// Function to check if the dequeue is full
int isFull()
{
    return ((left == 0 && right == MAX - 1) || (left == right + 1));
}

// Function to check if the dequeue is empty
int isEmpty()
{
    return (left == -1);
}

// Function to insert an element at the left end of the dequeue
void insertLeft(char item)
{
    if (isFull())
    {
        printf("Dequeue is full\n");
        return;
    }
    if (left == -1)
    { // if dequeue is initially empty
        left = 0;
        right = 0;
    }
    else if (left == 0)
    {
        left = MAX - 1;
    }
    else
    {
        left = left - 1;
    }
    dequeue[left] = item;
    printf("Inserted %c at left\n", item);
}

// Function to insert an element at the right end of the dequeue
void insertRight(char item)
{
    if (isFull())
    {
        printf("Dequeue is full\n");
        return;
    }
    if (left == -1)
    { // if dequeue is initially empty
        left = 0;
        right = 0;
    }
    else if (right == MAX - 1)
    {
        right = 0;
    }
    else
    {
        right = right + 1;
    }
    dequeue[right] = item;
    printf("Inserted %c at right\n", item);
}

// Function to retrieve an element from the left end of the dequeue
void retrieveLeft()
{
    if (isEmpty())
    {
        printf("Dequeue is empty\n");
        return;
    }
    printf("Retrieved %c from left\n", dequeue[left]);
    if (left == right)
    { // if the dequeue has only one element
        left = -1;
        right = -1;
    }
    else if (left == MAX - 1)
    {
        left = 0;
    }
    else
    {
        left = left + 1;
    }
}

// Function to retrieve an element from the right end of the dequeue
void retrieveRight()
{
    if (isEmpty())
    {
        printf("Dequeue is empty\n");
        return;
    }
    printf("Retrieved %c from right\n", dequeue[right]);
    if (left == right)
    { // if the dequeue has only one element
        left = -1;
        right = -1;
    }
    else if (right == 0)
    {
        right = MAX - 1;
    }
    else
    {
        right = right - 1;
    }
}

int main()
{
    // Test the dequeue operations
    insertRight('A');
    insertRight('B');
    insertLeft('C');
    insertLeft('D');
    retrieveLeft();
    retrieveRight();
    retrieveLeft();
    retrieveRight();
    retrieveLeft();

    return 0;
}
