//Basic calculator

#include<conio.h>
#include<stdio.h>

int main(){
	int a,b;
char c;
printf("Enter two numbers");
scanf("%d %d %c",&a,&b,&c);
if(c=='+'){
	printf("%d",a+b);
}
else if(c=='-'){
	printf("%d",a-b);
}
else if(c=='*'){
	printf("%d",a*b);
}
else if(c=='/'){
	printf("%d",a/b);
}
else{
	printf("%d",a%b);
}
return 0;
}
