# include <stdio.h>
# include <cs50.h>
# include <string.h>


void swap(int *A, int *B);
void selection(int arr[], int size) ;
void printArr(int arr[],int size);

int main(void)
{
    int array[] = {1,4,1,55,6,77,5864,354,6547,353,6543765,87666,544,33,53252,63463};
    int arrSize = sizeof(array)/sizeof(array[0]);
    selection(array,arrSize);
    printArr(array,arrSize);
}

void selection(int arr[],int size)
{
    //todo: go through every item in array find smallest put at beginning shrink search area repeat
    
    for(int i = 0; i < size -1 ; i++ )
    {
        int small = i;
        for(int j = i+1; j < size ; j++ )
        {
            if(arr[j] < arr[small])
            {
                small = j;
            }
        }
        swap( &arr[small], &arr[i] );
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
    printf("array:\n");
    for(int i = 0; i < size; i++)
        printf("%i,", arr[i]);
    printf("\n");
}