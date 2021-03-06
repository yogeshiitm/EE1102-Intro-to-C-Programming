//Yogesh Agarwala_EE19B130
//program to read two strings from stdin and then (1) string concatenate (2) string compare
/*commands to compile, link and run
	cc -c main2.c
	cc -c mystrcat.c
	cc -c mystrcmp.c

	cc main2.o mystrcat.o mystrcmp.o
	./a.out
*/


#include <stdio.h>

void mystrcat(char string1[256],char string2[256]);
void mystrcmp(char string1[256],char string2[256]);

int main()
{
	
	char string1[256], string2[256];
	
	//input string1
	printf("Enter string1: ");
	fgets(string1, 256, stdin);

	//input string2
	printf("Enter string2: ");
	fgets(string2, 256, stdin);

	//concatenate String1,String2 to String3
	mystrcat(string1,string2);

	//to compare string1 and string2
	mystrcmp(string1,string2);

 
	return 0;
}
