//Yogesh Agarwala_EE19B130
//program to read strings from stdin & then (1)string length (2)string copy (3)concatenate 2 strings (4)compare 2 strings
/*commands to compile, link and run
	cc -c main.c
	cc -c mystrlen.c
	cc -c mystrcpy.c
	cc -c mystrcat.c
	cc -c mystrcmp.c

	cc main.o mystrlen.o mystrcpy.o mystrcat.o mystrcmp.o
	./a.out
*/


#include <stdio.h>

int mystrlen(char string1[256],char string2[256]);
void mystrcpy(char string1[256],char string2[256]);
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

	//to find length of the strings
	//calling the function mystrlen
	printf("\nLength of the string1= %d\n",mystrlen(string1));
	printf("\nLength of the string2= %d\n",mystrlen(string2));

	//to copy input string to string2
	//calling the function mystrcpy
	mystrcpy(string1,string2);

	//concatenate String1,String2 to String3
	mystrcat(string1,string2);

	//to compare string1 and string2
	mystrcmp(string1,string2);

 
	return 0;
}
