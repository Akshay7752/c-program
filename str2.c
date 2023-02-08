#include<stdio.h>
#include<conio.h>
int main()
{
    int i,l;
    char str1[50],str2[50];
    printf("Enter name:");
    scanf("%s",&str1);

    printf("Enter second name:");
    scanf("%s",&str2);

    for(l=0;str1[l] !='\0';++l);
    for(i=0;str2[i] !='\0';++i,++l)
    {
        str1[l]=str2[i];
    }
    str1[l]='\0';

    printf("Your name: %s",str1);
    return 0;

}