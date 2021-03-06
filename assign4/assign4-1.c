//Yogesh Agarwala_EE19B130

/*This program read inputs from another file (testfile) until EOF and Output contents of testfile to stdout leaving out spaces and tabs from the testfile but keeping all other char including \n intact*/

//To run this program--------cc assign4-1.c---------cat testfile.c | ./a.out


#include <stdio.h>
int main()
{
	int c,d;

	//this for loop ensures that it takes char present from test file till the end of file
	for(c=getchar(); c!=EOF; c=getchar())
	
	{
	//when getchar takes space or tab then don't use putchar i.e don't print it 
	   if(c ==' ' || c=='\t')  
	   continue;
	//when getchar have not taken space or tab then use putchar i.e print it in the output
	   else		      
	   putchar(c);   
	}

return 0;
}
