#include <stdio.h>

// Recursive function to solve Towers of Hanoi
void towersOfHanoi(int n, char fromPeg, char toPeg, char auxPeg)
{
    if (n == 1)
    {
        printf("Move disk 1 from peg %c to peg %c\n", fromPeg, toPeg);
        return;
    }
    towersOfHanoi(n - 1, fromPeg, auxPeg, toPeg);
    printf("Move disk %d from peg %c to peg %c\n", n, fromPeg, toPeg);
    towersOfHanoi(n - 1, auxPeg, toPeg, fromPeg);
}

int main()
{
    int n = 4; // Number of disks
    printf("Sequence of moves to solve the Towers of Hanoi for %d disks:\n", n);
    towersOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of the pegs
    return 0;
}
