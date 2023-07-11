#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char sen[100];
    printf("Enter a sentence = ");
    fgets(sen,100,stdin);

    if (sen[strlen(sen) - 1] == '\n') {
        sen[strlen(sen) - 1] = '\0';
    }

    for(i = 0; i<strlen(sen); i++){
        if (sen[i]=='t'&&sen[i+1]=='h'&&sen[i+2]=='e'){
            sen[i]='*';
            sen[i+1]='*';
            sen[i+2]='*';
        }

    }


    printf("%s",sen);

    return 0;

}