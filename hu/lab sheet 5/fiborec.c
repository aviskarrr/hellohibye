#include <stdio.h>


int fibo(int num)
{

    if (num == 0)
    {
        return 0; 
    }
    else if (num == 1)
    {
        return 1;
    }

    else
    {
        return fibo(num - 1) + fibo(num - 2); 
    }
}

int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d", &num); 
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%d \t ", fibo(i)); 
    }    

    return 0;
}
