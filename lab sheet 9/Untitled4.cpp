#include <stdio.h>

typedef struct {
    double real;
    double imag;
} complex;

int main() {
    complex num1,num2;
    printf("Enter complex and real part (1):");
    scanf("%lf %lf",&num1.real,&num1.imag);
    printf("Enter complex and real part (2):");
    scanf("%lf %lf",&num2.real,&num2.imag);


    complex sum, product;

    // Adding two complex numbers
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    // Multiplying two complex numbers
    product.real = num1.real * num2.real - num1.imag * num2.imag;
    product.imag = num1.real * num2.imag + num1.imag * num2.real;

    printf("Sum: %.2lf + %.2lfi\n", sum.real, sum.imag);
    printf("Product: %.2lf + %.2lfi\n", product.real, product.imag);

    return 0;
}

