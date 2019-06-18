#include<stdio.h>
int gcd(int max,int min);
int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);
    int max=(a>=b)?a:b;
    int min=(a<=b)?a:b;
    int x=gcd(max,min);
    printf("\nHCF = %d\n",x);
    return 0;
}
int gcd(int max,int min)
{
    if(min==0)
        return max;
    else
        return gcd(min,max%min);
}
