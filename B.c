#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int i = 1; i <= T; i++) {
        int K, N, M;
        scanf("%d %d %d", &K, &N, &M); // Read K, N, and M for each test case

        // Check if Lili can fix her sink
        if (N + M >= K) {
            printf("Case #%d: yes\n", i);
        } else {
            printf("Case #%d: no\n", i);
        }
    }

    return 0;
}
