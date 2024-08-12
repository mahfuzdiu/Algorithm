#include<stdio.h>
#include<string.h>
int main()
{
    int test,i;
    scanf("%d",&test);


    for(i=1;i<=test;i++)
    {
        char column1[220],row1[220];


        scanf("%201s",column1);
        scanf("%201s",row1);





        int row,column;

        column=strlen(column1);
        row=strlen(row1);



        int lcs[row+1][column+1],j,k;

        for(j=0;j<=row;j++)
        {
            for(k=0;k<=column;k++)
            {
                lcs[j][k]=0;

            }

        }



       int p,q;

       p=1;

        for(j=0;j<row;j++)
        {
            q=1;
            for(k=0;k<column;k++)
            {
                if(row1[j]==column1[k])
                {
                    lcs[p][q]=lcs[p-1][q-1]+1;
                }

                else
                    {
                        if(lcs[p][q-1]>lcs[p-1][q])

                             lcs[p][q]=lcs[p][q-1];
                          else
                                lcs[p][q]=lcs[p-1][q];

                    }

               q++;
            }
            p++;
        }



        printf("Case %d: %d\n",i,lcs[row][column]);


    }

    return 0;

}
