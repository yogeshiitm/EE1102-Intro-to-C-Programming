#include <stdio.h>

int mystrlen(char string[256]);
void mystrcpy(char string[256]);

int main()
{

	char string1[256];
	printf("Enter string1: ");
	fgets(string1, 256, stdin);

	//to find length of string1
	printf("Length of string1= %d\n",mystrlen(string1));

	//to copy string1 to string2
	mystrcpy(string1);

 
	return 0;
}
