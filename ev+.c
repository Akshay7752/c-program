#include<stdio.h>
int main()
{
	int i=2,n,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d ",i);
		sum=sum+i;
		i+=2;
	}
	printf("\n total: %d",sum);

}


































