/*Yogesh Agarwala_EE19b130*/
/*This C program is for multiplting 2 second order polynomial and getting the coefficients of the resultant 4th order polynomial*/


#include <stdio.h>
int main()
{
  float a,b,c,p,q,r,k,l,m,n,o;

    /*Here we need to input a,b,c which are the coefficients of the first polynomial to be multiplied*/
    printf("\nIf the first polynomial is of the form a(x^2)+b(x)+c then");	
	printf("\nEnter a: ");
	scanf("%f",&a);
	printf("Enter b: ");
	scanf("%f",&b);
	printf("Enter c: ");
	scanf("%f",&c);

    /*Here we need to input p,q,r which are the coefficients of the second polynomial to be multiplied*/
    printf("\nIf the second polynomial is of the form p(x^2)+q(x)+r then");
	printf("\nEnter p: ");
	scanf("%f",&p);
	printf("Enter q: ");
	scanf("%f",&q);
	printf("Enter r: ");
	scanf("%f",&r);

k=a*p;
l=a*q+b*p;
m=a*r+b*q+c*p;
n=b*r+c*q;
o=c*r;

    /*Here we get the output coefficients of the 4th order polynomial obtained by the product of the above 2 polynomials*/
    printf("\nIn the product of this two polynomials, the coefficient of\n");
	printf("(x^4)= %f\n",k);
	printf("(x^3)= %f\n",l);
	printf("(x^2)= %f\n",m);
	printf("(x^1)= %f\n",n);
	printf("(x^0)= %f\n\n",o);

return 0;
}


