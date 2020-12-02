#include <stdio.h>

int main()
{
    int year,x,y,z;
    printf("enter year");
    scanf("%d",&year);
    if ( year%400 == 0)
    printf("this is a leap year=%d\n", year);

    else if ( year%100 == 0)
    printf("this is not a leap year=%d\n", year);

    else if ( year%4 == 0 )
    printf("this is a leap year=%d\n", year);

    else
    printf("this is not a leap year=%d\n", year);

    return 0;
}

