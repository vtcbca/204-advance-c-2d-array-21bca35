#include<stdio.h>
#include<conio.h>
void addition();
void subtraction();
int division();
int modulas();
int menu();
void main()
{
	int c,x,y,div;
	char yn;
	clrscr();
	do
	{
		c=menu();
		switch(c)
		{
			case 1:addition();
			       break;
			case 2:printf("\n Enter two value");
			       scanf("%d%d",&x,&y);
			       subtraction(x,y);
			       break;
			case 3:div=division();
			       printf("division is %d",div);
			       break;
			case 4:printf("Enter teo value");
			       scanf("%d%d",&x,&y);
			       div=modulas(x,y);
			       printf("modulas of %d & %d is %d",x,y,div);
			       break;
			case 5:exit(0);
			default:
				printf("invalid choice");
		}
		printf("\n\n\t do you want to continue?(Yes=Y/y,No=N/n):");
		flushall();
		scanf("%c",&yn);
		}while(yn=='Y'||yn=='y');
		getch();
	}
	int menu()
	{
		int choise;
		printf("\n menu");
		printf("\n_____________\n1.addition \n2.subtraction \n3division \n4modulas \n5exit \n____________\n");
		printf("\n\n\t Enter your choice");
		scanf("%d",&choise);
		return(choise);
	}
	void addition()
	{
		int x,y;
		scanf("%d %d",&x,&y);
		printf("\n addition of %d & %d is %d",x,y,x+y);
	}
	void subtraction(int x,int y)
	{

		printf("subtraction of %d & %d is %d",x,y,x-y);
	}
	int division()
	{
		int x,y;
		scanf("%d%d",&x,&y);
		return(x/y);
	}
	int modulas(int x, int y)
	{
		return(x%y);
	}