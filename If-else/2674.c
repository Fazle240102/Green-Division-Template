#include <stdio.h>

int prime(int n)
{
    int count = 0;
    if (n <= 1)
        count++;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    return count;
}

int super(int n)

{
    int count = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (prime(digit))
            count++;
        n /= 10;
    }
    return count;
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {

        if (prime(n) == 0)
        {
            if (super(n) == 0)
                printf("Super\n");
            else
                printf("Primo\n");
        }
        else
        {
            printf("Nada\n");
        }
    }
    return 0;
}
