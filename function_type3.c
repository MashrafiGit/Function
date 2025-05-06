#include <stdio.h>

int sum(num1, num2)
{
    int ans = num1 + num2;
    printf("%d\n", ans);
    return;
}

int sub(num1, num2)
{
    int ans = num1 - num2;
    printf("%d", ans);
    return;
}

int main()
{
    int num1 = 10, num2 = 5;

    int a = sum(num1, num2);
    int b = sub(num1, num2);

    return 0;
}