#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("Enter any two values");
scanf("%d %d",&a,&b);
printf("A value is %d and B value is %d\n",a,b);
temp=a;
a=b;
b=temp;
printf("After swapping the value of a is %d and value of b is %d\n",a,b);
getch();
}

