#include<stdio.h>

int main()
{
    int n,i,flag=0;
    printf("Enter num of elements: ");
    scanf("%d",&n);
    int a[n];
printf("Enter elements : ");
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int key;
    printf("Num you wanna search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==a[i])
           {
               printf("key found: %d\n",a[i]);
               flag=1;
           }

    }

    if(flag==0)
        printf("Not found\n");
  return 0;
}
