/*Yogesh Agarwala_EE19B130*/
/*This is a C program to find the perfect numbers between 0 and any positive integer*/

#include<stdio.h>
int main()
{
    int i,j,p;
    printf("Enter any positive integer: ");
    scanf("%d",&p);

	if(p<=0)
	printf("Error: This is not a positive integer\n\n");

	else if(p>=0 && p<6)
	printf("There is no perfect number between 0 and %d\n\n",p);

	else if(p>=6 && p<28)
	printf("Perfect number between 0 and %d is 6\n\n",p);
    
	else
	{printf("Perfect numbers between 0 and %d are\n",p);
	   for(i=1;i<=p;i++)
    	   {
   	     int sum=0;	
	     for(j=1;j<=(i/2);j++)
	     {if(i%j==0)
	     sum=sum+j;}
	     if(sum==i)
	     printf("%d\n",i);
	   }
	}

return 0;
}




