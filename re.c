#include<stdio.h>
int main ()
{
	char name[5];
	int m[5],s[5],h[5],e[5];
	int i ,Total=0;
	float per;
	for(i=0;i<5;i++)
	{
		printf("Name:");
		scanf("%d",&name[i]);
	
	}
        for(i=0;i<5;i++)
	{
		printf("maths:");
		scanf("%d",&m[i]);
	
	}
        for(i=0;i<5;i++)
	{
		printf("sci:");
		scanf("%d",&s[i]);
	
	}
        for(i=0;i<5;i++)
	{
		printf("hindi:");
		scanf("%d",&h[i]);
	
	}
	for(i=0;i<5;i++)
	{
		printf("eng:");
		scanf("%d",&e[i]);
	}			
	printf("\nname\tmaths\tsci\thindi\teng\tTotal\tper\tgrade ");
	for(i=0;i<5;i++)
    {
		Total=m[i]+s[i]+h[i]+e[i];
		per=(float)Total/4;
		printf("\n%d \t%d \t%d \t%d \t%d \t%d \t%.1f",name[i],m[i],s[i],h[i],e[i],Total,per);
	if(per>75)
	{
		printf("\tA");
	}
	else if(per>60 && per<=75)
	{

		printf("\tB");
	}
	else if(per>45 && per<=60)
	{
		printf("\tC");
	}
	else if(per>33 && per<=45)
	{
		printf("\tD");
	}
	else
	{
		printf("\tFail");
	}
     }
}