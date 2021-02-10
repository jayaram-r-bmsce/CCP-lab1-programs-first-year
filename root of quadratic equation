#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("enter the three numbers \n");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = pow(b,2) - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %f and root2 = %f", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %f", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("1st root = (%f + %f i) and 2nd root = (%f - %f i) , where i = (-1)^(0.5)", realPart, imagPart, realPart, imagPart);
    }
    getch();
    return 0;
}
