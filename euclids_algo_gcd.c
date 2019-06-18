#include<stdio.h>
int main()
{
    int a,b,min,max,r;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);
    max=a>=b?a:b;
    min=a<=b?a:b;
    while(min!=0)
    {
        r=max%min;
        max=min;
        min=r;
    }
    printf("\nHCF=%d\n",max);
    return 0;
}
