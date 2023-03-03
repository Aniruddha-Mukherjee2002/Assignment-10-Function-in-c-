/*Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/

#include<stdio.h>
int evenorodd(int n)
{
    if(n%2==0)
        return 1;
    return 0;
}
int main()
{
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    int res = evenorodd(n);
    if(res)
        printf("%d is an even number.",n);
    else
        printf("%d is an odd number.",n);
    return 0;
}
