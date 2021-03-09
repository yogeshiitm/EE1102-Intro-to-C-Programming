#include<stdio.h>

int main()

{
    int n,count,value=1;

    printf("Enter an integer n: ");
    scanf("%d",&n);

    for(count=1; count<=n; count=count+1)
    value = 2*value;

    printf("The value of 2^n is %d \n", value);
}
