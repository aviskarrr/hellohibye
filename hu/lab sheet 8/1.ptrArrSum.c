#include<stdio.h>
#include<stdlib.h>
int main(){
    int s;
    printf("Enter no of elements you want to enter");
    scanf("%d",&s);
    int *arr=(int*)malloc(s*sizeof(int));
    if (arr==NULL)
    {
        printf("Program Error");
        return 1;
    }

    printf("Enter the elements of array\n");
    for (int i = 0; i < s; i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum=0;
    int *p=arr;

    for (int i = 0; i < s; i++)
    {
        sum+=*p;
        p++;
    }

    printf("Sum of elements = %d",sum);
    

    free(arr);
    return 0;
}