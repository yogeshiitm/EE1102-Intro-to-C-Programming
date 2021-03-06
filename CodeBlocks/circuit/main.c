/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void and_gate(unsigned short int a, unsigned short int b, unsigned short int* y)
{
    *y = a & b;
}

void nand_gate(unsigned short int a, unsigned short int b, unsigned short int* y)
{
    *y = ~(a & b);
}

void not_gate(unsigned short int a, unsigned short int* y)
{
    *y = ~a;
}

void or_gate(unsigned short int a, unsigned short int b, unsigned short int* y)
{
    *y = a | b;
}

void xor_gate(unsigned short int a, unsigned short int b, unsigned short int* y)
{
    *y = a^b;
}

void circuit(unsigned short int a, unsigned short int b, unsigned short int c, unsigned short int d, unsigned short int e, unsigned short int* y1, unsigned short int* y2, unsigned short int* y3, unsigned short int* y4)
{
    unsigned short int s1, s2, s3, s4, s5, s6;

    or_gate(a,b,&s1);
    or_gate(c,d,&s2);
    nand_gate(d,e,&s3);
    not_gate(a,&s4);
    and_gate(s1,c,&s5);
    and_gate(s5,s2,&*y2);
    xor_gate(s2,s3,&*y3);
    nand_gate(s3,s4,&s6);
    not_gate(s5,&*y1);
    or_gate(*y3,s6,&*y4);

}

int main()
{
    int time;
    unsigned short int a, b, c, d, e, y1, y2, y3, y4, y1_exp, y2_exp, y3_exp, y4_exp;
    while(scanf("%d %hu %hu %hu %hu %hu %hu %hu %hu %hu", &time, &a, &b, &c, &d, &e, &y1_exp, &y2_exp, &y3_exp, &y4_exp) != EOF)
    {

        circuit(a,b,c,d,e,&y1,&y2,&y3,&y4);

        if(y1==y1_exp && y2==y2_exp && y3==y3_exp && y4==y4_exp)
        printf("Success: %d %hu %hu %hu %hu %hu %hu %hu %hu %hu\n", time, a, b, c, d, e, y1_exp, y2_exp, y3_exp, y4_exp);

        else
        printf("Error: %d %hu %hu %hu %hu %hu %hu %hu %hu %hu\n", time, a, b, c, d, e, y1_exp, y2_exp, y3_exp, y4_exp);
    }

    return 0;
}
