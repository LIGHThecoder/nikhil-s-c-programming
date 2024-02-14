
// exercise 4 solution

#include <stdio.h>

void startpatter(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            /* code */ printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int rows;
    printf("how many rows you want\n");
    scanf("%d", &rows);
    startpatter(rows);
    return 0;
}

/*how many rows you want
5
*
**
***
****
******/