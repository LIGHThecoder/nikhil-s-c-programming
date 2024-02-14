
// passing arrayas to function arguments

// #include<stdio.h>

// int func1(int array[])
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("the value at %d is %d\n", i, array[i]);
//     }

// }

// int main()
// {
//     int arr[]={1,34,54,23};
//     func1(arr);
//     // printf("hello world");
// return 0;
// }

/*the value at 0 is 1
the value at 1 is 34
the value at 2 is 54
the value at 3 is 23*/

//////////////////////////////////////////////////////////
// #include <stdio.h>

// int func1(int array[])
// {
//     array[0] = 567; /// we had declaerd array 0 as 567 value it get reject by main as you as see 0 sd 1 value
//     for (int i = 0; i < 4; i++)
//     {
//         printf("the value at %d is %d\n", i, array[i]);
//     }
// }

// int main()
// {
//     int arr[] = {1, 34, 54, 23};
//     printf("the value at index 0 is %d\n", arr[0]);
//     func1(arr);

//     printf("the value at index 0 is %d\n", arr[0]);

//     // printf("hello world");
//     return 0;
// }

/*
the value at index 0 is 1
the value at 0 is 567
the value at 1 is 34
the value at 2 is 54
the value at 3 is 23
the value at index 0 is 567*/

/////////////////////////////////////////////////////////////////

// #include <stdio.h>

// // int func1(int array[])
// // {
// //     array[0] = 567; /// we had declaerd array 0 as 567 value it get reject by main as you as see 0 sd 1 value
// //     for (int i = 0; i < 4; i++)
// //     {
// //         printf("the value at %d is %d\n", i, array[i]);
// //     }
// //     return 0;
// // }

// int func2(int* ptr)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("the value at %d is %d\n", i, ptr[i]);
//     }
//     return 0;
// }

// int main()
// {
//     int arr[] = {1, 34, 54, 23};
//     // printf("the value at index 0 is %d\n",arr[0]);
//     // func1(arr);

//     // printf("the value at index 0 is %d\n",arr[0]);

//     // printf("hello world");
// func2(arr);
//     return 0;
// }

/*the value at 0 is 1
the value at 1 is 34
the value at 2 is 54
the value at 3 is 23*/

//////////////////////////////////////////////////////////
// #include <stdio.h>

// // int func1(int array[])
// // {
// //     array[0] = 567; /// we had declaerd array 0 as 567 value it get reject by main as you as see 0 sd 1 value
// //     for (int i = 0; i < 4; i++)
// //     {
// //         printf("the value at %d is %d\n", i, array[i]);
// //     }
// //     return 0;
// // }

// int func2(int *ptr)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("the value at %d is %d\n", i, *(ptr + i));
//     }
//     *(ptr + 2) = 4567;
//     return 0;
// }

// int main()
// {
//     int arr[] = {1, 34, 54, 23};
//     // printf("the value at index 0 is %d\n",arr[0]);
//     // func1(arr);

//     // printf("the value at index 0 is %d\n",arr[0]);

//     // printf("hello world");
//     func2(arr);
//     func2(arr);
//     return 0;
// }

/*
the value at 0 is 1
the value at 1 is 34
the value at 2 is 54
the value at 3 is 23
the value at 0 is 1
the value at 1 is 34
the value at 2 is 4567
the value at 3 is 23*/

#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
}

// void func3(int arr[2][3])
// {
//     for (int i = 0; i < 22; i++)
//     {
//         /* code */
//     }
    
// }

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[][2] = {{2, 13}, {9, 3}};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}

/* multi dimensional arrays  
The value at 0, 0 is 2
The value at 0, 1 is 13
The value at 1, 0 is 9
The value at 1, 1 is 3*/
