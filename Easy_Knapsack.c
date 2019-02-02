#include<stdio.h>
int main()

{
    int test,n,i,j,l,m,t,family_member,line;

    scanf("%d",&test); // taking test cases


    for(line=0;line<test;line++) // loop for test cases

    {


         scanf("%d",&n); // taking total num value and weight

        int price[n],w[n];

        for(i=0;i<n;i++)
        {
                scanf("%d %d",&price[i],&w[i]); // loop for desired weight and value

        }


        scanf("%d",&family_member); // taking family member.
        int max[family_member];
        int sum=0;                              // sum for adding max value after completing every knapsack program for every member


        for(i=0;i<family_member;i++) // maximum weight for every member
                scanf("%d",&max[i]);



        for(i=0;i<family_member;i++)
        {
            int p,q;

            int kpsc[n+1][max[i]+1];

            for(t=0;t<=n;t++)
            {
                    for(j=0;j<=max[i];j++)
                        kpsc[t][j]=0;
            }

            p=1;                                 //from here knapsack mechanism

            for(l=0;l<n;l++)
            {
                q=1;

                for(m=0;m<max[i];m++)
                {

                    if(w[l]<=q)
                    {

                        int result,re;
                        re=abs(q-w[l]);
                        result=kpsc[p-1][re]+price[l];

                            if(result>kpsc[l][q])
                                {
                                        kpsc[l+1][q]=result;
                                }
                            else
                                        kpsc[l+1][q]=kpsc[l][q];

                    }

                    else
                      {
                         kpsc[l+1][q]=kpsc[l][q];
                      }

                      q++;
                }
                p++;
            }


        sum=sum+kpsc[n][max[i]];  // be careful here for taking max value

        }


        printf("%d\n",sum);


    }

    return 0;

}
