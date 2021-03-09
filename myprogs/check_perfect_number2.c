#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
	

    if(n>0)
    {
	for(i=1;i<=(n/2);i++)
	
	if(n%i==0)
	sum=sum+i;

	if (sum==n)	
	printf("The number is a perfect number\n\n");
	else
	printf("The number is not a perfect number\n\n");
    }

    else
    printf("Error: This is not a positive integer\n\n");

    return 0;
}




