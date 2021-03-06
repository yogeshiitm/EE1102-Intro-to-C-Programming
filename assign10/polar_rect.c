//Yogesh Agarwala_EE19B130
//functions to implement conversion from polar to rect
//Be careful while compilation........(cc polar_rect.c -lm).............(-lm) must be used since math.h is used 


#include <stdio.h>
#include <math.h>
#define PIE 3.14159265

typedef struct{ float mag; float ang;}complex_polar; //new datatype 
typedef struct{ float real; float imag;}complex_rect; //new datatype
void convert (complex_polar, complex_rect*);


void main()
{

//declaring variables
	complex_polar a;
	complex_rect p;
	
//taking input complex numbers
	printf("If complex number a= (r*cosθ) + i(r*sinθ)\n");
	printf("Enter r: ");
	scanf("%f", &a.mag);

	printf("Enter θ(in degree): ");
	scanf("%f", &a.ang);


//calling function
	convert(a,&p);//........&p.....sending address 
	printf("\nIn rectangular coordinate system\n");
	printf("a= (%.2f) + i(%.2f)\n",p.real,p.imag);	

}

void convert (complex_polar a, complex_rect* ptr)
{

	//ptr= &p........*ptr= p
	(*ptr).real= a.mag*cos(a.ang*PIE/180);
	(*ptr).imag= a.mag*sin(a.ang*PIE/180);
}



