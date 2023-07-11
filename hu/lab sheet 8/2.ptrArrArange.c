#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("How many numbers you want to enter here? ");
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int));
    printf("Enter the numbers = \n");
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int temp;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (*(arr+j)>*(arr + j+i))
            {
                temp = *(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
            
        }
        
    }
    printf("Sorted Array = \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n",*(arr+i));
    }

    free(arr);
    return 0;
}