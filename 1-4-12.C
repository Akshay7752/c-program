#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=1;
	clrscr();
	printf("Enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i*i);
		a=a*2;
	}
	getch();
}