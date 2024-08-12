#include<stdio.h>
int main()
{
    int n,i,j,swap;
printf("Num of elements: ");
    scanf("%d",&n);
    int a[n];

    printf("Elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
            if(a[j]>a[j+1])
        {
            swap=a[j];
            a[j]=a[j+1];
            a[j+1]=swap;
        }
    }

    printf("Sorted elements: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
