#include<stdio.h>

// declare your function named my_function as instructed above in the program statement.
int my_function(int a,int b,int c)
{
    int i;
    for(i=b; i>a; i--)
    {if(i%c==0)
    break;}

    if (i!=a)
    return i;

    else
    return 0;
}

// Now start implementing my_function below, please note that the name of the function must be my_function and the prototype 
// should be exactly as instructed. 
int main()
{
    
    int n= my_function(10,25,3);
    printf("%d\n",n);
    return 0;

}
