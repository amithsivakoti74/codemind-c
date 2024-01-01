#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even[N],odd[N];
    int evenindex=0,oddindex=0;
    for(int i=0;i<N;i++)
    {
        if(arr[i]%2==0)
        {
            even[evenindex]=arr[i];
            evenindex++;
        }
        else
        {
            odd[oddindex]=arr[i];
            oddindex++;
        }
    }
    for(int i=0;i<evenindex;i++)
    {
        printf("%d ",even[i]);
    }
    for(int i=0;i<oddindex;i++)
    {
        printf("%d ",odd[i]);
    }
    return 0;
}