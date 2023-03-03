/*Write a function to calculate the area of a circle. (TSRS)*/
#include<stdio.h>
float acir(int r)
{
    return(3.14*(r*r));
}
int main()
{
    int r;
    printf("Enter radius of a circle : ");
    scanf("%d",&r);
    printf("Area of this circle is  %f",acir(r));
    return 0;
}

