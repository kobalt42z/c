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
    int arrOfCounters[9]; // ?array of 0-9 counters //++ on if found in arr_a

    //! array reset to  0 //  avoiding fals val if not found in arr_a!
    for (size_t i = 0; i < 8; i++)
    {
        arrOfCounters[i] = 0;
    }

    //! this is a calaulus formula that returns dig count for a better use of memory
    int nDigits = floor(log10(abs(n))) + 1;
    int arr_a[nDigits];

    //* task 1
    //? split num to array of digits
    for (size_t i = 0; i < nDigits - 1; i++)
    {
        arr_a[i] = n % 10;
        n /= 10;
    }

    //* task 2
    int i, j;
    i = j = 0;
    while (i < 8)
    {
        while (j < nDigits - 1)
        {
            if (arr_a[j] == arrOfCounters[i])
            {
                arrOfCounters[i]++;
            }
            j++;
        }
        i++;
    }

    for (int i = 0; i < 8; i++)
    {
        if (arrOfCounters[i] != 0)
        {
            printf(" the amount of %d \t %d", i+1, arrOfCounters[i]);
        }
    }
}


//! bad algo we can do it much faster
