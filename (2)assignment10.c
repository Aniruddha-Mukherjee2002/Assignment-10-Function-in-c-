//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float simpleinterest(int p,int t,float r)
{
    return((p*t*r)/100);
}
int main()
{
    int p,t;
    float r;
    printf("Enter principle amount : ");
    scanf("%d",&p);
    printf("Enter time : ");
    scanf("%d",&t);
    printf("Enter rate of interest : ");
    scanf("%f",&r);
    printf("Simple interest is : %f",simpleinterest(p,t,r));
    return 0;
}

