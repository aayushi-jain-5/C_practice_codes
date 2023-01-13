#include<stdio.h>
int main()
{
	int a;
	printf("Enter your age: ");
	scanf("%d",&a);
	a>=18?printf("Congrats! You are eligible for casting your vote"):
		printf("Your are not eligible for casting your vote");
	return 0;	
}
