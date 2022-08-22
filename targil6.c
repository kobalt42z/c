#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void left_max(float am, float gm, float hm);
float customrt(float a, float b);
float arithmetic_mean(int a[], int n);
float geometric_mean(int a[], int n);
float harmonic_mean(int a[], int n);


int main(int argc, char const *argv[])
{
    int a[] = {1, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    float am, gm, hm;
    am = arithmetic_mean(a, 10);
    gm = geometric_mean(a, 10);
    hm = harmonic_mean(a, 10);

    left_max(am, gm, hm);
    return 0;
}
float arithmetic_mean(int a[], int n)
{
    float calc = 0.000;
    for (size_t i = 0; i < n; i++)
    {
        calc += a[i];
    }

    return calc /= n;
}
float geometric_mean(int a[], int n)
{
    float calc = 1.000;
    for (size_t i = 0; i < n; i++)
    {
        calc *= a[i];
    }
    return customrt(calc, n);
}
float customrt(float a, float b)
{
    return pow(a, (1 / b));
}
float harmonic_mean(int a[], int n)
{

    float calc = 0.000;
    for (size_t i = 0; i < n; i++)
    {
        calc += (1.0 / a[i]);
    }
    return n / calc;
}
void left_max(float am, float gm, float hm)
{
    printf(" am >\t  >gm >\t hm \n");
    if (am > gm && gm > hm)
    {
        printf(" %f >\t  >%f  >\t %f \n", am, gm, hm);
    }
    else
    {
        printf(" %f >\t  >%f  >\t %f \n", am, gm, hm);
        printf("not begger! \n \n");
    }
}
