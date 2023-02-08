#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("Enter X and Y:");
	scanf("%d %d",&x,&y);
	if(x<=2000 || x>=3000)
	{
		printf("Value of X:%d",x);
	}
	if (y>=100 && y<=500)
	{
		printf("\nValue of Y:%d",y);
	}
	getch();
}