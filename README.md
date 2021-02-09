# CCP-lab-programs-first-year

#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
double a,b,c,s,area;
clrscr();
printf("enter side of triangle:\n");
scanf("%lf %lf %lf",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle=%lf\n",area);
getch();
return 0;
}


