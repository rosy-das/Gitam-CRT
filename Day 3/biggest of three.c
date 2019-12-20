/******************************************************************************
 * biggest of two numbers by using ternary operator
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=10,b=20,c=100,d;
    d=(a>b&&a>c)?a:b>c?b:c;
    printf("%d",d);

    return 0;
}


