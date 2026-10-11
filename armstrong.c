# include <stdio.h>

int power (int a, int b)
{
    int i = 0;
    int pow = 1;
    while (i < b)
    {
        pow = pow * a;
        i += 1;
    }
    return pow;
}

int armstrong (int n)
{
    int digit = 1;
    int num = n;
    while ((n / 10) != 0)
    {
        n = n / 10;
        digit += 1;
    }
    int sum = 0;
    int i;
    for (i = 1; i <= digit; i += 1)
    {
        sum += power((num % 10), digit);
        num = num / 10;
    }
    return sum;
}

int main (void)
{
    int n;
    printf("Number: \n");
    scanf("%d", &n);
    if (armstrong(n) == n)
    {
        printf("It is an armstrong number\n");
    }
    else
    {
        printf("It is not an armstrong number\n");
    }
    return 0;
}