#include<stdio.h>
int main()
{
    int c1, c2;

    printf("Input the values for X and Y coordinate : ");
    scanf("%d %d",&c1, &c2);

    if(c1 > 0 && c2 > 0)
      printf("The coordinate point (%d,%d) lies in the First quandrant .\n",c1,c2);
    else if(c1 < 0 && c2 > 0)
      printf("The coordinate point (%d,%d) lies in the Second quandrant.\n",c1,c2); 
    else if(c1 < 0 && c2 < 0)
      printf("The coordinate point (%d,%d) lies in the 3rd quandrant.\n",c1,c2);
    else if(c1 > 0 && c2 < 0)
      printf("The coordinate point (%d,%d) lies in the 4th quandrant.\n",c1,c2);
    else if(c1 == 0 && c2 == 0)
      printf("The coordinate point (%d,%d) lies at the origin.\n",c1,c2); 
}