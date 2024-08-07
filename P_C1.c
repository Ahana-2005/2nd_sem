//Write a program in c to perform bubble sort without creating an array but sort the elements by the utilisation of dynamic memory allocations type 1.[Pre-requisites: i. Calloc() ii. Malloc() iii. Realloc() iv. Free()]
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i;
    // Get the number of elements for the array
    printf("Enter number of elements:");
    scanf("%d",&n);
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
        // Get the elements of the array
        for (i = 0; i < n; i++)
        {
            printf("Enter the elements:");
            scanf("%d",&ptr[i]);
        }
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i)
        {
            printf("%d\t", ptr[i]);
        }
    }
    //Bubble sort implementation.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                int temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
    //Sort execution complete and printing sorted array.
    printf("\nThe elements of the array are: ");
    for (i = 0; i < n; ++i) {
        printf("%d\t", ptr[i]);
    }
}
