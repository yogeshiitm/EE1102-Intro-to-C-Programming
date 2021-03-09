#include<stdio.h>

int mystrlen(char string[255]);

int main()
{
	int n;
	char string1[255];

	//taking the input string
	printf("Enter a string1: ");
	fgets(string1, 255, stdin);


	//printing length
	printf("\nLength of the string1= %d\n",mystrlen(string1));

}

int mystrlen(char string[255])
{
	int i;
	char *ptr;
	ptr= string;
	for(i=0;*ptr!='\n';ptr++,i++);
	return i;
}





