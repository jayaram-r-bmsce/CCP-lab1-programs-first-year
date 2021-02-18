#include <stdio.h>
#include <conio.h>
void printeven(int, int);
int main()
{
    int m, i, n;
    printf("Enter the of numbers \n");
    scanf("%d %d", &m, &n);
    printeven(m, n);
    getch();
    return 0;
}
void printeven(int x, int y)
{
    int i;
    i = x;
    printf("The even numbers ranging from %d to %d are : ", x, y);
    while (i <= y)
    {
        if (i % 2 == 0)
        {
            printf("%d , ", i);
        }
        i++;
    }
    getch();
    return;
}
