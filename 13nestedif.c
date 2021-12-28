#include<stdio.h>
int main(){
	printf("Code for nested if \n");
	int rank;
	printf("Enter your rank in your class : ");
	scanf("%d",&rank);
	if(rank<10){
		printf("You are one of top 10 of class \n");
		if(rank<= 3){
			printf("Your rank is in top 3\n");
			if(rank==1){
				printf("You are the topper of the class");
			}
			else{
				printf("Close but not cigar");
			}
		}else{
			printf("Try to make it to top 3");
		}
	}else{
		printf("You need to work hard");
	}
}
