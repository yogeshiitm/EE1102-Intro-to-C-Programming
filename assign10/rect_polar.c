//Yogesh Agarwala_EE19B130
//functions to implement conversion from rect to polar
//Be careful while compilation........(cc rect_polar.c -lm).............(-lm) must be used since math.h is used 


#include <stdio.h>
#include <math.h>
#define PIE 3.14159265


typedef struct{ float mag; float ang;}complex_polar; //new datatype
typedef struct{ float real; float imag;}complex_rect; //new datatype
void convert (complex_rect, complex_polar*); //function


void main()
{
//declaring variables
	complex_rect a;
	complex_polar p;
	
//taking input complex numbers
	printf("Let first complex number be a= x+iy\n");
	printf("Enter x: ");
	scanf("%f",&a.real);
	printf("Enter y: ");
	scanf("%f",&a.imag);

//calling function
convert(a,&p); //........&p.....sending address 

	printf("\nIf complex number a= (r*cosθ) + i(r*sinθ)\n");
	printf("r= %.2f\n", p.mag);
	printf("θ(in degree)= %.2f\n",p.ang);
	

}

void convert (complex_rect a, complex_polar* ptr)
{

	//ptr= &p........*ptr= p
	(*ptr).mag= sqrt(pow(a.real,2)+pow(a.imag,2));

	//making four cases, one for each quadrant
	if(a.real>0 && a.imag>0)
	(*ptr).ang= atan(fabs(a.imag)/fabs(a.real))*180/PIE;	
	else if(a.real>0 && a.imag<0)
	(*ptr).ang= -atan(fabs(a.imag)/fabs(a.real))*180/PIE;	
	else if(a.real<0 && a.imag>0)
	(*ptr).ang= 180- atan(fabs(a.imag)/fabs(a.real))*180/PIE;
	else
	(*ptr).ang=-180 +atan(fabs(a.imag)/fabs(a.real))*180/PIE;
	
}



