#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{


    int array[] = {0, 1, 2, 3, 4, 5, 6,11,12,13,14,15,16,17,18};
    

    for (size_t i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        printf("i = %d \n", i);
    }
    

    printf("%d\n",sizeof(array));

    return 0;
}
