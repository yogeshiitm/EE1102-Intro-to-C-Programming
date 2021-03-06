//Yogesh Agarwala_EE19B130
//my strcpy function
//function to copy string1 to string2

#include <stdio.h>

//input type char but output type void
void mystrcpy(char string[256])
{
	int i;
	char string2[256];

	//assigning string2 the same values as in string1 until string1 reaches end
	for(i = 0; string[i] != '\0'; ++i)
        string2[i] = string[i]; 
	

	printf("String2= %s",string2);
	
	return;
}
