#include<stdio.h>
int main(void)
{
    int sum=0,n,i;

        printf("enter the last digit ");

    scanf("%d",&n);
    printf("1+2+.......+%d",n);

    while(i<=n)
    {
        sum=sum+i;
        i++;

    }
    printf(" =%d",sum);
    return 0;
}
