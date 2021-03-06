//Yogesh Agarwala_EE19B130
//A program to concatenate InString1, String2 to String3.


#include <stdio.h>

int main()
{
	int i,j;
	char Instring1[256],string2[256],string3[256];

	//Take two strings string1 and string2 as input
	printf("Enter String1: ");
	fgets(Instring1, 256, stdin);
	printf("Enter String2: ");
	fgets(string2, 256, stdin);


	//concatenate string1,string2 to string3
	for (i=0; Instring1[i] !='\n'; i++)
	string3[i]=Instring1[i];

	for (j=0; string2[j] !='\0'; j++)
	string3[j+i]=string2[j];
	
	printf("\nString3= %s",string3);
	

return 0;
}


	
