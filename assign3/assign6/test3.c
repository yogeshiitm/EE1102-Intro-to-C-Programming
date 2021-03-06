#include <stdio.h>

int main()
{
	int i,n;
	char string1[256], string2[256];
	
	//input string1
	printf("Enter string1: ");
	fgets(string1, 256, stdin);

	//input string2
	printf("Enter string2: ");
	fgets(string2, 256, stdin);


	n= string1[0] - string2[0];
	printf("strcmp(string1,string2)= %d\n",n);

	n= string1[1] - string2[1];
	printf("strcmp(string1,string2)= %d\n",n);

	n= string1[2] - string2[2];
	printf("strcmp(string1,string2)= %d\n",n);

	n= string1[3] - string2[3];
	printf("strcmp(string1,string2)= %d\n",n);

	for(i=0; string1[i]==string2[i] && (string1[i] || string2[i]=='\n') ;i++);
	n= string1[i] - string2[i];
	printf("strcmp(string1,string2)= %d\n",n);
}
