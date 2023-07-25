#include <stdio.h>

struct time {
    int hr;
    int min;
    int sec;
};

int main() {
    struct time t[3];

    printf("----------Current Time----------\n");
    printf("Hour: ");
    scanf("%d", &t[0].hr);
    printf("\nMin: ");
    scanf("%d", &t[0].min);
    printf("\nSec: ");
    scanf("%d", &t[0].sec);

    printf("----------Previous Time----------\n");
    printf("Hour: ");
    scanf("%d", &t[1].hr);
    printf("\nMin: ");
    scanf("%d", &t[1].min);
    printf("\nSec: ");
    scanf("%d", &t[1].sec);

    // Add the time intervals
    t[2].sec = t[0].sec + t[1].sec;
    t[2].min = t[0].min + t[1].min + t[2].sec / 60;
    t[2].hr = t[0].hr + t[1].hr + t[2].min / 60;
    t[2].sec %= 60;
    t[2].min %= 60;
    t[2].hr %= 24; // Restricting the hours to 0-23 range (assuming 24-hour format)

    printf("\n----------Resultant Time----------\n");
    printf("Hour: %02d\n", t[2].hr); // %02d ensures leading zeros for single-digit hours
    printf("Min: %02d\n", t[2].min); // %02d ensures leading zeros for single-digit minutes
    printf("Sec: %02d\n", t[2].sec); // %02d ensures leading zeros for single-digit seconds

    return 0;
}

