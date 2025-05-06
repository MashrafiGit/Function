#include <stdio.h>

int sum()
{
    int num1 = 10, num2 = 5;
    int ans = num1 + num2;
    return ans;
}

int sub()
{
    int num1 = 10, num2 = 5;
    int ans = num1 - num2;
    return ans;
}

int main()
{
    int a = sum();
    printf("%d\n", a);

    int b = sub();
    printf("%d", b);

    return 0;
}