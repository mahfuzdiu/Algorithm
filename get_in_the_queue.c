#include<stdio.h>

int main()
{
    int test,n,x,max_command,i,j,top;
    char a;
    scanf("%d",&test);

    for(i=1;i<=test;i++)
    {
        top=-1;
        scanf("%d",&n);
        int queue[n];
        scanf("%d",&max_command);
        printf("Case %d:\n",i);

        for(j=1;j<=max_command;j++)
        {
            scanf(" %c",&a);
            if(a=='P')
            {
                scanf("%d",&x);
            }

            if(a=='P')
            {
                top++;
                if(top<n)
                {
                    queue[top]=x;
                }

                else{
                    top--;
                    printf("Overflow!\n");
                }

            }



            else if(a=='R')
            {
                if(top>0)
                {
                    int ck;
                    ck=0;
                    while(ck<top)
                    {
                        queue[ck]=queue[ck+1];
                        ck++;
                    }
                    top--;

                }

                else if(top==0)
                {
                    top--;
                }

                else if(top<0)
                {
                    printf("No person in queue!\n");
                }

            }


            else if(a=='S')
            {
                if(top>-1)
                {
                    int ck;
                    ck=1;
                    printf("%d",queue[0]);
                    while(ck<=top)
                    {
                        printf(" %d",queue[ck]);
                        ck++;
                    }

                    printf("\n");
                }
                else
                    printf("No person in queue!\n");
            }
        }


    }
}










