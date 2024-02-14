
#include <stdio.h>
#include <string.h>
int main()
{
    printf("wow");
    return 0;
}

/*
Today we are going to learn about dynamic memory allocation. This is one of the concepts that differentiate between a basic and a pro-level programmer. This tutorial is mostly going to be theoretical, and we will see the implementation in the next tutorial. So, let us just get started.

What is Dynamic memory?
Dynamic memory allocation is the process of allocation of memory space at the run time. We use the concept of dynamic memory allocation to reduce the wastage of memory, and it is the optimal way of memory allocation. To grasp the concept completely, we will see the memory layout of C programming.

Memory Allocation in C:
Memory allocation in C can be divided into four segments. We will discuss each of them in detail because their understanding is crucial for us to understand about memory layout.

Code:
Code composes of all the text segment of our program. We will not go into a more detailed description of this segment as we are already familiar with it.

Variables:
By variables, we mean both global and static variables. Global variables can be used anywhere in the program, while static has its limitations inside the function. The variable segment is further divided into two segments, depending on the data they can store.

Data segment: stores initialized data i.e., data whose value is already given.
For example:

int i = 0;
bss segment: stores uninitialized data i.e., data whose variable is initialized only.
For example:

int i = 0;
Stack:
The stack is a LIFO data structure. It's size increases when the program moves forward. We will cover the stack in detail in this tutorial. Let us start with the actual description with the help of a diagram.








Initially, the stack looks like a bucket in which the last entry to be inserted will be the first one to get out. That is why it is known as LIFO data structure i.e., last in first out.

Suppose that we push a function A into the stack. Function A will start executing. Now the function A is calling another Function B during its execution. The Function B will be pushed into the stack, and the program will start executing B. Now, if B is calling another function C, then the program will push C into the stack and will start its execution. Now, after C has been executed completely, the program will pop C from the stack as it was the last one in and start executing B. When B has been executed completely, it will be popped out, and A will start executing until the stack becomes empty. 

Stack Overflow:
When a stack gets exhausted due to bad programming skills or some logical error, the phenomenon is known as Stack Overflow.

Heap:
Heap is a tree-based data structure. It’s size increases when we allocate memory dynamically. To use the heap data structure, we have to create a pointer in our main function that will point to some memory block in a heap. The disadvantage of using heap is that the memory will not get freed automatically when the pointer gets overwritten. 

 

Static

Dynamic

Allocation before execution

Allocation at run time

Non-reusable memory

Reusable memory

Less optimal way

More optimal way

 
 */