#include<stdio.h>
int main(){
	printf("Code using do while loop\n");
	int n;
	int i=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	do
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i=i+1;
	}while(i<=10);
	
}

