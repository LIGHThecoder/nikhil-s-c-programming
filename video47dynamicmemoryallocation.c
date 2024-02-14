#include <stdio.h>
#include <stdlib.h> //

int main()
{
    // printf("hello world\n");

    // use of malloc (full form memory allocation)

    // int *ptr;
    // int n;
    // printf("enter the size of array you want to create\n");
    // scanf("%d", &n);
    // ptr = (int *)malloc(3 * sizeof(int)); // 10 size of array created.

    // for (int i = 0; i < n; i++)
    // {
    //     printf("enter the value no %d of this array\n", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("the value at %d of this array is %d\n", i, ptr[i]);
    //     // scanf("%d", &ptr[i]);
    // }

    /*
    enter the value no 0 of this array
2
enter the value no 1 of this array
3
enter the value no 2 of this array
7
the value at 0 of this array is 2
the value at 1 of this array is 3
the value at 2 of this array is 7



*/
// calloc is used to enisilsed it by 0 

 int *ptr;
    int n;
    printf("enter the size of array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n , sizeof(int)); // 10 size of array created.

    for (int i = 0; i < n; i++)
    {
        printf("enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at %d of this array is %d\n", i, ptr[i]);
        // scanf("%d", &ptr[i]);
    }


//Use of realloc
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr ,  n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n",i);
       scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n",i, ptr[i]);
    }
    return 0;
}