/******************************************************************************

                  armstrong number         

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        printf("%d\t",i);
    }
    
    return 0;
    
}
