/* wap to create sturcture marksheet (sid,sname,m1,m2,m3,total,persentage)and print it*/
#include<stdio.h>
#include<conio.h>
    struct marksheet
    {
	int sid,sub1,sub2,sub3,total,per;
	char sname[30];
    };
void main()
{
    struct marksheet m;
    clrscr();
    printf("\n Enter student id:");
    scanf("%d",&m.sid);
    printf("\n Enter student name:");
    scanf("%d",&m.sname);
    printf("\n Enter mark for subject1:");
    scanf("%d",&m.sub1);
    printf("\n Enter mark for subject2:");
    scanf("%d",&m.sub2);
    printf("\n Enter mark for subject3:");
    scanf("%d",&m.sub3);
    m.total=m.sub1+m.sub2+m.sub2+m.sub3;
    m.per=m.total/3;
    clrscr();
    printf("\n\n student ID:%d",m.sid);
    printf("\nstudent name:%s",m.sname);
    printf("\n___________________________________________________\n");
    printf("\n c \t\t DBMS \t\t OS \t Total \t persentage_____________________________________________\n");
    printf("%d\t\t%d\t\t%d\t%d\t%d",m.sub1,m.sub2,m.sub3,m.total,m.per);
    printf("\n____________________________________________________________\n");
    getch();
}