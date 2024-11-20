#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
    int fibonacci[5] = {0};

    fibonacci[0] = 1;
    fibonacci[1] = 1;

    for (int i = 0; i < 5; i++)
    {
        // Incorrect logic for generating sequence
        fibonacci[i + 2] = fibonacci[i] + fibonacci[i + 1];
    }

    printf("Fibonacci Sequence: ");
    for (int i = 0; i <= 5; i++)
    {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");

    return 0;
}
// Bugs:
// Bug 1: Incorrect array size
// Bug 2: Incorrect initialization
// Bug 3: Inefficient and incorrect sequence generation
// Bug 4: Potential out-of-bounds access
