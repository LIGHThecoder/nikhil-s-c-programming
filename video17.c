#include<stdio.h>
int main()
{
//     label:
//     printf("hellow world\n");
//     goto end;
// goto label;
// end:
//     printf("we are at end\n");

int num;
for ( int i = 0; i < 8; i++)
{
    printf("%d\n",i);
    for (int j  = 0; j < 8; i++)
    {
        /* code */
        printf("enter the number. enter 0 to exit\n");
        scanf("%d", &num);

        if (num==0)
        {
            goto end;// break;  
        }
        
    }
    
}


end:























return 0;
}