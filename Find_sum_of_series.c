#include<stdio.h>
int main()
{
    int i,a;
    float b=0.0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=b+(1.0/i);
    }
    printf("%.2f",b);
}