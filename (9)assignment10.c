/* Write a function to check whether a given number contains a given digit or not.
(TSRS)*/

#include<stdio.h>
int check(int n,int v)
{
    int t = n;
    int mod;

    while(t!=0)
    {
        mod = t%10;
        if(v == mod)
            return 1;
        t/=10;
    }
    return 0;
}
int main()
{
    int n,v;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter a digit to check it is in the number or not : ");
    scanf("%d",&v);
    int res = check(n,v);
    if(res)
        printf("Yes !");
        else
            printf("No !");
        return 0;
}
