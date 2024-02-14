
//___________//recursion 3 exercise______________

// 0,1,1,2,3,5,8,13,21. fibonaci seriese

#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return (n - 1) + (n - 2);
    }
}

int main()
{
    // start:
    // int num;
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", fibonacci(i));
    }
    // goto start;
    return 0;
}

// 0 1 1 3 5 7 9 11 13
// output 
