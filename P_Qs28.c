//Write a function to print n terms of the fibonacci series.
#include<stdio.h>

int fib(int n);

int main()
{
    int n;
    printf("\nEnter n: ");
    scanf("%d",&n);
    printf("\nFibonacci Series: ");
    for(int i=0;i<=n;i++)
        printf("%d ",fib(i));
    return 0;
}

int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1; 
    else
        return (fib(n-1)+fib(n-2));
}