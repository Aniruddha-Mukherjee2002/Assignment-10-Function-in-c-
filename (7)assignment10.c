//Write a function to calculate the number of combinations one can make from n items
//and r selected at a time. (TSRS)

#include<stdio.h>
int fact(int n)
{
    int f = 1;
    for(int i = 1; i <=n; ++i)
    {
        f*=i;
    }
    return f;
}
int comb(int n,int r)
{
    if(n>r)
    return(fact(n)/fact(r)*fact(n-r));

    return 0;
}
int main()
{
    int n,r;
    printf("Enter value of 'n' : ");
    scanf("%d",&n);
    printf("Enter value of 'r' : ");
    scanf("%d",&r);

    int res = comb(n,r);
    if(res)
    {
          printf("The number of combinations are : ");
          printf("%d",res);
    }
    else
          printf("Wrong Input");

    return 0;

}
