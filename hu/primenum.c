#include<stdio.h>  
#include<math.h>  
  
int main()  
{  

    int a=10, b=20, count,i,j;
    if (a<b)
    {
        for (i = a; i <=b ; i++){
            for (j  =1; j<= i; j++){
                if(i%j==0){
                count++;
                }
            }

            if (count == 2){
            printf("%d\t", i);
            }

            count = 0;
        }

    }

    else{
        printf("invalid range");
    }
}

