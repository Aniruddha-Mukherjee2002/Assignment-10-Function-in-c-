// Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void printnatural(int n)
{
    printf("First %d natural numbers are : \n",n);
    for(int i = 1; i <= n; ++i)
    {
        printf("%d ",i);
    }
}
int main()
{
    printf("Enter a length to print natural numbers : ");
    int n;
    scanf("%d",&n);
    printnatural(n);
    return 0;
}
