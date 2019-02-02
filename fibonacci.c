#include<stdio.h>

int main()
{
   long  long int test,i,result;
    int n;

    scanf("%lld",&test);

    for(i=1;i<=test;i++)
    {
        scanf("%d",&n);

        long long int a,b,c,d,e;
        a=0;
        b=1;

        while(n-->1)
        {
            d=a;
            a=b;
            b=d+b;

        }

        printf("%lld\n",b);




    }

 return 0;

}

