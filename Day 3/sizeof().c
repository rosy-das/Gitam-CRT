/******************************************************************************
 sizeof() -- It is used to find the size of the variable /literal/datatype
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=10;
    char b='a';
    float c=12.89;
    printf("\n sizeof(a)=%d",sizeof(a));
    printf("\n sizeof(b)=%d",sizeof(b));
    printf("\n sizeof(c)=%d",sizeof(c));
    printf("\n sizeof(int)=%d",sizeof(int));
    printf("\n sizeof(char)=%d",sizeof(char));
    printf("\n sizeof(float)=%d",sizeof(float));
    return 0;
}


