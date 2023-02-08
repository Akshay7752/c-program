#include<stdio.h>
#include<conio.h>
int main()
{
	int lenght,breadth,area;
	clrscr();
	printf("\n enter lenght of rectangle:");
	scanf("%d",&lenght);
	printf("\n enter breadth of rectangle:");
	scanf("%d",&breadth);
	area=lenght*breadth;
	printf("\n Area of Rectangle : %d ",area);
	getch();
}