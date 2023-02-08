#include<stdio.h>
#include<conio.h>
void main()
{
	float i,n;
	clrscr();
	printf("Enter number:");
	scanf("%f",&n);
	for(i=0;i<=n;i++)
	{
		printf("%.1f ",i*0.5);
	}
	getch();
}