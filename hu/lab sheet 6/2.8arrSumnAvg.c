#include<stdio.h>
int main(){
    int sum=0;
    float avg;
    float arr[8];
    for (int i = 0; i < 8 ; i++)
    {
        printf("Enter no %d\n", i+1);
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        sum+=arr[i];
    }
    avg = sum/8;

    printf("Sum = %d and Average = %f",sum,avg);

    return 0;
}