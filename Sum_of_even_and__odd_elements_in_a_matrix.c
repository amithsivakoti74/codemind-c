#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,even=0,odd=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            {
                even=even+a[i][j];
            }
            else
            {
                odd=odd+a[i][j];
            }
        }
    }
    printf("%d %d",even,odd);
}