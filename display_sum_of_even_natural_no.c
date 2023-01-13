#include<stdio.h>
int main()
{
	int i,n,r=0;
	printf("Input number of terms: ");
	scanf("%d",&n);
	printf("The even numbers are: ");
	for(i=1;i<=n*2;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
			r+=i;
		}
	}
	printf("\nThe sum of even Natural number upto %d term: %d",n,r);
	return 0;
}
