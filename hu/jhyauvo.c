#include <stdio.h>
#include <conio.h>
 #include <math.h>
int main(){
    char a;
    int b;
    printf("enter a char\n");
    scanf("%c", &a);
    b = a;
    if (b>= 97 && b<=122)
    {
        b = b -32;
    }

    else if (b>= 65 && b<=96)
    {
        b = b+32;
    }

    else
    {
        printf("wrong value\n");
    }

    printf("%c",b);
    
    
    
    getch();
    return 0;

}