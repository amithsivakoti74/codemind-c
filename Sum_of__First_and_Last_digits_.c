#include<stdio.h>
int main()
{
    int N,firstDigit,lastDigit,sum;
    scanf("%d",&N);
    lastDigit=N%10;
    while(N>10)
    {
        N/=10;
    }
    firstDigit=N;
    sum=firstDigit+lastDigit;
    printf("%d
",sum);
}