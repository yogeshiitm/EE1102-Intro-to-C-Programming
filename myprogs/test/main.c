# include <stdio.h>
void main()
{
int i = 0, j =0;
while (i<5)
{
printf("i = %d - ",++i);
if (i==3)
continue;
printf("%c\n", 'A' + j++);
}
}
