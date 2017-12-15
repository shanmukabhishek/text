#include<stdio.h>
void main()
{
int n,rem=0,rev=0,x=0;
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
rev=rev+rem*rem*rem;
n=n/10;
}
printf("the armstrong of a number is %d",rev);
}

