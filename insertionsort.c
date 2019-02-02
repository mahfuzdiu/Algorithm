#include<stdio.h>

int main()
{
    int key,a[]={5,3,4,2,1};

    int i,j;
    key=1;

    for(i=1;i<5;i++)
    {
        j=key;
        while(j>0 && a[j-1]>a[j])
        {
            int swap;
            swap=a[j];
            a[j]=a[j-1];
            a[j-1]=swap;
            j=j-1;
        }
        key++;
    }

    for(i=0;i<5;i++)
        printf("%d ",a[i]);

    return 0;
}
