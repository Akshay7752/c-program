#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,sum=0;
	clrscr();
	printf("Enter number:");
	scanf("%d",&a);
	for(i=1;i<=a;i+=2)
	{
		printf("%d",i);
		sum=sum+i;
	}
	printf("\n Total sum :%d",sum);
	getch();
}