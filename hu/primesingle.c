#include<stdio.h>  
#include<math.h>  
  
int main()  
{  

    int a=13, count=0,i;
        for (i = 1; i <=a ; i++){
            if (a%i==0)
            {
                count++;
            }     
    }

    if (count==2)
    {
        printf("prime no");
    }
}

