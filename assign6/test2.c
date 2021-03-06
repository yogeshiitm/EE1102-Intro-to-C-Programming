#include <stdio.h>

int main()
{
	
	
	int n;
	char str1[256] = "abcd\n";
	char str2[256] = "abce\n";

	n= str1[5] - str2[5];
	printf("Difference b/w both strings is= %d\n",n);
	
	
	
 
	return 0;
}
