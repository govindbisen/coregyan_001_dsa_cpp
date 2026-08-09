#include <stdio.h>
#include <time.h>

int F[10];

int memofib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
        {
            F[n - 2] = memofib(n - 2);
        }
        if (F[n - 1] == -1)
        {
            F[n - 1] = memofib(n - 1);
        }
        F[n] = memofib(n - 2) + memofib(n - 1);
        return F[n - 2] + F[n - 1];
    }
}

int main()
{

    int i;
    for (i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    // 1. Declare clock variables
    clock_t start_time, end_time;
    double cpu_time_used;

    // 2. Record the starting clock tick
    start_time = clock();

    // 3. Execute your function
    int result = memofib(10);

    // 4. Record the ending clock tick
    end_time = clock();

    // 5. Calculate elapsed time in seconds
    cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    printf("recursive fibonacci %d \n", result);
    printf("Time taken: %f seconds\n", cpu_time_used);
    printf("CLOCKS_PER_SEC on this machine is: %ld\n", (long)CLOCKS_PER_SEC);
    return 0;
}
