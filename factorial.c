#include <stdio.h>
#include <cs50.h>

int fact(int n);

int main(void)
{
    int sum = 1;
    int n = get_int("Enter the number: ");
    printf("factorial of n is: %i\n", fact(n));
}

int fact(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
