#include <stdio.h>
#include <conio.h>
 #include <math.h>
int main(){
    float a,b,c;
    float disc,r1,r2,real,img;
    printf("enter coefficients of a,b and c");
    scanf("%f%f%f",&a,&b,&c);
    disc = b*b - 4*a*c;
    if (disc>0){

        r1 = (-b+sqrt(disc))/(2*a);
        r2 = (-b-sqrt(disc))/(2*a);
        printf ("roots are %f and %f", r1,r2);

    }

    else if (disc == 0){
        r1 = r2 = -b/2*a;
        printf ("roots are %f and %f", r1,r2);


    }

    else{
        real = -b/2*a;
        img = sqrt ((-disc)/(2*a));
        printf("roots are %f + %f i and %f - %f i", real, img, real, img);


    }

    getch();
    return 0;




}