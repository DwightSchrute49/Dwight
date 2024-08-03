#include <stdio.h>
#include <stdlib.h>

void triplets(int arr[],int size);
int main()
{
    int size,i;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the elements of the array:");
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Checking for triplets!!...\n");
    triplets(arr,size);
}
