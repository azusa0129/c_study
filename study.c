#include <stdio.h>
#include <math.h>
struct cor
{
    int x[3];
    int y[3];
};
int main()
{
    int a, b, c;
    struct cor co = {0, 0};
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &co.x[i], &co.y[i]);
    }
    a = sqrt(pow(co.x[1] - co.x[0], 2) + pow(co.y[1] - co.y[0], 2));
    b = sqrt(pow(co.x[2] - co.x[1], 2) + pow(co.y[2] - co.y[1], 2));
    c = sqrt(pow(co.x[0] - co.x[2], 2) + pow(co.y[0] - co.y[2], 2));
    if (a + b > c)
    {
        printf("ture");
    }
    else
    {
        printf("false");
    }
    return 0;
}