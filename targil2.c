#include <stdio.h>
#include <math.h>

void tasko(int n);
int main(int argc, char const *argv[])
{
    int a;

    printf("please enter a number: ");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("/// warning! 0 is not a valid number :( /// \n");
        return 0;
    }

    tasko(a);
    return 0;
}

void tasko(int n)
{
    int numInArr = 9;
    int temp = 0;

    //! this is a calaulus formula that returns dig count for a better use of memory
    int nDigits = floor(log10(abs(n))) + 1;
    int arr_a[nDigits];

    //* task 1
    //? split num to array of digits
    for (size_t i = 0; i < nDigits ; i++)
    {
        arr_a[i] = n % 10;
        n /= 10;
    }

    while (numInArr != 0)
    {

        for (size_t ii = 0; ii < nDigits ; ii++)
        {
            if (arr_a[ii] == numInArr)
            {
                temp++;
            }
        }

        if (temp != 0)
        {

            printf("the amount of %d in number is : %d\n", numInArr, temp);
        }
        numInArr--;
        temp = 0;
    }
}

