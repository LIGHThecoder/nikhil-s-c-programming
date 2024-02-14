

/*Arrays :


An array is a collection of data items of the same data type. And it is also known as subscript variable.



Items are stored at contiguous memory locations in Arrays.
It can also store the collection of derived data types such as pointers, structures etc.
The C Language places no limits on the number of dimensions in an array i.e. we can create any no. of dimension array E.g. 2d array, 3d array etc.


Most Commonly used dimensions of Array :

A one-dimensional array is like a list.
A two-dimensional array is like a table.
Some texts refer to one-dimensional arrays as vectors and two-dimensional arrays as matrices and use the general term Arrays when the no. of dimensions is unspecified or unimportant.



Why do we need Arrays ?
Code that use arrays for managing large no. of same type variables is more organized and readable.

Arrays allow us to create many variables by just a single line. It means there is no need to create or specify each and every variable.


Advantage of Arrays :
It is used to represent multiple data items of same type by using only single name.
Accessing an item in a given array is very fast.


Properties of Array :
Data in an array is stored in contiguous memory locations in RAM.
Each element of an array is of same size i.e. their data types are same so memory consumed by each is also same.
Any element of the array with given index can be accessed very quickly by using its address which can be calculated using the base address and the index.


Index No. – It is the special type of no. which allows us to access variables of Arrays i.e. index no. provides a method to access each element of an array in a program.

 Now let me tell you in brief about Arrays :


So as we already seen that array is a collection of data items and generally we use arrays when we have to make lots of variables at that time instead of creating each variable, so we can easily declare one array and can access it’s elements using it’s index no. and can do whatever we wish to do with that data.



So, that’s the use of arrays. And not only this we should have a good command over arrays because it is one of the most important topic in C language. Generally if we access each element of array at that time we use loops for fast calculations or operations.



And yeah one more thing i.e. you must have seen some memes on programmers i.e. programmers count from 0 not from 1. So the reason behind these memes is this only i.e. Arrays. As in arrays we do indexing from 0 onwards na that’s why these memes are created for programmers. :)



So that’s all about Arrays in C Language.*/
/// ************arrays*******
#include <stdio.h>
int main()
{
    //  this is called as 2D array '[2]' if we will not write value in the first [] it is ok but second is must.
    int marks[2][4] = {{45, 83455, 43, 54}, {3, 4, 5, 2}}; // i am storing 4 size and name it as marks in it so it will be written as [4] called array

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("enter they value of %d element of the array \n", i);
    //     scanf("%d", &marks[i]);
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* code */
            printf(" they value of %d,%d element of the array is %d \n", i, j, marks[i][j]);
        }

        // scanf("%d", &marks[i]);
    }

    /*output
    they value of 0,0 element of the array is 45
 they value of 0,1 element of the array is 83455
 they value of 0,2 element of the array is 43
 they value of 0,3 element of the array is 54
 they value of 1,0 element of the array is 3
 they value of 1,1 element of the array is 4
 they value of 1,2 element of the array is 5
 they value of 1,3 element of the array is 2*/
    /*output_________enter they value of 0 element of the array
2
enter they value of 1 element of the array
4
enter they value of 2 element of the array
5
enter they value of 3 element of the array
6
 they value of 0 element of the array is 2
 they value of 1 element of the array is 4
 they value of 2 element of the array is 5
 they value of 3 element of the array is 6*/

    // marks[0]= 34;
    // printf("marks of student 1 is %d\n", marks[0]);
    // marks[0]= 456;
    // marks[1]= 42;
    // marks[2]= 4346;
    // marks[3]= 65;
    // printf("marks of student 1 is %d\n", marks[0]);
    // printf("marks of student 2 is %d\n", marks[2]);

    /*output
    marks of student 1 is 34
    marks of student 1 is 456*/
    return 0;
}
