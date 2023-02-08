#include<stdio.h>
#include<conio.h>
void main()
{
	char i,n;
	clrscr();
	printf("Enter number:");
	scanf("%c",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i*i);
		}
		else
		{
			printf("%d ",i);
		}

	}
	getch();
}