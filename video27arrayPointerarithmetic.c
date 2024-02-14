

// arrays and pointers arithematics

//  #include<stdio.h>
//  int main()
//  {
//    //  printf("wow the world");
//    char a ='4';
//    char* ptra= &a;
//    printf("%d\n", ptra);
//    ptra++;
//    printf("%d\n", ptra);
//    printf("%d\n", ptra-2);  // it will add 1 size of int that is innt has 4 size. char has 2 size.

//    /*
//    output 6422296
// 6422300  -------------------as you can see here it has add 4 value of it in it.
// output
// 6422299
// 6422300
// 6422298*/
//  return 0;
//  }

#include <stdio.h>
int main()
{
   int arr[] = {131, 2, 3, 4, 5, 6, 79};
   int *arraypts = arr;
   printf("value at position 3 of the array is %d\n", arr[3]);
   printf("the address of first element of the array is  %d\n", &arr[0]);
   printf("the address of first element of the array is  %d\n\n", arr);

   printf("the address of second element of the array is  %d\n", &arr[1]);
   printf("the address of second element of the array is  %d\n\n", arr + 1);

   printf("the address of third element of the array is  %d\n", &arr[2]);
   printf("the address of third element of the array is  %d\n\n", arr + 2);
   // arraypts++;

   // printf("value at position 3 of the array is %d\n", arr[3]);
   printf("the value at address of first element of the array is  %d\n", *(arr));
   printf("the value at address of first element of the array is  %d\n\n", arr[0]);
   // value at
   printf("the value at address of second element of the array is  %d\n", *(&arr[1]));
   printf("the value at address of second element of the array is  %d\n\n", *(arr + 1));
   printf("the value at address of third element of the array is  %d\n", *(&arr[3]));
   printf("the value at address of third element of the array is  %d\n\n", *(arr + 3));

   return 0;

   /*
   output********
   value at position 3 of the array is 4
the address of first element of the array is  6422272
the address of first element of the array is  6422272

the address of second element of the array is  6422276
the address of second element of the array is  6422276

the address of third element of the array is  6422280
the address of third element of the array is  6422280

the value at address of first element of the array is  131
the value at address of first element of the array is  131

the value at address of second element of the array is  2
the value at address of second element of the array is  2

the value at address of third element of the array is  4
the value at address of third element of the array is  4






   alue at position 3 of the array is 4
the address of first element of the array is  6422276
the address of first element of the array is  6422276
the address of second element of the array is  6422280
the address of second element of the array is  6422280
the value at address of first element of the array is  1
the value at address of first element of the array is  1
the value at address of second element of the array is  2
the value at address of second element of the array is  2*/
}