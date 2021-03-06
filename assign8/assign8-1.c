//Yogesh Agarwala_EE19B130
//program to read a string from stdin and then (1) string length (2) string copy


#include<stdio.h>
#define MAXLENGTH 255
int mystrlen(char *);
void mystrcpyn(char *,char *, int);


int main()
{
	int n,i;
	char string1[255],string2[255], *ptr1, *ptr2;

	//taking the input string
	printf("Enter a string1: ");
	fgets(string1, MAXLENGTH, stdin);
	ptr1= string1;
	ptr2= string2;

	
	printf("Enter no. of char to be copied from string1 to string2: ");
	scanf("%d",&n);


	//printing length
	printf("\nLength of string1 excluding '\\n' = %d\n",mystrlen(ptr1));

	//coping string1 to string2
	mystrcpyn(ptr1,ptr2,n);
	printf("String2= %s\n",string2);

	return 0;
}



int mystrlen(char *p)
{
	int i;
	for(i=0; *(p+i)!='\n'; i++); //alterately for(i=0; *p!='\n'; p++, i++);
	//finding the length of the string1 using pointer
	return i;
}



void mystrcpyn(char *p,char *q,int n)
{
	int i;
	for(i=0;i<n;i++)
	*(q+i)=*(p+i); //alternately q[i]=p[i];
	//copying content of string1 to string2 using pointer

	return;
}
	

