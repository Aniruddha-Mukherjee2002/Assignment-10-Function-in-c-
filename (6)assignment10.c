//Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int factorial(int n)
{
    if(n==0)
        return 1;
    int mul = 1;
    for(int i = 1; i <=n; ++i)
    {
        mul*=i;
    }
    return mul;
}
int main()
{
    int n;
    printf("Enter a number to calculate factorial of that number : ");
    scanf("%d",&n);
    printf("Factorial of %d is %d.\n",n,factorial(n));
    return 0;
}
