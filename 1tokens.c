#include<stdio.h>
int main(){
	char a=atoi("149");
	printf("%s %c %s %c %s %c %s %c %s %c %s","Tokens can be classified as follows: \n",a,"Keywords\n",a,"Identifiers\n",a,"Constants\n",a,"Operators\n",a,"Special Symbols\n");
	
	
	printf("There are 32 keywords\n");
	printf("Identifiers are variables names .They contain \'_\',\'digits\',\'numbers\'.It should not start with digit and should not be a keyword.\n");
	printf("Operators are unary,binary,ternary.They can be any of arithematic ,relational ,logical ,assignment ,bitwise ,ternary ,increment ,unary\n");
	printf("Constants can be any of integer ,real ,character ,string ,octal ,hexa\n");
	printf("Some special symbols in c are : [] () {}, ; * = #");
}
