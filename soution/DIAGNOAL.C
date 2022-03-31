/*wap a program to create to 3*3 matrix and check it is diogonal matrix or not
date:-21-02-2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j,c=0,s=0;
    clrscr();
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
	  printf("\n Enter value for a[%d][%d]:",i,j);
	  scanf("%d",&a[i][j]);
       }
    }
    printf("_____________\n");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	   printf("%d \t",a[i][j]);
	printf("\n");
     }
    printf("____________\n");
    if(a[0][0]>0 && a[1][1]>0 && a[2][2]>0)
    {
	printf("Matrix is diagonal");
    }
    else
    {
	if(a[i][j]<1)
	printf("Matrix is not diagonal");
    }
    getch();
}




