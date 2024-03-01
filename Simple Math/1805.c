#include <stdio.h>
int main()
{
    long long a, b, sum;
    scanf("%lld %lld", &a, &b);

    sum = (b - a + 1) * (a + b) / 2;

    printf("%lld\n", sum);
}