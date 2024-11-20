#include <stdbool.h>
#include <stdio.h>

int main()
{
    int number;
    int isPrime = 1;

    printf("Enter a number to check if it's prime: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        isPrime = 1;
    }

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

        if (isPrime)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

// Bugs:
// 1. Incorrect handling of numbers less than or equal to 1
// 2. Inefficient prime checking algorithm
// Challenge: Correct prime number identification logic