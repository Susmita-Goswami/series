//1*2+2*3+....+n1*n2

#include<stdio.h>
int main(void)
{
    int n1,n2,i=1,a=1,b=2,sum=0;
    printf("enter the number n1 n2%d %d ");
    scanf("%d %d",&n1 ,&n2);

    printf("1*2+2*3+....+n1*n2 ",n1,n2);

   while(a<=n1 && b<=n2)
   {
     sum= sum+a*b;
       a=a+1;
       b=b+1;
   }
   printf("sum=%d",sum);
   return 0;


}
