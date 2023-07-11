#include<stdio.h>
void chkPrime(){
    int a,i,count=0;
    printf("Enter any number");
    scanf("%d", &a);
    for (i = 1; i <=  a; i++)
    {

        if (a%i ==0)
        {
            count +=1;
        }
    }

    if (count == 2)
    {
        printf ("\nPrime Number");
    }

    else{
        printf("\nNot Prime Number");
    }
    
    
}


int main (){
    chkPrime();
    return 0;

}