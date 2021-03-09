#include<stdio.h>

int main()
{
//declaring variables
    int yr,period;
    double amt, principal,rate;


//assigning values to the variable
/*Note: Here we used %lf instead of %f since we specified data type as "double" and not as "float" and
********For scanf: %f reads into a float, and %lf reads into a double*********************************
********For printf: %f and %lf both are identical i.e any of them can be used for float/double********

The reason that one specifier can be used for two different types in printf is because of the default
argument promotions; arguments of type float are promoted to double when used to call a function and
not matching a parameter in a function prototype. So printf just sees a double in either case.*/
    printf("Principal amount: ");
    scanf("%lf",&principal);

    printf("Rate(in percent): ");
    scanf("%lf",&rate);

    printf("Period(in years): ");
    scanf("%d",&period);


//priting format string
    printf("\n");
    printf("%4s%10s\n","Year","Amount");


//calculating amount after each year
//Note: In printf although amt is "double" data type but we used %f (even if we use %lf will get same result)
    for (yr=1;yr<=period;yr++)
    {
        amt=principal*pow(1.0+rate/100,yr);
        printf("%2d   %10.2f\n",yr,amt);
    }
}
