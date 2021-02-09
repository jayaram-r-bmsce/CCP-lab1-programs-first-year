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

![Screenshot (4)](https://user-images.githubusercontent.com/78743957/107373179-3d783600-6b0c-11eb-89e6-1556478b64b8.png)
