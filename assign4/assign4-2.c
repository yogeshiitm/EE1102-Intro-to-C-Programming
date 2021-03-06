//Yogesh Agarwala_EE19B130

/*This program read inputs from another file(testfile) until EOF and Output twice the number of spaces contained in testfile but retaining tabs and other char including \n intact*/

//To run this program--------cc assign4-2.c---------cat testfile.c | ./a.out


#include <stdio.h>
int main()
{

	int c;

	c=getchar();

	//this while loop ensures that it takes char present from test file till the end of file
	while( c!=EOF)
	{

	     //when getchar takes space then use putchar 2 times so it will print double the spaces in testfile
	     if(c==' ')
	     {putchar(c);putchar(c);}

	     //when getchar is not space then use putchar only once so that it prints rest of the test file as it is
	     else
	     putchar(c);

	c=getchar();
	}

return 0;
}
