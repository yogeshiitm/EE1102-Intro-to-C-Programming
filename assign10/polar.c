//Yogesh Agarwala_EE19B130
//functions to multiply and divide complex in polar form
//Be careful while compilation........(cc polar.c -lm).............(-lm) must be used since math.h is used 

#include <stdio.h>
#include <math.h>
#define PIE 3.14159265

typedef struct{ float mag; float ang;}complex_polar; //new datatype
typedef struct{ float real; float imag;}complex_rect; //new datatype
void multiply (complex_polar, complex_polar, complex_rect*); //function
void divide (complex_polar, complex_polar, complex_rect*); //function


void main()
{

//declaring variables
	complex_polar a, b;
	complex_rect p,q;


//taking input complex numbers	
	printf("If complex number a= (r*cosθ) + i(r*sinθ)\n");
	printf("Enter r: ");
	scanf("%f", &a.mag);

	printf("Enter θ(in degree): ");
	scanf("%f", &a.ang);

	printf("\nIf complex number b= (r*cosθ) + i(r*sinθ)\n");
	printf("Enter r: ");
	scanf("%f", &b.mag);

	printf("Enter θ(in degree): ");
	scanf("%f", &b.ang);


//calling function
	multiply(a,b,&p); //............&p..........sending address
	printf("\nProduct a*b= (%.2f) + i(%.2f)\n", p.real, p.imag);


//calling function
	divide(a,b,&q); //.............&q..........sending address
	printf("Division a/b= (%.2f) + i(%.2f)\n", q.real, q.imag);

}


void multiply(complex_polar a, complex_polar b, complex_rect* ptr)
{
	float p,q,r,s,t,u;	
	p= a.mag;
	q= cos(a.ang*PIE/180);
	r= sin(a.ang*PIE/180);
	s= b.mag;
	t= cos(b.ang*PIE/180);
	u= sin(b.ang*PIE/180);

	(*ptr).real = p*q*s*t - p*r*s*u; //ptr= &p........*ptr= p
	(*ptr).imag = p*q*s*u + p*r*s*t; //ptr= &p........*ptr= p
}

void divide(complex_polar a, complex_polar b, complex_rect* ptr)
{
	float p,q,r,s,t,u;	
	p= a.mag;
	q= cos(a.ang*PIE/180);
	r= sin(a.ang*PIE/180);
	s= b.mag;
	t= cos(b.ang*PIE/180);
	u= sin(b.ang*PIE/180);

	(*ptr).real = (p*q*s*t + p*r*s*u)/(s*s); //ptr= &q........*ptr= q
	(*ptr).imag = (-p*q*s*u + p*r*s*t)/(s*s); //ptr= &q........*ptr= q
}







