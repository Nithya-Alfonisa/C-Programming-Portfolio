#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[30],b[30];
clrscr();
printf("Enter a and b strings:\n");
gets(a);
gets(b);
strcat(a,b);
printf("concatenates string:%s\n",strcat(a,b));
getch();
}