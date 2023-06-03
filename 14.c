#include<stdio.h>
int main()
{
    int Sa, Sb, Sc;

    printf("Input the three sides of triangle : ");
    scanf("%d%d%d",&Sa, &Sb, &Sc);

    if (Sa==Sb && Sb == Sc)
    {
        printf("This is an equilateral triangle.\n");
    }
    else if (Sa == Sb || Sb == Sc || Sa == Sc)
    {
        printf("This is an isosceles triangle.\n");
    }
    else 
    {
        printf("This is a scalene triangle.\n");
    }

    return 0;
}