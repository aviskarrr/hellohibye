#include<stdio.h>
void ranPalin(){
    int a,b,rem,rev,temp;
    printf("Enter the range = ");
    scanf("%d%d", &a,&b);
    for (int i = a; i <= b; i++)
    {
        temp = i;
        rev = 0;
        while (temp!=0)
        {
            rem = temp%10;
            rev = (rev*10)+rem;
            temp/=10;
        }

        if (rev == i)
        {
            printf("%d\t", i);
        }
    }
}

int main(){
    ranPalin();
    return 0;
}