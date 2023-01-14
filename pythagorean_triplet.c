#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	float num1,num2,num3,c;
	int s;
	printf("Tell the number you are entering-\"first, second or third\" from the pythagorean triplet\n");
	scanf("%d",&s);
	if((s==1)||(s==2)||(s==3))
	{
		if(s==1)
		{
			printf("\nEnter the number\n");
			scanf("%f",&num1);
			c=num1/2;
			num2=c*c-1;
			num3=c*c+1;
			printf("\nThe second number of pythagorean triplet is %f\n",num2);
			printf("The third number of pythagorean triplet is %f\n\n",num3);
			printf("Therefore, the pythgorean triplet is %f, %f and %f\n",num1,num2,num3);
		}
		else if(s==2)
		{
			printf("\nEnter the number\n");
			scanf("%f",&num2);
			c=sqrt(num2+1);
			num1=c*2;
			num3=c*c+1;
			printf("\nThe first number of pythagorean triplet is %f\n",num1);
			printf("The third number of pythagorean triplet is %f\n\n",num3);
			printf("Therefore, the pythgorean triplet is %f, %f and %f\n",num1,num2,num3);
		}
		else
		{
			printf("\nEnter the number\n");
			scanf("%f",&num3);
			c=sqrt(num3-1);
			num1=c*2;
			num2=c*c-1;
			printf("\nThe first number of pythagorean triplet is %f\n",num1);
			printf("The second number of pythagorean triplet is %f\n\n",num2);
			printf("Therefore, the pythgorean triplet is %f, %f and %f\n",num1,num2,num3);
		}
    }
    else
    {
    	printf("NOT APPLICABLE\n");
	}
	printf("\nPress any key to exit");
	getch();
	return 0;
}
