#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];
	int i,j,c;
	printf("Enter name:");
	scanf("%[^\n]s",&a);
	
	for(i=0;a[i]!='\0';i++);
	printf("lenth: %d\n",i);
	c=i;
	for(j=0;j<(i/2);j++)
	{
		printf("%c%c",a[j],a[--c]);
	}
	if(i%2!=0)
	{
		printf("%c",a[(i/2)]);
	}
	
}	

