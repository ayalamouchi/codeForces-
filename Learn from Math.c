#include<stdio.h>

int is_composite(long long int num) {
    if (num <= 1) return 0;
    for (long long int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 1;
    }
    return 0;
}

int main() {
    long long int n, x, y;
    scanf("%lld", &n);
    x = n / 2;
    y = n - x;
    while (!is_composite(x) || !is_composite(y)) {
        x--;
        y++;
    }

    printf("%lld %lld", x, y);
    return 0;
}
