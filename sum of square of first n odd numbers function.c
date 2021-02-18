#include <stdio.h>
#include <conio.h>
#include <math.h>
void sumofsquares(int);
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    sumofsquares(n);
    getch();
    return 0;
}
void sumofsquares(int x)
{
float sum=0; int i=1;
    while(i<=x)
        {
        if(i%2 != 0)
        {
            printf("%d and %f \n", i,pow(i,2));
            sum=sum+pow(i,2);
        }
        i++;
    }
    printf("The sum of the squares of all odd numbers till %d is = %f ", x, sum);
    getch();
    return;
}
