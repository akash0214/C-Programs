#include <stdio.h>

int main() {
    int matchsticks = 21;
    int user_pick, comp_pick;
    
    printf("Welcome to the Matchstick Game!\n");
    
    while (1) {
        // User's turn
        printf("Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user_pick);
        
        if (user_pick < 1 || user_pick > 4) {
            printf("Invalid input! Please pick 1, 2, 3, or 4 matchsticks.\n");
            continue;
        }
        
        matchsticks -= user_pick;
        printf("Remaining matchsticks: %d\n", matchsticks);
        
        if (matchsticks == 1) {
            printf("You picked the last matchstick. You lose!\n");
            break;
        }
        
        // Computer's turn
        comp_pick = 5 - user_pick; // The computer always picks in such a way that the total is 5
        printf("Computer picks %d matchsticks.\n", comp_pick);
        
        matchsticks -= comp_pick;
        printf("Remaining matchsticks: %d\n", matchsticks);
        
        if (matchsticks == 1) {
            printf("Computer picked the last matchstick. You win!\n");
            break;
        }
    }
    
    return 0;
}
