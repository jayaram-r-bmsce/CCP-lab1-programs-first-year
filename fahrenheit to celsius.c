#include<stdio.h>
#include<conio.h>
void main()
{
float celsius,farhenheit;
clrscr();
printf("enter temp in farhenheit");
scanf("%f",&farhenheit);
celsius=(farhenheit-32)*5/9;
printf("temperature in celsius=%f",celsius);
getch();
}
