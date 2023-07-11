#include<stdio.h>

void readMat(int mat[]){
    for (int i = 0; i < 10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &mat[i]);
    }
}

void sort(int mat[]){
    int i, j, temp;
    for (i = 0; i < 9; i++){
        for (j = i+1; j < 10; j++){
            if (mat[i] > mat[j]){
                temp = mat[i];
                mat[i] = mat[j];
                mat[j] = temp;
            }
        }
    }
}

void print(int mat[]){
    int i;
    for (i = 0; i < 10; i++){
        printf("%d\t", mat[i]);
    }
    printf("\n");
}

int main(){
    int mat[10];
    readMat(mat);
    sort(mat);
    printf("Sorted array:\n");
    print(mat);
    return 0;
}
