#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int array[] = {0, 1, 2, 3, 4, 5, 6};
    int r = sizeof(array) / sizeof(array[0]);

    printf("%d\n", r);

    return 0;
}
