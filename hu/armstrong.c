#include <stdio.h>
int main() {
    int num, temp, rem, arm = 0;
    printf("Enter: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0) {
        rem = temp % 10;
        arm = arm + (rem * rem * rem);
        temp = temp/ 10;
    }

    if (arm == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}