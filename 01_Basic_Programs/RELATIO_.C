#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter your age:");
scanf("%d",&a);
if(a>=18)
{
printf("You are Eligible to Vote");
}
else
{
printf("You are Not eligible to vote");
}
getch();
}