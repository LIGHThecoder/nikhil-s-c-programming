

/*<h1> this is a heading*/

#include <stdio.h>

// void parser

int main()
{
    char string[] = "<h1> this is a heading </h1>";
    parser(string);
    return 0;
}
/*
Input:
<h1> This is a heading </h1>

Output:
This is a heading

Input:
<span> This is a heading2 </span>

Output:
This is a heading2


*/
