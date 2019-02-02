#include<stdio.h>

int main()
{
    int test,i;
    scanf("%d",&test);

    for(i=0;i<test;i++)
    {
        int n,j;
        scanf("%d",&n); // number of days

        int w[n],p[n];

        for(j=0;j<n;j++)
        {
            scanf("%d %d",&w[j],&p[j]); //taking weight anp price per kg
        }


        int sum;
        sum=0;

        for(j=0;j<n-1;j++)
        {
            if(p[j]<p[j+1])
            {
                  sum=sum+w[j]*p[j];
                  p[j+1]=p[j];
            }
            else
            {
                sum=sum+w[j]*p[j];

            }
        }

        sum=sum+w[j]*p[j];
        printf("%d\n",sum);


    }
    return 0;
}
