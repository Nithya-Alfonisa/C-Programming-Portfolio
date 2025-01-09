#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,smallest;
clrscr();
printf("Enter two values a and b");
scanf("%d %d",&a,&b);
if(a>b)
{
printf("The second entered number is smaller");
}
else
{
printf("The first entered number is smaller");
}
getch();
}
