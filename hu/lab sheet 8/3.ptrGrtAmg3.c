#include<stdio.h>

int big(int *a,int *b, int *c){
    int big = *a;
    if(*b>big){
        big = *b;
    }
    if(*c>big){
        big = *c;
    }
    return big;
}
int main(){
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    int max = big(&a,&b,&c);
    printf("Max no - %d",max);
    return 0;
}