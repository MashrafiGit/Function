#include <stdio.h>

int x = 10; // global variable

int function()
{

    int y = 5;
    printf("function > %d\n", x);
    printf("function > %d\n", y);
}

int main()
{

    int y = 5;
    printf("main > %d\n", x);
    printf("main > %d\n", y);
    function();

    return 0;
}