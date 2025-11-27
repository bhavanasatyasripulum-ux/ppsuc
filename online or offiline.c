#include <stdio.h>

int main() 
{
    float N, M;
    scanf("%f %f", &N, &M);
    float online_price = N - (0.10 * N);
    if (online_price < M)
        printf("ONLINE");
    else if (online_price > M)
        printf("DINING");
    else
        printf("EITHER");

    return 0;
}
