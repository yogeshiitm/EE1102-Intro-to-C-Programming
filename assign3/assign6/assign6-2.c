//Yogesh Agarwala_EE19B130
//a program on Collatz sequence
/* program to find the number n(starting from 1) for which the number of iterations needed to reach 1, exceeds 20 the first time. Similarly to find numbers for which iterations exceeds 50 and 100 for the first time*/

#include <stdio.h>

int main()
{
//n= the number for which we are finding the number of iterations
//m= duplicate variable of n
//i= iteration count
int n,m,i;
	for(n=2;i<=21;++n) 
	{
	   m=n; 
    	   for(i=1;m!=1;i++) 
	   {	
	     if(m%2==0)
	     m=m/2;
	     else
	     m=3*m+1;
	   }
	     
	}
	printf("The number n for which the number iterations to reach 1 in Collatz sequence exceeds 20 for the first time is= %d\n\n",n-1);
}
/*
//a= the number for which we are finding the number of iterations
//b= duplicate variable of a
//c= iteration count
int a,b,c;	
	for(a=2;c<=51;++a) 
	{
	   b=a; 
    	   for(c=1;b!=1;c++) 
	   {	
	     if(b%2==0)
	     b=b/2;
	     else
	     b=3*b+1;
	   }
	     
	}
	printf("The number for which the number iterations to reach 1 in Collatz sequence exceeds 50 for the first time is= %d\n\n",a-1);


//p= the number for which we are finding the number of iterations
//q= duplicate variable of p
//r= iteration count
int p,q,r;	
	for(q=2;r<=101;++p) 
	{
	   q=p; 
    	   for(r=1;q!=1;r++) 
	   {	
	     if(q%2==0)
	     q=q/2;
	     else
	     q=3*q+1;
	   }
	     
	}
	printf("The number n for which the number iterations to reach 1 in Collatz sequence exceeds 100 for the first time is= %d\n\n",p-1);
}
*/

