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

    if (rev == temp){
        printf("%d is palindrome", temp);
    } 

    else{
        printf("\n%d is not palindrome", temp);
    }
     getch();
     return 0;
}
