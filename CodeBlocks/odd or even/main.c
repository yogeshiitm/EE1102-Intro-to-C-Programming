#include<stdio.h>
#include<math.h>

void main()
{
int num;
printf("Enter the integer number to check: ");
scanf("%d",&num);
if (num%2==0 )
printf("The entered number %d is even.\n", num);
else
printf("The entered number %d is odd.\n", num);
}
