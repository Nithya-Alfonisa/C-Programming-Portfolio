#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char c;
clrscr();
printf("enter a character:");
c=getch();
if(isalpha(c))
{
 printf("alphabet");
 }
 else if(isalnum(c))
 {printf("number");
 }
 else if(isdigit(c))
 {printf("digit");
 }
 else if(ispunct(c))
 {printf("punctuation");
 }
 else if(isspace(c))
 {printf("its a space");
 }
 getch();
}