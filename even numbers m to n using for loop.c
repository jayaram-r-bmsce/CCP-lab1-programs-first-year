#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the of numbers\n");
    scanf("%d %d", &m, &n);
    printf("The even numbers ranging from %d to %d are : ", m, n);
    for(int i=m; i<=n; i++)
        {
        if(i%2==0)
            {
            printf("%d  ", i);
        }
    }
    getch();
    return 0;
}
