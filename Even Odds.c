#include <stdio.h>

int main() {
    long long int n, k;
    scanf("%lld %lld", &n, &k);

    long long int total_pairs = n / 2;
    long long int total_impairs = n - total_pairs;
    if (k <= total_impairs) {
        printf("%lld\n", 2 * k - 1);
    } else {
        k -= total_impairs;
        printf("%lld\n", 2 * k);
    }

    return 0;
}
