#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<0)
    {
        printf("invalid");
    }
    else if(a%2==0)
    {
        printf("even");
    
    }
    else if(a%2!=0)
    {
        printf("odd");
    }
     return 0;
}



