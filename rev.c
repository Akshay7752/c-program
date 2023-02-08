#include<stdio.h>
int main ()
{
    int i;	
    char str[50];
    printf("enter yor string:");
    scanf("%[^\n]s",&str);

    printf("The revers string :");
    for(i=0;str[i];i++);
    {
	   for(i=i-1;i>=0; i--)
       {
            printf("%c",str[i]);
       }    
    }
}
