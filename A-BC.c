#include<stdio.h>
int main()
{
	int i=1,j,a='A';
	do
	{
		j=1;
		do
	{
		printf("%c ",a);
		j++;
	}	while(j<=i);
	printf("\n");
	i++;
	}while(i<=5);
}


































