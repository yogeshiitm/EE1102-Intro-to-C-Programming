//Yogesh Agarwala_EE19B130
//program asks user to input two complex numbers in rectangular format


#include <stdio.h>

typedef struct{
  float real;
  float imag;
}complex_rect;


void add (complex_rect , complex_rect , complex_rect* );
void subtract (complex_rect, complex_rect, complex_rect*);
void multiply (complex_rect, complex_rect, complex_rect*);
void divide (complex_rect, complex_rect, complex_rect*);

void main()
{
	int status;
	complex_rect a,b,p,q,r,s; //p=a+b, q=a-b, r=a*b, s=a/b

//taking input complex numbers
	printf("Let first complex number be a= x+yi\n");
	printf("Enter x: ");
	scanf("%f",&a.real);
	printf("Enter y: ");
	scanf("%f",&a.imag);

	printf("\nLet second complex number be b= x+yi\n");
	printf("Enter x: ");
	scanf("%f",&b.real);
	printf("Enter y: ");
	scanf("%f",&b.imag);

//input status value between 0 and 4
	printf("\nStatus to display a&b=0, add=1, subtract=2, multiply=3, divide=4\n");
	printf("Enter status: ");
	scanf("%d",&status);


	if (status==0){
	printf("\nThe input complex numbers are:\n");
	printf("a= (%.2f) + i(%.2f)\n",a.real,a.imag);
	printf("b= (%.2f) + i(%.2f)\n",b.real,b.imag);}


	if (status==1){
	add (a,b,&p);	//calling function
	printf("Sum a+b= (%.2f) + i(%.2f)\n", p.real, p.imag);}


	if (status==2){
	subtract(a,b,&q); //calling function
	printf("Difference a-b= (%.2f) + i(%.2f)\n", q.real, q.imag);}


	if (status==3){
	multiply(a,b,&r); //calling function
	printf("Product a*b= (%.2f) + i(%.2f)\n", r.real, r.imag);}


	if (status==4){
	divide(a,b,&s); //calling function
	printf("a/b= (%.2f) + i(%.2f)\n", s.real, s.imag);}

}


void add (complex_rect a, complex_rect b, complex_rect* ptr){
	//.....ptr= &p........*ptr= p
	(*ptr).real= a.real + b.real;
	(*ptr).imag= a.imag + b.imag;
}


void subtract (complex_rect a, complex_rect b, complex_rect* ptr){
	//....ptr= &p........*ptr= p
	(*ptr).real= a.real - b.real; 
	(*ptr).imag= a.imag - b.imag;
}


void multiply (complex_rect a, complex_rect b, complex_rect* ptr){
	//....ptr= &p........*ptr= p
	(*ptr).real= a.real*b.real - a.imag*b.imag; 
	(*ptr).imag= a.real*b.imag + a.imag*b.real;
}


void divide (complex_rect a, complex_rect b, complex_rect* ptr){
	//....ptr= &p........*ptr= p
	float p,q,r,s;
	p=a.real; q=a.imag; r=b.real; s=b.imag;

	(*ptr).real= (p*r + q*s)/(r*r + s*s);
	(*ptr).imag= (q*r - p*s)/(r*r + s*s);
}





