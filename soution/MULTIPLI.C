/* wap a program to create to 3 by 3 matrix and print its multiplication matrix.
date:-23-02-2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int m[3][3],m1[3][3],m2[3][3],m3[3][3],sum=0,i,j,k;
    clrscr();
    for(i=0;i<3;i++)
    {
	 for(j=0;j<3;j++)
	 {
	      printf("\n Enter value  for m1[%d][%d]",i,j);
	      scanf("%d",&m1[i][j]);
	 }
    }
    printf("\n Enter second matrix");
    for(i=0;i<3;i++)
    {
	 for(j=0;j<3;j++)
	 {
	      printf("\n Enter value for m2[%d][%d]",i,j);
	      scanf("%d",&m2[i][j]);
	 }
    }
    printf("\n");
    //logic print1 array
    printf("\n MATTRIX:1\n");
    for(i=0;i<3;i++)
    {
	 for(j=0;j<3;j++)
	    printf("%d\t",m1[i][j]);
	 printf("\n");
    }
    printf("\n");
    printf("\n MATTRIX:2\n");
    for(i=0;i<3;i++)
    {
	 for(j=0;j<3;j++)
	    printf("%d\t",m2[i][j]);
	 printf("\n");
    }
     for(i=0;i<3;i++)
    {
	 for(j=0;j<3;j++)
	 {
		sum=0;
		for(k=0;k<3;k++)
		{
		   sum=sum+m1[i][k]*m2[k][j];
		   m[i][j]=sum;
		}
	 }
    }
    printf("\n MULTIPLICATION MATRIX: \n");
    for(i=0;i<3;i++)
    {
	 for(j=0;j<3;j++)
	    printf("%d\t",m[i][j]);
	 printf("\n");
    }
    getch();
}




