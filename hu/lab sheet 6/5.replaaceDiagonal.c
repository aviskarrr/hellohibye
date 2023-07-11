#include <stdio.h>

int main() {
    int mat[3][3], i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter Matrix[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j || i + j == 2) {
                mat[i][j] = 0;
            }
        }
    }

    printf("Modified Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}