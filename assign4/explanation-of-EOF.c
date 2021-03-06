#include <stdio.h>
int main()
{
int c, n=0;

printf("Enter any characters: ");
for(c=getchar(),n=0; c!= EOF ;++n,c=getchar());
/*EOF indicates "end of file". A newline (which is what happens when you press enter) isn't the end of a file, it's the end of a line, so a newline doesn't terminate this loop*/
/*If you're typing at the terminal and you want to provoke an end-of-file, use CTRL-D (unix-style systems) or CTRL-Z (Windows)*/


printf("The number of characters(including enter i.e \\n if any) are= %d\n\n",n);
// Here to print \n in the terminal using printf commmand we need to use \\n inside printf since otherwise line changes

}


/*Alterate for the complecated for-loop

int n= 0;
while (getchar() != EOF)
++n;

*/
