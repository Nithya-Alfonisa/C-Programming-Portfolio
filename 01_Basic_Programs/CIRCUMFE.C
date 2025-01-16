#include<stdio.h>
#include<conio.h>
void main()
{
 int k,a,b,c;
 clrscr();
 printf("Enter the value of a: ");
 scanf("%d",&a);
 printf("Enter the value of b: ");
 scanf("%d",&b);
 printf("Enter the value of c: ");
 scanf("%d",&c);
 k=3*(a*b+b*c+c*a);
 printf("Enter the value of circumference of triangle k %d",k);
 getch();
}