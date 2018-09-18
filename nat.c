#include <stdio.h>
int main()
{
    int n, i, sum = 0,ch,mul;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);
printf("select one choice 1:add 2:mul \n");
scanf("%d",&ch);
switch(ch)
{
case 1:

    for(i=1; i <= n; ++i)
    {
        sum += i; 
    }
    break;

   case 2:
for(i=1;i<=n;i++)

    {
           mul=mul*i;
           printf("%d",i);
    }
break;
}
}
