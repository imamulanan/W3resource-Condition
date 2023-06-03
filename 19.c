#include<stdio.h>
int main()
{
    int Cid,Cu;
    float chg, surchg = 0, gramt, netamt;
    char Cnm[25];

    printf("Input Customer ID: ");
    scanf("%d",&Cid);
    printf("Input the name of the customer: ");
    scanf("%s",&Cnm);
    printf("Input the unit consumed by the customer: ");
    scanf("%d",&Cu);
    if (Cu < 200)
       chg = 1.20;
    else if (Cu >= 200 && Cu <400)
       chg = 1.50;
    else if (Cu >= 400 && Cu < 600)
       chg = 1.80;
    else  
       chg = 2.00;
    gramt = Cu*chg;
    if (gramt>300)
      surchg = gramt*15/100.0;
     netamt = gramt + surchg;
    if (netamt < 100)
      netamt = 100;

    printf("\nElectricity Bill\n");
    printf("Customer IDNO                       :%d\n",Cid);
    printf("Customer Name                       :%s\n",Cnm);
    printf("unit Consumed                       :%d\n",Cu);
    printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,gramt);
    printf("Surchage Amount                     :%8.2f\n",surchg);
    printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);      
}