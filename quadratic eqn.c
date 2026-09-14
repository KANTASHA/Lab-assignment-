#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("Root 1 = %.2lf\nRoot 2 = %.2lf\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2.0 * a);
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    else {
        double realPart = -b / (2.0 * a);
        double imagPart = sqrt(-discriminant) / (2.0 * a);
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
