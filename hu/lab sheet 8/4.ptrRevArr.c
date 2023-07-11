#include <stdio.h>
#include<stdlib.h>

void arrRev(int *arr, int size) {
    int *start = arr;        
    int *end = arr + size - 1;    

    while (start < end) {

        int temp = *start;
        *start = *end;
        *end = temp;


        start++;
        end--;
    }
}

int main() {
    int size;
    printf("Enter the no of elements you want to enter = ");
    scanf("%d",&size);
    int *arr = (int *)malloc(size * sizeof(int));
    printf("Enter the Numbers = \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    arrRev(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
