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
    int n,a,b,c;
        
    printf("Enter a: ");scanf("%d",&a);
    printf("Enter b: ");scanf("%d",&b);
    printf("Enter c: ");scanf("%d",&c);
    
    n= my_function(a,b,c);
    printf("%d\n",n);
    return 0;

}
