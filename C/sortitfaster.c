#include<stdio.h>

int main()
{
    int test,p,l;
    scanf("%d",&test);

   for(l=0;l<test;l++)

   {


    long int n,i;
    scanf("%ld",&n);
    long int a[n],temp[n];

    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }

        scanf("%d",&p);


        mergesort(a,temp,0,n-1,p);

        printf("Case %d:\n",l+1);
        printf("%ld",a[0]);

        for(i=1;i<n;i++)
        {
            printf(" %ld",a[i]);
        }

        printf("\n");


       }

      return 0;

}


void mergesort(long int a[],long int temp,long int min,long int max,int p)
{
    long int mid;

    if(min<max)
    {
        mid=(min+max)/2;

        mergesort(a,temp,min,mid,p);
        mergesort(a,temp,mid+1,max,p);

        merging(a,temp,min,mid,max,p);
    }
}

void merging(long int a[],long int temp[],long int min,long int mid,long int max,int p)
{
    long int i,j,k;

    i=min;
    j=mid+1;
    k=0;



    if(p==1)

    {




    while(i<=mid&&j<=max)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            i++;
            k++;
        }

        else{

            temp[k]=a[j];
            j++;
            k++;
        }
    }

    while(i<=mid)
    {
        temp[k]=a[i];
        i++;
        k++;
    }

    while(j<=max)
    {
        temp[k]=a[j];
        j++;
        k++;
    }

    for(i=min,k=0;i<=max;i++,k++)
    {
        a[i]=temp[k];
    }

 }

 else if(p==2)
 {

    while(i<=mid&&j<=max)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[j];
            j++;
            k++;
        }

        else{

            temp[k]=a[i];
            i++;
            k++;
        }
    }

    while(i<=mid)
    {
        temp[k]=a[i];
        i++;
        k++;
    }

    while(j<=max)
    {
        temp[k]=a[j];
        j++;
        k++;
    }

    for(i=min,k=0;i<=max;i++,k++)
    {
        a[i]=temp[k];
    }

}

}


























