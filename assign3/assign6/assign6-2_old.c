//Yogesh Agarwala_EE19B130
//a program on Collatz sequence
/* program to find the number n(starting from 1) for which the number of iterations needed to reach 1, exceeds 20 the first time. Similarly to find numbers for which iterations exceeds 50 and 100 for the first time*/

#include <stdio.h>

int main()
{
	int n,m,i;
	
	for(n=2;i<=21;++n)
	{
	   printf("n= %d\n",n);
		m=n;
    	 
	   for(i=1;m!=1;i++) //i= iteration count
	   {	
	   	if(m%2==0)
	   	m=m/2;
	  

	   	else
	   	m=3*m+1;
	   printf("the value of i= %d\n",i);
	   }
	   
	   
	}
	printf("The number for which the number iterations to reach 1 exceeds 20 for the first time is= %d\n",n-1);
}

