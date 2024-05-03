#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int x = rand() % 20;
    int num;
    int i = 1; 
    do
    {
        printf("Guess the number(10 - 20) : ");
        scanf("%d", &num);
        if (num < x)
        {
            printf("Too low! Try Again\n");
        }
        else if (num > x)
        {
            printf("Too greater! Try Again\n");
        }
        else
        {
            printf("Bravo! You guessed the number in %d tries.\n", i);
        }
        i++; 
    } while (num != x);

    return 0;
}
