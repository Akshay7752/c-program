#include<stdio.h>
int main()
{
	int i=1,j,a=1;
	do
	{
		j=1;
		do
	{
		printf("%d ",a++);
		j++;
	}	while(j<=i);
	printf("\n");
	i++;
	}while(i<=5);
}


































