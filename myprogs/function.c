#include <stdio.h>

int sum(int,int);

int main()
{
	int a=1,b=5;
	printf("%d",sum(a,b));
}

int sum(int x, int y)
{
	return x+y;
}
