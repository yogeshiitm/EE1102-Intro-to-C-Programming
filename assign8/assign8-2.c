//Yogesh Agarwala_EE19B130
//program to read two strings from stdin and then (1) string compare (2) string concatenate


#include<stdio.h>
#define MAXLENGTH 255
void mystrcmpn(char *,char *,int);
void mystrcatn(char *,char *,char *,int);


int main()
{
	int n,i;
	char string1[255],string2[255],string3[255], *ptr1, *ptr2, *ptr3;
	
	//input string1
	printf("Enter string1: ");
	fgets(string1, MAXLENGTH, stdin);

	//input string2
	printf("Enter string2: ");
	fgets(string2, MAXLENGTH, stdin);

	ptr1= string1;
	ptr2= string2;
	ptr3= string3;
	
	printf("Enter no. of char to be compared and concatenated: ");
	scanf("%d",&n);
	printf("\n");

	//to compare n char from string1 and string2
	mystrcmpn(ptr1,ptr2,n);

	
	//concatenate n char from String1,String2 to String3
	mystrcatn(ptr1,ptr2,ptr3,n);
	printf("strcatn(string1,string2)=>\nconcatenated string with %d char from each string= %s\n\n",n,string3);

	return 0;
}



void mystrcmpn(char *p,char *q,int n)
{
	int i,m;
	for(i=0; *(p+i)==*(q+i) && (*(p+i) || *(q+i)!= '\n') && i<n; i++);
	/*incrementing the address contained in pointer until we get the first different char, while comparing the first n char*/
	/*we used (*(p+i) || *(q+i)!= '\n') since otherwise if both strings are equal then the loop will continue and compare '\n' and 		then'\0' in both strings and then it will come out of the loop and since after '\0' junk is stored in the loop so the difference m= 		*(p+i)-*(q+i) will also be a junk value*/

	if (i!=n) 
	m= *(p+i)-*(q+i); //difference of the char where the strings become different

	else
	m=0; /*since we need to compare only first n char so if we don't do this step and if both the strings are equal till n char then 		will coming out of the for loop due to i++ i will become n and so we will get the difference of n+1 char of the both strings which 		we don't want*/
	

	//printing the output
	printf("strcmpn(string1,string2)= %d\n",m);
	if(m==0)
	printf("zero value => First %d characters of both strings are equal\n\n",n);
	else
	printf("non-zero value => First %d characters of both strings are unequal\n\n",n);

return;
}



void mystrcatn(char *p,char *q,char *r,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	 *(r+i) =*(p+i); //copying first n char of string1 to string3
	 *(r+(n+i))=*(q+i); //copying first n char of string2 to string3
	}
	*(r+2*n)='\0'; // to end the string3 after having 2n char
	return;
}
	

