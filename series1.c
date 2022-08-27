#include<stdio.h>
int main(void)
{
    int n,sum,i;
    printf("enter the last value ");
    scanf("%d",&n);
    printf("1+3+........+%d",n);

    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf(" =%d",sum);
    return 0;
}
