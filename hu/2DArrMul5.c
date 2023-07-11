#include <stdio.h>

void readMat(int r, int c, int mat[][c]) {

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter the elements of the matrix:");
            scanf("%d", &mat[i][j]);
        }
    }
}


void mulMat(int r, int c, int mat[][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            mat[i][j] *= 5; 
        }
    }
}


void prntMat(int r, int c, int mat[][c]) {
    printf("Matrix:\n");
    for (int i = 0; i < r; i++) {
                printf("\n");
        for (int j = 0; j < c; j++) {
            printf("%d ", mat[i][j]);
        }

    }
}

int main() {
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int matrix[r][c];

    readMat(r, c, matrix);
    mulMat(r, c, matrix);
    prntMat(r, c, matrix);

    return 0;
}