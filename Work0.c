#include <stdio.h>
#include <stdlib.h>

int threefive() {
    int x;
    int ans = 0;
    for (x = 0; x < 1000; x++) {
        if (x % 3 == 0 || x % 5 == 0) {
            ans += x;
        }
    }
    printf("Problem 1: %d\n", ans);
    return 0;
}

int evenfib() {
    int x = 1;
    int y = 2;
    int ans = 2;
    while (x <= 4000000 || y <= 4000000) {
        x = x + y;
        if (x % 2 == 0) {
            ans += x;
        }
        y = x + y;
        if (y % 2 == 0) {
            ans += y;
        }
    }
    printf("Problem 2: %d\n", ans);
    return 0;
}

int main() {
    threefive();
    evenfib();
    return 0;
}
