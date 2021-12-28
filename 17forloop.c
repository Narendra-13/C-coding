#include<stdio.h>
int main(){
	printf("Code for printing multiplication table\n");
	int n,i,k;
	printf("Enter the number for which the table is required : ");
	scanf("%d",&n);
	printf("Enter till which digit multiplication is required : ");
	scanf("%d",&k);
	for(i=1;i<=k;i++){
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
