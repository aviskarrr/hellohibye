#include<stdio.h>
void swap();
int rev(int);
int main(){
    
    swap();
    return 0;
}

void swap(){
    int x,y,temp,a,rr;
    printf("Enter two numbers = ");
    scanf("%d%d",&x,&y);
    temp = x;
    x = y;
    y = temp;
    printf("\nswapped = %d \t %d", x,y);

//reversed part
    printf("\n\nenter number to reverse= ");
    scanf("%d",&a);
    rr = rev(a);
    printf("\nreversed number = %d",rr);

}

int rev(int a){
    int rev = 0,rem;

    while (a>0)
    {
        rem = a%10;
        rev = (rev*10)+rem;
        a = a/10;
    }      
    return rev;
}