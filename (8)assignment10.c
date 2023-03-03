/*Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>
int fact(int n)
{
    int f= 1;
    for(int i = 1; i <=n; i++)
    {
        f*=i;
    }
    return f;
}
int permut(int n,int r)
{
    if(n>r)
        return(fact(n)/fact(r));
    return 0;
}
int main()
{
    int n,r,res;
    printf("Enter value of 'n' : ");
    scanf("%d",&n);
    printf("Enter value of 'r' : ");
    scanf("%d",&r);
    res = permut(n,r);
    if(res)
    {
        printf("Number of permutation will be : ");
        printf("%d",res);
    }
    else
        printf("Wrong Input");

    return 0;
}
