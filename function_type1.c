#include<stdio.h>

int sum(num1, num2)
{
int ans = num1 + num2;
return ans;
}

int sub(num1, num2)
{
int ans = num1 - num2;
return ans;
}

int main()
{
    int a = sum(10, 5);
    printf("%d\n", a);

    int b = sub(10, 5);
    printf("%d", b);

    return 0;
}