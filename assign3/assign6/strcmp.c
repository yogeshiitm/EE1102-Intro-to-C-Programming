#include <stdio.h>
#include <string.h>

int main()
{
	char string1[256],string2[256],string3[256];
	printf("Enter string1: ");
	fgets(string1,256,stdin);

	printf("Enter string2: ");
	fgets(string2,256,stdin);

	printf("%d\n",strcmp(string1, string2));

}

