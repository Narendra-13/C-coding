#include<stdio.h>
int main(){
	printf("Code for printing reverse number\n");
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("The reverse number is : ");
	while(n>0){
		printf("%d",n%10);
		n = n/10;
	}
}
