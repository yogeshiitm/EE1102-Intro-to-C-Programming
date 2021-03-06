/*Yogesh Agarwala_EE19B130*/
/*This is a C program to find roots of a quadratic equation*/
/*Run by typing (cc quadratic.c -lm) in the terminal instead of just (cc quadratic.c)*/


#include<stdio.h>
#include<math.h>

int main()
{
//defining the variables
float a,b,c,p,q,r,D;

	//asking for the coefficients of the quadratic
	printf("If the quadratic equation is of the form a(x^2)+b(x)+c then\n");
	printf("Enter a: ");
	scanf("%f",&a);
	printf("Enter b: ");
	scanf("%f",&b);
	printf("Enter c: ");
	scanf("%f",&c);

	/*where D is the discriminant, (p+q)&(p-q) are the real roots, (p+ir)&(p-ir) are the complex roots*/
	D=pow(b,2)-(4*a*c);
	p=(-b)/(2*a);
	q=sqrt(D)/(2*a);
	r=sqrt(-D)/(2*a);

	//condition for real & distinct roots
	if(D>0)
	    {
	    printf("The roots of the above equation are\n");
	    printf("%f\n%f\n",p+q,p-q);
	    }

	//condition for real & coincident roots
	else if(D==0)
	    {
	    printf("The only root of the above equation is\n");
	    printf("%f\n",p+q);
	    }

	//condition for non-real roots
	else
	    {
	    printf("The roots of the above equation are\n");
	    printf("(%f) + i(%f)\n",p,r);
	    printf("(%f) + i(%f)\n",p,r);
	    }


return 0;
}

