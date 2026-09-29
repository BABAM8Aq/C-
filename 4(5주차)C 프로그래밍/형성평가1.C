#include <stdio.h>

int main() {
    int cnt[7] = {0};
    int n;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        cnt[n]++;
    }

    for (int i = 0; i < 7; i++) {
        printf("%d: %d번\n", i, cnt[i]);
    }

    return 0;
}
