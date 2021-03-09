#include<stdio.h>
int main()
{int int_size;
int chr_size, flt_size;
int_size = sizeof(int); chr_size =sizeof(char);
flt_size = sizeof(float);
printf("int, char, and float use %d %d and %d bytes respectively\n",int_size, chr_size, flt_size);
return 0;
}
