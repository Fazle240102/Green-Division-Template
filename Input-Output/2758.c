#include <stdio.h>
int main()
{
    float a, b;
    double x, y;
    scanf("%f %f\n", &a, &b);
    scanf("%lf %lf", &x, &y);
    printf("A = %.6f, B = %.6f\n", a, b);
    printf("C = %.6lf, D = %.6lf\n", x, y);
    printf("A = %.1f, B = %.1f\n", a, b);
    printf("C = %.1lf, D = %.1lf\n", x, y);
    printf("A = %.2f, B = %.2f\n", a, b);
    printf("C = %.2lf, D = %.2lf\n", x, y);
    printf("A = %.3f, B = %.3f\n", a, b);
    printf("C = %.3lf, D = %.3lf\n", x, y);
    printf("A = %.3E, B = %.3E\n", a, b);
    printf("C = %.3E, D = %.3E\n", x, y);
    printf("A = %.0f, B = %.0f\n", a, b);
    printf("C = %.0lf, D = %.0lf\n", x, y);
}