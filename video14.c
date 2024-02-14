// #include<stdio.h>
// int main()
// {
//     printf("xxxx");
// return 0;
// }





//-----------while loop

#include<stdio.h>
int main()
{
    int i;
    printf("enter a number so we can print it till 100\n");
    scanf("%d", &i);

    printf("the entered number is %d\n", i);

    while (i<=100)
    {
        printf("%d\n",i);
        i=i+1;
    }
    
return 0;
}