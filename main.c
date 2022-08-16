#include <stdio.h>
#include <math.h>

float avrage(int n);
int main(int argc, char const *argv[])
{
    int n;
    printf("please enter a number od iteration \n");
    printf("==>");
    scanf("%d", &n);
    printf("the avrage is %f", avrage(n));
    return 0;
}
float avrage(int n)
{

    int a[n];
    float res, div;
    res = div = 0.0;
    for (size_t i = 0; i < n; i++)
    {
        printf("please enter a number  \n");
        scanf("%d", &a[i]);
    }

    for (size_t i = 1; i < n; i++)
    {
        if (a[i] < a[0])
        {
            res += a[i];
            div++;
        }
    }
    res = res / div;
    return res;
}
