#include <stdio.h>
int main()
{
int i,c;
i=1;
do
{
	if (i%2 !=1)
	{
		printf("%d \n",i);
		c=getchar();
		if(c=='d')break;
	}
}
while(i++ <=100);
}
