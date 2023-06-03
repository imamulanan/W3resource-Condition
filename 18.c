#include<stdio.h>
int main()
{
    int cprice,sprice,plamt;

    printf("Input cost price : ");
    scanf("%d",&cprice);
    printf("Input selling price : ");
    scanf("%d",&sprice);

    if (sprice>cprice)
    {
        plamt = sprice - cprice;
        printf("\nYou can booked your profit amount : %d\n",plamt);
    }
    else if (cprice>sprice)
    {
        plamt = cprice - sprice;
        printf("\nYou got a loss of amount : %d\n", plamt);
    }
    else  
    {
        printf("\nYou are running in no profit no loss condition.\n");
    }
}