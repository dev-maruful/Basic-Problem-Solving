#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d);

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int greatest = 0;

    if (a > greatest)
    {
        greatest = a;
    }
    if (b > greatest)
    {
        greatest = b;
    }
    if (c > greatest)
    {
        greatest = c;
    }
    if (d > greatest)
    {
        greatest = d;
    }

    return greatest;
}