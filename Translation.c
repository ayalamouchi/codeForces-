#include <stdio.h>
#include <string.h>

int main() {
    char s[102], t[102];
    int valide = 1;
    scanf("%s %s", s, t);

    int len_s = strlen(s);
    int len_t = strlen(t);

    if (len_s != len_t) {
        valide = 0;
    } else {
        for (int i = 0; i < len_s; i++) {
            if (s[i] != t[len_t - i -1]) {
                valide = 0;
                break;
            }
        }
    }

    if (valide) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
