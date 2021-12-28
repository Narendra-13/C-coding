#include<stdio.h>
int main(){
	//Arithmetic Operators
	int i,j,k; 
	printf("Enter numbers : ");
	scanf("%d%d",&i,&j);
	k=i+j;
	printf("sum of two numbers is %d\n", k);
	k=i-j;
	printf("diff of two numbers is %d\n", k);
	k=i*j;
	printf("product of two numbers is %d\n", k);	
	k=i/j;
	printf("division of two numbers is %d\n", k);
	k=i%j;
	printf("remainder when divided numbers is %d\n\n", k);
	
	//Increment and Decrement Operators 
	printf("The post increment is : %d \n",i++);
	printf("The post decrement is : %d \n",i--);
	printf("The pre increment is : %d \n",++i);
	printf("The pre increment is : %d \n\n",--i);
	
	//Relational operators are :
	//	==	Is equal to
	//	!=	Is not equal to
	//	>	Greater than
	//	<	Less than
	//	>=	Greater than or equal to
	//	<=	Less than or equal to
	
	//Logical operators are :
	//	&& and
	//	|| or
	//	!  not
	
	//bitwise operators
	//	<<	Binary Left Shift Operator
	//	>>	Binary Right Shift Operator
	//	~	Binary Ones Complement Operator
	//	&	Binary AND Operator
	//	^	Binary XOR Operator
	//	|	Binary OR Operator
	
	//Assignment operators
	//	=	Assign
	//	+=	Increments then assign
	//	-=	Decrements then assign
	//	*=	Multiplies then assign
	//	/=	Divides then assign
	//	%=	Modulus then assign
	//	<<=	Left shift and assign
	//	>>=	Right shift and assign
	//	&=	Bitwise AND assign
	//	^=	Bitwise exclusive OR and assign
	//	|=	Bitwise inclusive OR and assign	
	
	// conditional operator
	//int s;
	//s = (i>j) ?i:j;
	//printf(s);
	
	//special operators
	//sizeof()	 Returns the size of a memory location.
	//	&	 Returns the address of a memory location.
	//	*	 Pointer to a variable.
	printf("size of integer: %d\n", sizeof(i));
}
