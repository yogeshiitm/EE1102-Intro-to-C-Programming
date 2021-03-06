//Yogesh Agarwala_EE19B130
//my strcmp function
//use of this function is to compare string1 and string2

#include <stdio.h>

void mystrcmp(char string1[256], char string2[256])
{
	int i,n;

	//difference b/w strings means difference in ASCII value of first different char of both strings
	//continuing the for loop until the first point of differnce of the two strings & till neither of the string ends
	for(i=0; string1[i]==string2[i] && (string1[i] || string2[i]=='\n') ;i++);
	n= string1[i] - string2[i];
	printf("strcmp(string1,string2)= %d\n",n);

	
	if(n==0)
	printf("zero value => Both strings are equal\n");


	else
	printf("non-zero value => Both strings are unequal\n\n");	
 
	return;
}
