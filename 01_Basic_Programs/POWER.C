#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c;
clrscr();
printf("Enter the value of a and b:\n");
scanf("%f %f",&a,&b);
c=pow(a,b);
printf("power value:%f\n",c);
getch();
}
