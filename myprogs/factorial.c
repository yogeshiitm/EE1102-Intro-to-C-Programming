/*Yogesh Agarwala_EE19B130*/
/*This is the program to find factorial of a number*/

#include<stdio.h>
int main()
{
	int n,i;
	unsigned long long factorial=1;
	printf("Enter an integer");
	scanf("%d",&n);
	//sanity check; error if n is -ve
	if(n<0)
	     printf("Error: Factorial of a negative number doesn't exist");
	else
	    {for(i=1;i<=n;i++)
	      {
		 factorial *=i;
	      }
	      printf("Factorial of %d=%llu",n,factorial);
	    }
	return 0;
}

/*If we enter n=0 then since i=<n so i=0 hence the for loop is not performed even once & so it prints factorial=1 since initially before starting the 'for loop' we have asigned factorial=1 in the line "unsigned long long factorial=1"*/
