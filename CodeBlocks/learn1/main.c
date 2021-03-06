#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=5;
   const int* p= &x;
   //here *p is constant but not p
   //so p++ or p=p+1 is legal
   //while (*p)++ is illegal
   printf("%d\n",*p);
   printf("%d\n",p);
   p++;
   printf("%d\n\n\n",p);


   int * const q= &x;
   //here q is constant but not *p
   //so q++ or q=q+1 is il+legal
   //while (*q)++ is legal
   printf("%d\n",q);
   printf("%d\n",*q);
   (*q)++;
   printf("%d\n",*q);

}
