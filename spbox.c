#include<stdio.h>
void main()
{
	int i=1,j,sp=0;
	do
	{
		j=1;
		do
	{
		if(i==1 || i==5 || j==1 || j==5 )
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
		j++;
	}	while(j<=5);
	printf("\n");
	i++;
	}while(i<=5);

	
}