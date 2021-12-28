#include<stdio.h>

void main()
{
   int age;
	printf("Checking eligibility for voting through goto statement");	
   printf("Enter you age : ");
   scanf("%d", &age);
   if(age>=18)
        goto g; 
   else
        goto s;
        
	g: {
		printf("you are Eligible\n");
		return 0;
	}
    s: {
    	printf("you are not Eligible");
		return 0;	
	}
}
