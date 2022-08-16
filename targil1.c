#include <stdio.h>
#include <math.h>

float avrage_smallerThanFirst(int n);
float avrage_smallerThanLast(int n);
int main(int argc, char const *argv[])
{
    int n, choice;
    printf("please choose a number betwen the options below\n\n");
    printf("1 ==> avrage_smallerThanFirst \n");
    printf("2 ==> avrage_smallerThanLast\n");
    printf("--> ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n you chosse : 1 ==> avrage_smallerThanFirst \n");
        printf("please enter a number of iteration \n");
        printf("==>");
        scanf("%d", &n);
        printf("the avrage_smallerThanFirst is %0.3f", avrage_smallerThanFirst(n));
        break;
    case 2:
        printf(" \n you chosse : 2 ==> avrage_smallerThanLast \n");
        printf("please enter a number of iteration \n");
        printf("==>");
        scanf("%d", &n);
        printf("the avrage_smallerThanFirst is %0.3f", avrage_smallerThanLast(n));
        break;

    default:
        printf("invalid choice \n");
        break;
    }

    return 0;
}
float avrage_smallerThanFirst(int n)
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

float avrage_smallerThanLast(int n)
{

    int a[n];
    float res, div;
    res = div = 0.0;
    for (size_t i = 0; i < n; i++)
    {
        printf("please enter a number  \n");
        scanf("%d", &a[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] < a[n-1])
        {
            res += a[i];
            div++;
        }
    }
    res = res / div;
    return res;
}