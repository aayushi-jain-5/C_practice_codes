#include<stdio.h>
#include<conio.h>

int main(){
	int x,y;
	printf("Enter the numbers");
	scanf("%d%d",&x,&y);
	 
	 //swap
	 x=x^y;
	 y=x^y;
	 x=x^y;
	 
	 printf("first number %d  Second number %d",x,y);
	 
	 return 0;
}
