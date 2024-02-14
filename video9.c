

// formate specifier and escape sequence
 #include <stdio.h>

 #define PI 3.14   // this is another way to declare constant but it hard first one is easy.
int main()
{
    /* code */
    const int a =6;
    float b= 45.56;
float c=98.875;



 

    // printf ("the value of b is %-10.2f the vlaue of a is %d\n", b,a); // here 10 means the number will take 10 caracters and .4 means the answer will have after point only four numbers. if we put - negative symbol it will create space but at back side and if not put - it will create space but before the value

    //  printf("the value of c is %10.2f", c);


     
     // constnats--------

    //   a=78;/// this is showing error becausee of upthere i had declare int a= 6 as constat so  it will no change so in order to change you have to remove the const function.
    //   printf("the value of a is %d",a);

    printf("\t the value of a is %d \\n the value of b is %f and \t\t the value of c is %f", a,b,c);
    return 0;
}
