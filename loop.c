#include<stdio.h>
#include<conio.h>

int main(){
	int i,j;
	char arr[7][10];
	printf("Enter the week days");
	for(i=0;i<7;i++){
		scanf("%s",&arr[i]);
	}
	for(j=0;j<7;j+=2){
		printf("%s\n",arr[j]);
	}
	
	
	return 0;
}
