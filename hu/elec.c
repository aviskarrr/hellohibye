#include<stdio.h>
#include<conio.h>
int main(){
    float unit,prc;
    printf("enter your unit\n");
    scanf("%f",&unit );

    if (unit >20 && unit<=120)
    {
        prc = 80+((unit-20)*7.30);
        printf("price = %f",prc);
    }
    else if (unit>120){

        prc = 80 + 730 + ((unit - 120)*9.00);
        printf("price = %f",prc);
    }
            
    else{
        printf("price = 80");
    }
}