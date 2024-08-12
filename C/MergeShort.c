#include<stdio.h>

int main()

{

int n,i;

printf("Enter num of elements:");
scanf("%d",&n);

int a[n],temp[n];     //a[n] is our given elements

printf("Enter elements:");

for(i=0;i<n;i++)
{

    scanf("%d",&a[i]);

}

mergesort(a,temp,0,n-1);

printf("sorted elements: ");

for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}

printf("\n");

return 0;
}


void mergesort(int a[],int temp[],int min,int max)
{
    int mid;

    if(min<max)  // mergesort(0,0) or mergesort(min,max)
    {
        mid=(min+max)/2;

        mergesort(a,temp,min,mid);
        mergesort(a,temp,mid+1,max);
        merging_elements(a,temp,min,mid,max);
    }
}


void merging_elements(int a[],int temp[],int min,int mid,int max)
{
    int i,j,k;

    i=min;
    j=mid+1;
    k=0;

    while(i<=mid&&j<=max)
    {
        if(a[i]<a[j])
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

    for(i=min,k=0;i<=max;i++,k++)  //Its the most sensible line.. suppose we've 5 elements.we are merging 3 to 5 index.for this i=min=3 and max=5
    {
        a[i]=temp[k];
    }




}
























