#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct employee{
	char name[20];
	char add[20];
	int phone;
};
int main(){
	struct employee e[5];
	printf("Enter the details of 5 employees = \n");
	int i;
	for (i=0;i<5;i++){
		fflush(stdin);
		printf("Enter Name = ");
		gets(e[i].name);
		printf("Enter Address = ");
		gets(e[i].add);
		printf("Enter Phone no = ");
		scanf("%d",&e[i].phone);
	}
	int j;
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if((strcmp(e[i].name,e[j].name))>0){
				struct employee temp = e[j];
				e[j]= e[i];
				e[i] = temp;
			}
		}
		
	}
	
	
	for (i=0;i<5;i++){
		printf("Name = %s\n",e[i].name);
		printf("Address = %s\n",e[i].add);
		printf("Phone no = %d\n",e[i].phone);
	}
	getch();
	return 0;
}
