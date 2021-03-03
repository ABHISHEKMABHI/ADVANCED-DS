#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r1,c1,a[10][10],b[10][10];
clrscr();
printf("enter the order of matrix A and B up to 10");
scanf("%d%d",&r1,&c1);
printf("enter the elements of matrix A:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}}
printf("enter the elements of matrix B:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&b[i][j]);
}}
printf("Matrix subtraction is\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",a[i][j]-b[i][j]);
}
printf("\n");
}
getch();
}
