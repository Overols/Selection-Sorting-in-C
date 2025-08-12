#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int i = 1; i <= T; i++) {
        int A, B;
        scanf("%d %d", &A, &B); // Read A and B for each test case

        // Determine which app offers the maximum cashback
        if (A > B) {
            printf("Case #%d: Go-Jo\n", i);
        } else {
            printf("Case #%d: Bi-Pay\n", i);
        }
    }

    return 0;
}
