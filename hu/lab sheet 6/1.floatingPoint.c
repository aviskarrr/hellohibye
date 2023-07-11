#include<stdio.h>
int main(){
    float arr[10];
    for (int i = 0; i < 10 ; i++)
    {
        printf("Enter no %d\n", i+1);
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Entered No %d is %f",i+1,arr[i] );
    }

    return 0;
    
    

}