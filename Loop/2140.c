#include <stdio.h>
int main()
{
    int n, m, change, i;
    while (1)
    {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0)
        {
            break;
        }
        change = m - n;
        if (change == 7 || change == 12 || change == 22 || change == 52 || change == 102 || change == 15 || change == 25 || change == 55 || change == 105 || change == 30 || change == 60 || change == 110 || change == 70 || change == 120 || change == 150)
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
    }
}