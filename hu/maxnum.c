#include <stdio.h> 
 
int main() { 
    int min, max, no; 
 
    printf( "Enter number (-1 to quit) : " ); 
    scanf( "%d", &no ); 
    min = max = no; 
    do { 
        printf( "Enter number (-1 to quit) : " ); 
        scanf( "%d", &no ); 
        if( no > max ) { 
            max = no; 
        } 
        if( no != -1 ) 
            if( no < min ) { 
                min = no; 
            } 
    } while( no != -1 ); 
 
    printf( "Maximum number : %d\n", max ); 
    printf( "Minimum number : %d\n", min ); 
 
    return 0; 
} 