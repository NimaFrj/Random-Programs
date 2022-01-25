#include <stdio.h>
#include <cs50.h>

int collatz(int n);
int i = 0;

int main(void)
{
    int n = get_int("Enter the number: ");
    printf("total steps are: %i\n", collatz(n));
}

int collatz(int n)
{
    if (n == 1)
      // This is the base case that stops the program from an infinite loop
    {
        return 0;
    }
    else if (n % 2 == 0)
    {
        return 1 + collatz(n / 2);
    }
    else
    {
        return 1 + collatz(3 * n + 1);
    }
}
