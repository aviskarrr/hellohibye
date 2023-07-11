#include <stdio.h>

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);



    if(num%5==0)
    {
        if (num%7 == 0 && num % 11 != 0){
            printf("Number is multiple of 5 and divisible by 7 but not by 11");
        }

        else{
            printf("Number is multiple of 5 only");
        }
    }

    else{
        printf("number is not divisible by 5 anf 7");
    }

    return 0;
}