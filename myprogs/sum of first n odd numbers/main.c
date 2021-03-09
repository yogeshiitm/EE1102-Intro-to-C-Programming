#include<stdio.h>

int main()
{
    int i,j,sum=0;
    unsigned int n;
    /*i=count
      j=odd term
      n=number of terms*/

    printf("Enter an integer n: ");
    scanf("%u",&n);

    for (j=1,i=1;i<=n;i++)
    {
        sum+=j;
        j+=2;
    }

    printf("The sum of first %u odd integers is %d\n",n,sum);
    return 0;
}
