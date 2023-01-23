#include<stdio.h>

int main(){
	double a,b,c;
	printf("Enter the length of the sides of the triangle.");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b==c){
		printf("The triangle is equilateral.");
	}
	else if(a==b || b==c ||c==a){
		printf("The triangle is isosceles.");
	}
	else{
		printf("The triangle is scalene.");
	}
	return 0;
}
