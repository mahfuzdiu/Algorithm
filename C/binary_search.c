#include<stdio.h>

int main()
{
    int n,i,key,ck=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int start,end,mid;
    start=0;
    end=n-1;
    scanf("%d",&key);

    while(start<=end)
    {
        mid=(start+end)/2;

        if(key==a[mid])
           {printf("Key found:%d\n",a[mid]);
           ck=1;
           break;
           }

        else if(key<a[mid])
        end=mid-1;
        else if(key>a[mid])
        start=mid+1;


    }

    if(ck!=1)
    printf("Key not found\n");

    return 0;
}
