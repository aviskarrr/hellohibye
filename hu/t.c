#include<stdio.h>

int main(){
    float a,b,t;
    char ch;

    do{
    printf ("Enter the first number:");
    scanf ("%f",&a);
    printf ("Enter the second number:");
    scanf ("%f",&b);
    t=a+b;
    printf ("The total number is:%f",t);
    printf ("Do you want to continue: y/n");
    scanf (" %c", &ch);
    } while(ch == 'y');
    
    return 0;
}

