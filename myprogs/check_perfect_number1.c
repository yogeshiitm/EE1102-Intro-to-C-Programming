/*Yogesh Agarwala_EE19B130*/
/*This is a C program to check whether a number is a perfect number or not*/

#include<stdio.h>
int main()

{
//defining the variables
int n,i,sum=0;

   
    //asking for the number to be checked
    printf("Enter a positive integer: ");
    scanf("%d",&n);
		

       //sanity check if n is -ve
       if(n>0)
           {
	   for(i=1;i<=(n/2);i++)
	   if(n%i==0) //checking if i is a divisor of the number where i is from 1 to (n/2)
 	   sum=sum+i; //finding the sum of the divisors
  	   if (sum==n) //checking if the sum of the divisors is equal to the number itself
	   printf("The number is a perfect number\n\n");
	   else
	   printf("The number is not a perfect number\n\n");
           }

       else
       printf("Error: This is not a positive integer\n\n");


return 0;
}




