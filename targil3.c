#include <stdio.h>
#include <math.h>

void makeItArray(int n, int size);

int main(int argc, char const *argv[])
{
    int sequence, size;
    printf("please enter the sequence you want to check\n");
    printf("pay attention! the sequence cant have the same number twice\n");
    printf("-->");

    scanf("%d", &sequence);

    printf("please enter the size of array \n");
    printf("pay attention! the size must be greater than 0\n");
    scanf("%d", &size);

    makeItArray(sequence, size);
    printf(" check is complete !\n");
    return 0;
}

void makeItArray(int n, int size)
{
    int numInArr = size, present = 0;

    int newArray[100];

    //? split num to array of digits
    for (size_t i = 0; i < size; i++)
    {
        newArray[i] = n % 10;
        n /= 10;
    }

    while (numInArr != 0) // num from 0-9 check
    {

        for (size_t ii = 0; ii < size; ii++)
        {
            if (newArray[ii] == numInArr)
            {
                present = 1;
            }
            
        }

        if (!present)
        {

            printf(" %d is missing in array \n", numInArr);
            

        }
        numInArr--;
        present  = 0;
    }
}