# include <stdio.h>
# include <cs50.h>
# include <string.h>

int main(void)
{
    int a [] = {2,5,6,8,9,12,14,25,66,73,74,75,80};
    int start = 0;
    int end =  sizeof(a) / sizeof(a[0]) - 1;
    int target = get_int("enter int here:  ");

    while(start <= end)
    {
        int selector = (start + end) / 2;
        if(target == a[selector])
        {
            printf("target found at index %i \n", selector);
            return 0;
        }
        else if(target < a[selector])
        {
            end = selector - 1;
        }
        else if(target > a[selector])
        {
            start = selector + 1;
        }
    }
    printf("target not found in array \n");
    return 1;
}