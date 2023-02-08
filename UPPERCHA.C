#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	int ascii;
	clrscr();
	printf("Enter char:");
	scanf("%c",&a);
	if (a>=65 && a<=90)
		{

			a=a+32;
			printf("Your char is=%c",a);
		}
	else if(a>=97 && a<=122)
		{
			a=a-32;
			printf("Your character  is=%c",a);
		}
	getch();
}