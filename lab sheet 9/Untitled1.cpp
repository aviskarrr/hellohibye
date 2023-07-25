#include<stdio.h>
#include<conio.h>
struct company{
	char name[20];
	char address[20];
	int phone;
};
int main(){
	struct company c1;
	printf("Enter name\n");
	gets(c1.name);
	printf("Enter Address \n");
	gets(c1.address);
	printf("Enter phone no\n");
	scanf("%d",&c1.phone);
	
	printf("Name = %s\n",c1.name);
	printf("Address = %s\n",c1.address);
	printf("Phone no = %d\n",c1.phone);
	getch();
	return 0;
}
