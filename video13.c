// #include<stdio.h>
// int main()
// {
//     printf("hellow world");
// return 0;
// }

//-------------------- do while loops


#include<stdio.h>
int main()
{
    int num;
    printf("enter starting number so we can print it till  100th number\n ");
scanf("%d", &num);

printf("you have entered %d as your mumber.\n", num);
    do
    {
        printf("%d\n",num);
        num=num+1;
    } while (num<=100);
    
return 0;
}