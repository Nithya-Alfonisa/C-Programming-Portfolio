#include<stdio.h>
#include<conio.h>
void main()
{
 int rows,a,b,number=1;
 clrscr();
 printf("Enter the number of flody's triangle to print:");
 scanf("%d",&rows);
 printf("FLOYD'S TRIANGLE\n\n");
 for(a=1;a<=rows;a++)
 {
  for(b=1;b<=a;b++)
  {
   printf("%d",number);
   number++;
  }
  printf("\n");
}
getch();
return 0;
}