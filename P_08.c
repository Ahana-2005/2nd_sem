//Write a program in array to search a particular element.
#include <stdio.h>
int main()
{
    int n,a,count=0;
    printf("Enter size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element in index %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&a);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            printf("Element found in index: %d",i);
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("Element not found");
    }
}
