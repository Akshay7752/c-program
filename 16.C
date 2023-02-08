#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a;
	clrscr();
	printf("Enter number:");
	scanf("%d",&a);
	for(i=1;i<=a;i*=2)
	{
		printf("%d", i);

	}
	getch();

}