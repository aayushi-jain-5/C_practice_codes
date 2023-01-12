//Ternary operator
#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c;
	a=2;b=4;c=8;
	int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("%d",max);
	return 0;
	
}
