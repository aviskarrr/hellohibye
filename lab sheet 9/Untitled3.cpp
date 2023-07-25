#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct employee {
    char name[21];
    char address[21];
    int phone;
};


void inp(struct employee e[], int n) {
    for (int i = 0; i < n; i++) {
    	fflush(stdin);
        printf("Enter name: ");
        gets(e[i].name);

        printf("Enter address: ");
        gets(e[i].address);
        printf("Enter phone: ");
        scanf("%d", &e[i].phone);
    }
}


void sort(struct employee e[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(e[j].name, e[j + 1].name) > 0) {
                struct employee temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
}

// Function to display sorted employee information
void print(struct employee e[], int n) {
    printf("\nSorted Employee Information (by Name):\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", e[i].name);
        printf("Address: %s\n", e[i].address);
        printf("Phone: %d\n\n", e[i].phone);
    }
}

int main() {
    struct employee e[5];

    inp(e, 5);
    sort(e, 5);
    print(e, 5);

    return 0;
}

