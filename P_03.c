//Write a c program to find the smallest element of an array.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter elements in index %d:", i);
        scanf("%d", &arr[i]);
    }
    int smallest=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("The largest element in the array is: %d", smallest);
}