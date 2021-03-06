#include <stdio.h>
int main()
{

	int i;
	char str1[256],str2[256];

	//taking input string
	printf("Enter String: ");
	fgets(str1, 256, stdin);
	printf("\nASCII value of above string char are:");


	for (i=0; str1[i] !='\n'; i++)
		{
		//ASCII value
		int val= (int)str1[i];
		printf("\n%d",val);

		//checking if ascii is of alphabet then assigning the string char 'a'
		if((val<=122 && val>=97) || (val<=90 && val>=65))
		str2[i]= 97;

		//checking if ascii is of non-alphabenumeric then assigning the string char '%'
		else if (val<=38 && val>=33)
		str2[i]= 37;

		//replacing punctuation by char '.'
		else if (val<= 47 && val>=39)
		str2[i]= 46;

		else
		str2[i]= str1[i];		

		}

	str2[i]='\0';
	
	printf("\n\nNew String= %s\n",str2);

}	
