#include<stdio.h>
#include<math.h>
int main(){
    int i,a,sum;
    a = 10;
    int n = 7;
    int p = pow(2,n);
    printf("-%d,", a);

    for (i = 2; i < p; i*=2)
    {
        sum = a+i;
        printf("-%d,",sum);
    }

    return 0;
    
    
}