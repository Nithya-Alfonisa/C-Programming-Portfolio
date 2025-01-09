#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter two values to find the greatest number:");
scanf("%d %d",&a,&b);
if(a>b)
{
printf(" The first entered value is greater");
}
else
{
printf("The second entered number is greater");
}
getch();
}
