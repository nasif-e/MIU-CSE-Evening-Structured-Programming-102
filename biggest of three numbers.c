#include<stdio.h>
void main()
{
    int number1,number2,number3;
    printf("enter the value of three numbers");
    scanf("%d%d%d",&number1,&number2,&number3);
    if (number1 > number2)
    {
        if (number1 > number3)
        {
            printf("the largest number is number1=%d\n",number1);
        }
        else
        {
            printf("the largest number is number3=%d\n",number3);
        }
    }
    else if

        (number2 > number3)
        printf("the largest number is number2=%d\n",number2);

        else

        printf("the largest number is number3=%d\n",number3);

}
