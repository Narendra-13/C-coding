#include<stdio.h>
#include<math.h>
#define pi 3.14159265
int main(){
	float a,b,c,intpart,factpart,val,deg;
	val = pi / 180.0 ;
	printf("Enter two number to : ");
	scanf("%f%f",&a,&b);
	printf("To find ceil of numbers \n");
	printf("Ceil of %f is : %f\n\n",a,ceil(a));
	a=ceil(a);
	printf("To find floor of number \n");
	printf("Floor of %f is : %f\n\n",b,floor(b));
	b=floor(b);
	printf("To find absolute value \n");
	printf("The absolute value of %f is : %f\n",a,fabs(a));
	a=fabs(a);
	printf("The absolute value of %f is : %f\n\n",b,fabs(b));
	b=fabs(b);
	printf("To find log value with base \'e\' \n");
	printf("The log of %f is : %f\n\n",a,log(a));
	printf("To find the log value with base \'10\' \n");
	printf("The log of %f is : %f\n\n",b,log(b));
	printf("To find remainder \n");
	printf("Enter the 3rd number : ");
	scanf("%f",&c);
	printf("The remainder when %f is divided by %f is : %f\n\n",c,a,fmod(c,a));
	printf("To find square root \n");
	printf("The square root of %f is %f\n\n",a,sqrt(a));
	printf("To find power of integer \n");
	printf("The value when %f is raised to power of %f is : %f\n\n",a,b,pow(a,b));
	printf("The value when \'e\' is raised to power of %f is : %f\n\n",a,exp(a));
	printf("To seperate integer and decimal part \n");
	factpart = modf(c,&intpart);
	printf("The factorial part of %f is : %f\n",factpart);
	printf("The integer part of %f is : %f\n\n",intpart);
	printf("Enter the angle in degrees : ");
	scanf("%f",&deg);
	printf("The cosine of %f is : %f degrees\n",deg,cos(deg*val));
}
