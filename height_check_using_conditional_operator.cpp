#include<stdio.h>
int main()
{
	int h;
	printf("Enter your height: ");
	scanf("%d",&h);
	h>=134&&h<=140?printf("low"):h>=141&&h<=150?printf("Medium"):
		h>=151&&h<=160?printf("High"):printf("Abnormal");
	return 0;	
}
