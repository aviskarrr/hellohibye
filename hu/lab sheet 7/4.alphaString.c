#include <stdio.h>
#include <string.h>

void read(char str[5][100]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter Name:");
        fgets(str[i], 100, stdin);
    }
}

void Arrange(char str[5][100]) {
    int i, j;
    char temp[100];
    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 5; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[j]);
                strcpy(str[j], str[i]);
                strcpy(str[i], temp);
            }
        }
}

void Print(char str[5][100]) {
    for (int i = 0; i < 5; i++)
        printf("\t%s", str[i]);
}

int main() {
    char str[5][100];
    read(str);
    Arrange(str);
    printf("Alphabetical Order - \n");
    Print(str);
    return 0;
}
