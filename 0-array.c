#include<stdio.h>
int main()
{
	int a[5][5],i,j;
	int b[5][5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(i==j)
		{
			printf(" 0");
		}
		else
		{
			printf("1");
		}
			
		
		}
		printf("\n");
	}
	

}
