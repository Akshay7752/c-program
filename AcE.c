#include<stdio.h>
int main()
{
	char i=65;
	do
	{
	if(i%4==1)
		{
		printf("%c ",i);
		}
	else
		{
		printf("%c ",i+32);
		}
	i+=2;
	}while(i<=90);
	

}


































