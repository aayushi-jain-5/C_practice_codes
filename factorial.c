#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("Input the number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		f*=(n-i);
	}
	printf("\nThe factorial of %d is %d",n,f);
	return 0;
}
