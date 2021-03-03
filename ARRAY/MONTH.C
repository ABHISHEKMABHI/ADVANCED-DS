#include<stdio.h>
#include<conio.h>
void main()
{
int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int i;
clrscr();
for(i=0;i<=11;i++)
{
printf("\n month[%d] of year contains %d days",i+1,month[i]);
printf("\n");
}
getch();
}