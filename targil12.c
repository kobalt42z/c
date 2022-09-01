#include <stdio.h>
#include <math.h>
#define ROW 8
#define COL 7
int main(int argc, char const *argv[])
{
    //! need to count corner from rtl i =>+  j=> -

    int Aarr[ROW][COL] = {{0, 0, 0, 0, 0, 0, 0}, {0, 1, 1, 1, 0, 0, 0}, {0, 1, 1, 1, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 0}, {0, 1, 1, 0, 0, 1, 0}, {0, 1, 1, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 0}};

    int h, v, count; // ? h  rtl on col  v dtu on row
    h = v = count = 0;
    for (v = ROW-1; v > 0; v--)
    {
        for (h = 0; h < COL; h++)
        {
            if (Aarr[v][h] == 1 && Aarr[v-1][h] == 0 && Aarr[v][h + 1] == 0)
            {
                count++;
            }
        }
    }
    printf("%d \n", count);
    return 0;
}
