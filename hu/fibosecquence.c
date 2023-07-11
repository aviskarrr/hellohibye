#include <stdio.h>

int main()
{
    int a, b, c, i, terms,seq = 0;

    // printf("Enter number of terms: ");
    // scanf("%d", &terms);
    terms = 40;

    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms: \n");

    /* Iterate through n terms */
    for(i=1; i<=terms; i++)
    {
        printf("%d\t ", seq);

        a = b;     // Copy n-1 to n-2
        b = c;     // Copy current to n-1
        c = a + b; // New term
        seq = c % 5;
    }

    return 0;
}