#include<stdio.h>
int main ()
{
	int a[5],b[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter a:");
		scanf("%d",&a[i]);

		printf("Enter b:");
		scanf("%d",&b[i]);	
	}
		printf("\na \tb \tTotal");
	for(i=0;i<5;i++)
	{
		printf("\n%d \t%d \t%d",a[i],b[i],a[i]+b[i]);
	}
}