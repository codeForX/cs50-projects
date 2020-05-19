# include <stdio.h>
# include <cs50.h>

int colatz(int n);
int factorial(int num);

int main(void)
{
    int n = get_int("enter a number:    ");
    printf("%i\n", factorial(n) );
}

int colatz(int num)
{
    if(num == 1)
        return 0;
    else if(num % 2 == 0)
        return 1 + colatz(num / 2);
    else
        return 1 + colatz( (num * 3) + 1 );
}
int factorial(int num)
{
    if(num == 1)
    {
        return 1;
    }
    return num * factorial(num-1);
}