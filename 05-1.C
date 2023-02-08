#include<stdio.h>
#include<conio.h>
void main()
{
	float i,n;
	float a=0.5;
	clrscr();
	printf("Enter number:");
	scanf("%f",&n);
	for(i=0;i<=n;++i)
	{
		a=a+i;
		printf("%.1f ",a);

	}
	getch();
}