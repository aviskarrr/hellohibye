#include<stdio.h>
#include<conio.h>
int main(){
    int a,rev = 0,temp,rem;
    printf("enter\n");
    scanf("%d",&a);
    temp = a;
    while (a>0)
    {
        rem = a%10;
        rev = (rev*10)+rem;
        a = a/10;
    }       
     printf("reversed number is %d", rev);
     printf("\noriginal no is  = %d", temp);

     getch();
     return 0;
}
