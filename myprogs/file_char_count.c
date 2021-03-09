#include <stdio.h>
int main()
{
	int count;
	int c;

	c=getchar();
	for(count=0; getchar() !=EOF; count=count+1);
	printf("Number of characters are %d\n",count);

}
