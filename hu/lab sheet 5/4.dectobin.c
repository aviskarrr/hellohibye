#include<stdio.h>
#include<math.h>
void dectoBin(){
    int dec,rem,power=0;
    long long int temp;
    long long int bin = 0;
    printf("Enter decimal no - ");
    scanf("%d",&dec);
    while (dec!=0)
    {
        rem = dec%2;
        temp = pow(10,power);
        bin += rem*temp;
        power++;
        dec/=2;
    }

    printf("binary = %lld", bin);
    
    
}

int main(){
    dectoBin();
    return 0;
}