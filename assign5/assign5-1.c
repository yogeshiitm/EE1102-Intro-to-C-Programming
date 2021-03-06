//Yogesh Agarwala_EE19B130
//A program to read a string from stdin of arbitrary length (from 0 to 255) using fgets


#include <stdio.h>

int main()
{
	int i;
	char Instring1[256],string2[256];


	//Output characters InString1[3] and InString1[11] contained in InString1 array.
	printf("Enter a string1: ");
	fgets(Instring1, 256, stdin);
	printf ("\n4th  character of string1 is: %c\n",Instring1[3]);
	printf ("12th character of string1 is: %c\n\n",Instring1[11]);


	//Output characters contained in InString1 array and print the length of the string.
	printf("\nString1= ");
	for (i=0; Instring1[i] !='\0'; i++)
	printf("%c",Instring1[i]);
	printf("The length of the string1 is: %d\n\n",i);

	
	//Program to strip off ‘\n’ from InString1 and then to find the length of InString1 after stripping ‘\n’.
	printf("\nString1 without \\n is: ");
	for (i=0; Instring1[i] !='\n'; i++)
	printf("%c",Instring1[i]);
	printf("\nThe length of the string1 without \\n is: %d\n\n",i);

	
	//Program to copy InString1 to String2
	for(i = 0; Instring1[i] != '\0'; ++i)
        string2[i] = Instring1[i];
	printf ("\nString2= %s\n",string2);

	return 0;
}

