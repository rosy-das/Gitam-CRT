/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("Monday");
                break;
        case 2: printf("Tuesday");
                break;
        case 3: printf("Wednesday");
                break;
        case 4: printf("Thursday");
                break;
        case 5: printf("Friday");
                break;
        case 6: printf("saturday");
                break;
        case 7: printf("Sunday");
        break;
        default:
        printf("enter number between 1 to 7 only");
    }
    return 0;
}
