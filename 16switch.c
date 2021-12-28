/*#include<stdio.h>
int main(){
	printf("Code for explaining switch case statement\n");
	int num;
	printf("Enter the number for switch case : ");
	scanf("%d",&num);
	
	switch(num){
		case(1) : {
			printf("You have selected number one ");
			break;
		}
		case(2) : {
			printf("You have selected number two ");
			break;
		}
		case(3) : {
			printf("You have selected number three ");
			break;
		}
		case(4) : {
			printf("You have selected number four ");
			break;
		}
		case(5) : {
			printf("You have selected number five ");
			break;
		}
		default : {
			printf("Out of scope ");
			break;
		}
					
	}
}*/

#include<stdio.h>
int main(){
	char color;
	printf("Traffic signal controller using switch stament \n");
	printf("Enter the traffic colour : ");
	scanf("%c",&color);
	
	switch(color){
		case('r'):{
			printf("Please stop");
			break;
		}
		case('o'):{
			printf("Get ready to go");
			break;
		}
		case('g'):{
			printf("U can go now");
			break;
		}
		default :{
			printf("No signal is given every one can move");
			break;
		}
	}
}
