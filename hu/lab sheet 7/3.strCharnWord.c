#include <stdio.h>  
#include <string.h>  

int main()  
{  
    char string[] = "Aviskar Poudel";  
    int count = 0,count2 =0,i;



    for(i = 0; string[i]!= '\0'; i++) {  
        if(string[i] != ' ' && string[i]!='\n')  {
            count++;  
        }

        if ((string[i] == ' ' || string[i] == '\n') && string[i+1]!=' ') {
            count2++;
        }
    }
    count2++;  

    printf("Total number of characters in a string: %d", count);  
    printf("Total number of words in a string: %d", count2);  
    return 0;  
}  
