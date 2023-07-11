#include<stdio.h>
int n;
void fltrAge(int, int *);
void readAge(){
    int i;
    printf("\nEnter the no of employees = ");
    scanf("%d", &n);

    int a[n];

    for ( i = 0; i < n; i++)
    {
        printf("\nEnter Age of Employee no %d = ", i+1);
        scanf("%d", &a[i]);

    }
    fltrAge(n,a);
    
}

void fltrAge(int m, int b[m]){
    int i;
    for (i = 0; i<m; i++){
        if (b[i]>60)
        {
            printf("Employee no %d's Age is %d\n", i+1 , b[i]);
        }
        

    }
}


int main(){
    readAge();
    return 0;
}