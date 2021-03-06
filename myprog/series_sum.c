//This program is for calculating sum of first 10 odd numbers

#include<stdio.h>
int main()

{
	int n,i,j=1,sum=0;
	printf("\nEnter n, to get sum of first n odd integers: ");
	scanf("%d",&n);
	//sanity check; error if n is -ve
	if(n<0)
	     printf("Error: 'n' must be positive\n");
	else
	     {for(i=1;i<=n;i++)
		{
		sum=sum+j;
		j=j+2;
		}
		printf("The sum is %d\n\n",sum);
	     }
	return 0;
}
