#include<stdio.h>
int main(){
	printf("This is code for if-else to check number is positive or negative\n");
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n>0){
		printf("Given number is positive");
	}else{
		printf("Given number is negative");
	}
}
