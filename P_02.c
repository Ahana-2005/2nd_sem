//Write a C program to find the largest number of an array.
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
        int largest=arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > largest)
            {
                largest=arr[i];
            }
        }
        printf("The largest element in the array is: %d", largest);
}