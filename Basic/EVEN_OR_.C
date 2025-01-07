#include<stdio.h>
int main()
{
int num1;
clrscr();
printf("Enter a number to check whether it is even or odd");
scanf("%d",num1);
if(num1%2==0)
{
printf("The number is an even number",num1);
}
else
{
printf("The entered number is an odd number",num1);
}
getch();
return 0;
};