#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,remainder,quotient;
clrscr();
printf("Enter the value of Two numbers");
scanf("%d %d",&a,&b);
remainder=a/b;
quotient=a%b;
printf("The remainder is %d and the quotient value is %d",remainder,quotient);
getch();
}
