#include<stdio.h>
int main(){
    int arr[10],temp;
    int i,j;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter no %d/n",i+1);
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < 9; i++)
    {
        for (j = i+1; j < 10; j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
    }

    for ( i = 0; i < 10; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;   
}