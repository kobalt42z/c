#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float customrt(float a, float b);
float arithmetic_mean(int a[20], int n);
float geometric_mean(int a[20], int n);
int main(int argc, char const *argv[])
{
        int a[] = {1, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    //     float res = arithmetic_mean(a, 10);
        float res = geometric_mean(a, 10);
    //     printf("%f\n", res);



    return 0;
}
float arithmetic_mean(int a[20], int n)
{
    float calc = 0.000;
    for (size_t i = 0; i < n; i++)
    {
        calc += a[i];
    }

    return calc /= n;
}
float geometric_mean(int a[20], int n)
{
    float calc = 0.000;
    for (size_t i = 0; i < n; i++)
    {
        calc *= a[i];
    }
   return customrt(calc,n);
}
float customrt(float a, float b)
{   
    return pow(a,(1/b));
}