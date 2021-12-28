#include<stdio.h>
int fact();

int main(){
	printf("Functions\n");
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("The factorial is %d",fact(n));
}

int fact(int n){
	if(n==0 || n==1){
		return 1;
	}else{
		return n*fact(n-1);
	}
}
