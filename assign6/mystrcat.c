//Yogesh Agarwala_EE19B130
//my strcat function
//use of this function is to concatenate string1,string2 to string3

#include <stdio.h>

void mystrcat(char string1[256], char string2[256])
{

	int i,j;
	char string3[256];

	//copying string1 to string3
	for(i = 0; string1[i] != '\n'; i++)
        string3[i] = string1[i];

	//now copying string2 to string3
	for(j = 0; string2[j] != '\0'; j++)
	string3[j+i] = string2[j];

	printf("\nConcatenated string3= %s\n",string3);
	return;

}
