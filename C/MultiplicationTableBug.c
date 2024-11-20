#include <stdio.h>

#include <stdio.h>

void printMultiplicationTable(int n)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d x %d = %d\n", n, i, n);
    }
}

int main()
{
    int number = 5;
    printMultiplicationTable(number);
    return 0;
}
// Bug 1: Incorrect loop range
// Bug 2: Incorrect multiplication
// Bug 3: Hardcoded single number