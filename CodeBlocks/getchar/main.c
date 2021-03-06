#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,c;

    for (i=1;i<=100;i++)
    {   if(i%2 !=1)
        {
        printf("%d ",i);
        c=getchar();
        if(c=='d')
        break;
        }
    }
    return 0;
}
