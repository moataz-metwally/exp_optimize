#include <stdio.h>

long long dictionary[10000] = {0};

long long power(long b, long n)
{
    if (dictionary[n] != 0)
    {

        return dictionary[n];
    }
    if (n == 1)
    {

        printf("hit the bottom\r\n");
        dictionary[n] = b;
        return b;
    }

    if (n % 2)
    {

        dictionary[n] = power(b, n - 1) * b;
    }
    else
    {
        dictionary[n] = power(b, (n / 2)) * power(b, (n / 2));
    }

    printf("dictionary triggered n=%ld x=%ld value=%lld\r\n", n, b, dictionary[n]);
    return dictionary[n];
}

void main()
{

    printf("%lld\r\n", power(3, 19));

    return;
}