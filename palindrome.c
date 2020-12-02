#include<stdio.h>
int main(){
int n,sum=0,y,temp;
printf("Enter a possative number=");
scanf("%d",&n);
temp=n;
  while(n!=0);
{
  y=n%10;
  sum=sum*10+y;
  n=n/10;
}
if(temp==n)

printf("%d is a palindrome");
else

    {
        printf("%d is a not palindrome");
        return 0;
        }
}