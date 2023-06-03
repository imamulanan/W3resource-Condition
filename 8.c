#include<stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Input the value of three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The 1st number = %d, \t2nd number = %d, \t3rd number = %d\n", num1, num2, num3);
    if ((num1 > num2) && (num1 > num3))
        printf("The 1st Number is the greatest among three. \n");
    if ((num2 > num1) && (num2 > num3))
        printf("The 2nd Number is the greatest among three. \n");
    if ((num3 > num1) && (num3 > num1))
        printf("The 3rd Number is the greatest among three. \n");    

}