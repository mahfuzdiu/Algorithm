#include<stdio.h>
#include<stdlib.h>
int main()
{
    int test,i;

    scanf("%d",&test);

    for(i=1;i<=test;i++)
    {
        int n,j;
        scanf("%d",&n);
        long int a[n],lis[n];

        for(j=0;j<n;j++)
            scanf("%ld",&a[j]);

        for(j=0;j<n;j++)
                lis[j]=1;

        int u,v;



        for(v=1;v<n;v++)
        {

            for(u=0;u<v;u++)
            {
                if(a[u]<a[v])
                {
                    if(lis[v]<(lis[u]+1))
                       {
                           lis[v]=lis[u]+1;
                       }


                }

            }
        }

        long int max;
        int k;
        max=lis[0];

        for(k=1;k<n;k++)
        {
            if(max<lis[k])
            {
                max=lis[k];
            }

        }

        printf("%ld\n",max);

    }


    return 0;
}
