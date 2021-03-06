#include <stdio.h>

int mystrlen(char string[256])
{
int i;
for(i=0; string[i] !='\n'; i++);
return i;
}

int main()
{

	char string1[256];
	printf("Enter string1: ");
	fgets(string1, 256, stdin);
	printf("Length of string1= %d\n",mystrlen(string1));	
 
	return 0;
}
