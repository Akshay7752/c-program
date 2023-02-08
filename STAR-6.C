#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=0;
	clrscr();
	for(i=1;i<=5;i++)

		{
			for(j=1;j<=sp;j++)
				printf("  ");
			for(j=i;j<=5;j++)
			{

				printf("* ");
			}
			sp++;
			printf("\n");
		}

	getch();

}