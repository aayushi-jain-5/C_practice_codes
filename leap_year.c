#include<stdio.h>

int main(){
	int n;
	printf("Enter the year to be checked.");
	scanf("%d",&n);
	if(n%4==0 && n%100!=0 || n%400==0 ){
		printf("yes %d is a leap year",n);
	}
	else{
		printf("Not a leap year");
	}
	return 0;
}
