#include <stdio.h>
#include <string.h>

void reverse(char *a, int b, int c); // b가 시작 c가 끝
char str[32];
int len = 0;

int main()
{
    int temp = 0;
    char a[32];
    scanf("%s", &a);

    len = strlen(a);
    for (int i = 0; i < len - 1; i++)
    {
        str[i] = a[i];
    }
    reverse(a, 0, len - 1);
    for (int i = 0; i < len - 1; i++)
    {
        if (str[i] != a[i])
        {
            temp = 1;
        }
    }
    if (temp != 1)
    {
        printf("true");
    }
    else
    {
        printf("False");
    }
}

void reverse(char *a, int b, int c)
{
    if (b > c)
    {
        return;
    }
    char temp = a[b];
    a[b] = a[c];
    a[c] = temp;

    reverse(a, b + 1, c - 1);
}