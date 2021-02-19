#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,sum=0;
    printf("enter a number /n:");
    scanf("%d",&n);
    printf("\n the odd numbers are :");
    for (i=1;i<n+1;i++)
    {
        if(i%2!=0)
        {
            sum=sum+(i*i);
        }
    }

    printf("\n sum of square of odd number  till %d is : %d \n" ,n,sum);
}
