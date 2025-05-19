#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int secretNumber;
    int guess;
    int noOfGuess = 0;

    srand(time(0));
    int number = rand() % 100 + 1;

    printf("\n\n\n\t\t\t**WELCOME TO GASSING GAME**\n\n\n");

    while(guess != number){
        printf("Enter Your Guess Number Between(1-100): ");
        scanf("%d", &guess);
        
        noOfGuess++;

        if(guess < number){
            printf("The guess is too low\n");
        }
        else if(guess > number){
            printf("The guess is too high\n");
        }
        else{
            printf("\n\n\t\t\t---YOU WIN!---\n\n");
        }
        
    }
    
    printf("Congratulation !!! You have successfully Guessed the Number in %d attempts\n", noOfGuess);
    printf("\n\t\t\tThanks For Playing\n");
    printf("\t\t\tDeveloped by: Raushan kumar\n");
    
    return 0;
}