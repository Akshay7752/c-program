/*#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter naumber:");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=1;j--)
		{
			printf("%d",j);
		}
	}
}*/

#include<stdio.h>  
 int main()    
{    
int n,i=0, reverse=0, rem;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  //while(n!=0)
for(i=1;i<=n;i++)	  
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  printf("Reversed Number: %d",reverse);    
return 0;  
}   
