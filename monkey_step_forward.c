#include<stdio.h>

int main()
{
    int t;
    long int x,i,steps,extra;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%ld",&x);

        if(x>=5)
        {
            steps=x/5;
            extra=x%5;
            if(extra>=1)
            {
                steps=steps+1;
            }

            printf("%ld\n",steps);

        }

         else
            printf("1\n");


    }

    return 0;

}

