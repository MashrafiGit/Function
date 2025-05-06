#include <stdio.h>

void sum(num1, num2)
{
    int ans = num1 + num2;
    printf("%d\n", ans);
    return;
}

void sub(num1, num2)
{
    int ans = num1 - num2;
    printf("%d", ans);
    return;
}

int main()
{
    int num1 = 10, num2 = 5;

    sum(num1, num2);
    sub(num1, num2);

    return 0;
}