#include<stdio.h>
#include<math.h>
int main()
{
    int a = ceil(4.3);
    printf("%d\n", a);

    int b = floor(4.3);
    printf("%d\n", b);

    int c = round(4.5);
    printf("%d\n", c);

    float d = sqrt(20);
    printf("%lf\n", d);

    int e = pow(2, 9);
    printf("%d\n", e);

    int f = abs(-6);
    printf("%d\n", f);

    return 0;
}