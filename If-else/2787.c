#include <stdio.h>
int main()
{
    int l, c, sub;

    scanf("%d\n%d", &l, &c);
    sub = c - l;

    if (sub % 2 == 0)
    {
        printf("1\n");
    }

    else
    {
        printf("0\n");
    }
}