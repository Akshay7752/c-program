#include<stdio.h>
int main()
{
	int a[8]={2000,500,200,100,50,20,10,5};
	int i,n;
	
	printf("enter the amount=");
	scanf("%d",&n);
	
	for(i=0;i<8;i++)
	{
		if(n>=a[i])
		{
			printf("\n%d note is = %d",a[i],n/a[i]);
			n=n%a[i];
		}
	}
}
