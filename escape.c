#include<stdio.h>
int main(){
	printf("Code for escape sequences\n\n");
	
	// 1st one - "\n" => this creates a new line and place the cursor there .
	printf("Welcome to\n C programming\n\n");
	
	//2nd - "\t" => generates few spaces in the same line and then prints .
	printf("Hello\t naren\t here\n");
	
	//3rd - "\f => form feed (no use)
	printf("\n below is a classic example");
	printf(" \n \f ");	
	
	//4th - "\r" => carriage return .
	// if we use it the output of the used line starts from the position 0 removing what ever is present at that position .
	printf("Hello fri \rends\n\n");
	
	//5th  - "\a" => the beep sound one .
	printf("Hi my name is n\aa\ar\ae\an\a\n\n");
	
	//6th - "\b" => backsapce a charachter .
	printf("Hello Naren\b n\n\n");// the n before \b will be removed 
		
	//7th - " \' " => used to print single quote 
	printf("My name is /'Narendra/'\n\n");
	
	//8th - " \" " => used to print double quotes
	printf("My name is \"Narendra\"\n\n ");
	
	//9th - "\?" => used to print question mark
	printf("How are you /? \n\n");
	
	//10th - "\\" => used to print back slash
	printf("Do you want C // C++\n\n");
	
	//11th -"\v" => used to print the vertical tab
	printf("Venkata \v Narendra");
	
	//12th - "\0" => used to print null value
	//statement after \0 will be omitted
	printf("I love my mom\0 so much");
	
	//13th -"/nnn => octal representation of number
	char* b = "J\116";
	printf(" \n%s\n", b);
	
	//14th - "/xhh" => hexadecimal represenation of number
	char* s = "\x4EJ";
	printf("\n%s", s);
}
