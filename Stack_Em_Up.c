#include<stdio.h>


int main()
{
    int test,n,q,i,x,max_command,total_command,j,top;
    char a;


    scanf("%d",&test);

    for(i=1;i<=test;i++)
    {
        scanf("%d",&n);

        int stack[n];

        top=-1;


        scanf("%d",&max_command);
        printf("Case %d:\n",i);


        for(total_command=1;total_command<=max_command;total_command++)
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
                    stack[top]=x;
                else
                        {printf("Overflow!\n");
                        top--;
                        }
            }

            else if(a=='R')
            {
                if(top>(-1))

                {


                    top--;

                }


               else{
                    printf("No plates in stack!\n");
                 }

             }



        else if(a=='S')
        {
            if(top>(-1))
            {
                int ck=top;
                printf("%d",stack[ck]);
                ck--;
                while(ck>-1)
                {
                    printf(" %d",stack[ck]);
                    ck--;
                }
                printf("\n");

            }

            else
            {
                printf("No plates in stack!\n");
            }
        }

         //while loop end

        }

    }

    return 0;
}
