// #include <stdio.h>

// void arrayRev(int arr[])
// {
//     int temp;
// for (int i = 0; i < 7; i++)
//     {
//         temp=arr[i];
//         // printf("the value fo element %d is %d\n", i, arr[i]);

//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 5, 6};
//     arrayRev(arr);

//     for (int i = 0; i < 7; i++)
//     {
//         printf("the value fo element %d is %d\n", i, arr[i]);
//     }
//     printf("\n");
//     // int arr[] = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10};
//     arrayRev(arr);
//     // arrayRev(arr)

//     for (int i = 0; i < 7; i++)
//     {
//         printf("the value fo element %d is %d\n", i, arr[i]);
//     }

//     return 0;
// }

// we have to just reverse this numbers

#include <stdio.h>
// target: 67,6,5,4,3,2,1

// 7
// 1,2,3,4,5,6,67
// 67,2,3,4,5,6,1
// 67,6,3,4,5,2,1
// 67,6,5,4,3,2,1

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        // swap item arr[i] with arr[6-i]
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}

void arrayPrint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("Before reversing the array\n");
    arrayPrint(arr);
    arrayRev(arr);
    printf("\nAfter reversing the array\n");
    arrayPrint(arr);

    return 0;
}
