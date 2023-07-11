#include<stdio.h>
int add(int a, int b){
    int add;
    add = a+b;
    return add;
}

int sub(int a, int b){
    int sub;
    sub = a-b;
    return sub;
}

int mul(int a, int b){
    int mul;
    mul = a*b;
    return mul;
}

float div(int a, int b){
    float div;
    div = (float) a/b;
    return div; 
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d", &a,&b);
    printf("Addition = %d\n", add(a,b));
    printf("Subtraction = %d\n", sub(a,b));
    printf("Multiplication = %d\n", mul(a,b));
    printf("Division = %f\n", div(a,b));
    return 0;
}