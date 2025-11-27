#include <stdio.h>

int main() {
    int N;
    long long sum;
    scanf("%d", &N);
    sum = (long long)N * (N + 1) / 2;
    printf("%lld", sum);

    return 0;
}

