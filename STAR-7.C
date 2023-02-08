#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a,sp=15;
	clrscr();
	for(a=1;a<=5;a++)

		{
			for(j=1;j<=sp;j++)
				printf(" ");
			for(j=1;j<=a;j++)
			{

				printf("* ");
			}
			sp--;
			printf("\n");
		}

	for(i=1;i<=4;i++)

		{
			for(j=-1;j<=sp;j++)
				printf(" ");
			for(j=i;j<=4;j++)
			{

				printf("* ");
			}
			sp++;
			printf("\n");
		}

	getch();

}