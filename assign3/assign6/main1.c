//Yogesh Agarwala_EE19B130
//program to read a string from stdin and then (1) string length (2) string copy
/*commands to compile, link and run
	cc -c main1.c
	cc -c mystrlen.c
	cc -c mystrcpy.c

	cc main1.o mystrlen.o mystrcpy.o
	./a.out
*/


#include <stdio.h>

int mystrlen(char string[256]);
void mystrcpy(char string[256]);

int main()
{

	char string1[256];

	//taking the input string
	printf("Enter a string1: ");
	fgets(string1, 256, stdin);

	//to find length of the string1
	// Calling the function mystrlen
	printf("\nLength of the string1= %d\n",mystrlen(string1));

	//to copy input string to string2
	// Calling the function mystrcpy
	mystrcpy(string1);

 
	return 0;
}
