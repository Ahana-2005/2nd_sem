//Write a c program to access the array elements using pointer.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter in arr[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("The array is accessed\n");
    for (int i = 0; i < n; i++) {
        int *ptr=&a[i];
        printf("The element in %d index is:%d\n",i,*ptr);
    }
}