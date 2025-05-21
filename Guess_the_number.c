#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int number, guess, ng;
    srand(time(0));
    number = rand() % 100 + 1;

    // printf("The Number is %d\n", number);
    for (ng = 1; guess != number; ng++)
    {
        printf("Guess the Number Between 1 to 100\n");
        scanf("%d", &guess);
        if (number < guess)
        {
            printf("Lower\n");
        }
        else if (number > guess)
        {
            printf("Higher\n");
        }
        else
        {
            printf("You Guessed the number in %d", ng);
        }
    }
    getch();
}