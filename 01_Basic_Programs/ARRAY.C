#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[10];
clrscr();
printf("total array elements:\n");
scanf("%d",&n);
printf("list out array elements:\n");
for(i=0;i<n;i++)
{
 scanf("%d\n",&a[i]);
}
printf("array elements are:\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
}