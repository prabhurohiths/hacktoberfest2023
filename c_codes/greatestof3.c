#include<stdio.h>
int main()
{
    int largest,num1,num2,num3;
    printf("\nEnter the Numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);        //To read the 3 numers

    if((num1>num2)&&(num1>num3))                        //Condition to check if 1st number is greater
        printf("\n%d is the greater number.",num1);
    else if((num2>num1)&&(num2>num3))                   //Condition to check if 2nd number is greater
        printf("\n%d is the greater number.",num2);
    else if((num3>num1)&&(num3>num2))                   //Condition to check if 3rd number is greater
        printf("\n%d is the greater number.",num3);
    else if((num1==num2)&&(num2==num3))                           //Condition to check if all numbers entered are equal
        printf("The numbers are equal.");
    else if((num1==num2)&&(num1>num3))
        printf("\n%d is the greater number.",num1);
    else if((num1==num3)&&(num1>num2))
        printf("\n%d is the greater number.",num1);
    else
        printf("\n%d is the greater number.",num3);
    return 0;
}