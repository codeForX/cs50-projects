# include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j,counter;
   for (i = 0; i < n; i++)
    {
        counter = 0;
       // Last i elements are already in place
       for (j = 1; j < n -i ; j++)
           if (arr[j -1] > arr[j]) {
               swap(&arr[j-1], &arr[j]);
               counter++;
           }
        if(counter == 0)
            return;
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}