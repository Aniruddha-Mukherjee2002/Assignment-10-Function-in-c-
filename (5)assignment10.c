//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void printnaturalodd(int n)
{
    printf("First %d natural numbers are : \n",n);
    for(int i = 1; i <= n*2; ++i)
    {
        if(i%2!=0)
        printf("%d ",i);
    }
}
int main()
{
    printf("Enter a length to print odd natural numbers : ");
    int n;
    scanf("%d",&n);
    printnaturalodd(n);
    return 0;
}

