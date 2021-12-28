#include<stdio.h>
int main(){
	printf("Code for performing else if\n");
	int a,b,c;
	printf("Enter the 3 numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		printf("%d is the largest number",a);
	}else if(b>a && b>c){
		printf("%d is the largest number",b);
	}else if(c>a && c>b){
		printf("%d is the largest number",c);
	}else{
		printf("All are same or any two may be same");
	}
}
