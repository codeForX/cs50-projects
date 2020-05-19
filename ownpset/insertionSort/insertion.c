# include <stdio.h>
# include <cs50.h>
# include <string.h>


void swap(int *A, int *B);
void insertion(int arr[], int size);
void printArr(int arr[],int size);

int main(void)
{
    int array[] = {1,4,1,55,6,77,5864,354,6547,353,6543765,87666,544,33,53252,63463};
    int arrSize = sizeof(array)/sizeof(array[0]);
    insertion(array,arrSize);
    printArr(array,arrSize);
}

void insertion(int arr[],int size)
{   //TODO: go through array once and add evrything to sorted part of array as you go and sort that specific item into sorted part if neccisery
    for(int i = 0; i < size; i++)
    {
        int element = i;
        while(arr[element] < arr[element - 1] && element > 0)
        {
            swap(&arr[element],&arr[element - 1]);
            element--;
        }
    }
}
void swap(int *A, int *B)
{
    int placeholder = *A;
    *A = *B;
    *B = placeholder;
}
void printArr(int arr[],int size)
{
    for(int i = 0; i < size;i++)
        printf("%i, ",arr[i]);
    printf("\n");
}