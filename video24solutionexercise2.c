
// exercise 2 slolution
#include <stdio.h>
int main()
{

    char input;
    float kmstomiles = 0.62137119;
    float inchestofoot = 0.08333333;
    float poundtokg = 0.45359237;
    float inchestometer = 0.0254;
    float dollartoruppe = 83.09;
    float first, second;

    while (1)
    {
        printf("enter the input character. q to quit\n1.kms to miles\n2.inches to foot\n3.pound to kg\n4.inches to meter\n5.dollar to ruppe\n");
        scanf("%c", &input);

        // printf("enter quantity in terms of first unit\n");
        // scanf("%d", &first);

        switch (input)
        {
        case 'q':
            printf("quating the programe.....");
            goto end;
            break;

        case '1':
            printf("enter the quantity interms of first unit\n");
            scanf("%f", &first);

            second = first * kmstomiles;
            printf("%.2f kilometer is equal to %.2f miles\n\n", first, second);
            break;

        case '2':
            printf("enter the quantity interms of first unit\n");
            scanf("%f", &first);
            // scanf("%d", &first);

            second = first * inchestofoot;
            printf("%.2f inches is equal to %.2f foot\n\n", first, second);

            break;

        case '3':
            printf("enter the quantity interms of first unit\n");
            scanf("%f", &first);

            second = first * poundtokg;
            printf("%.2f pound is equal to %.2f kg\n\n", first, second);

            break;

        case '4':
            printf("enter the quantity interms of first unit\n");
            scanf("%f", &first);

            second = first * inchestometer;
            printf("%.2f inches is equal to %.2f meter\n\n", first, second);

            break;

        case '5':
            printf("enter the quantity interms of first unit\n");
            scanf("%f", &first);

            second = first * dollartoruppe;
            printf("%.2f dollor is equal to %.2f ruppes\n\n", first, second);

            break;

        default:
            printf("in default now");
            break;
        }
    }

end:
    // printf("hello world");
    return 0;
}
