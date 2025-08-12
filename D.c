#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int i = 1; i <= T; i++) {
        int N, M;
        scanf("%d %d", &N, &M); // Read N and M for each test case

        // Calculate the number of acquaintanceships
        int acquaintanceships = N * M;

        // Check if the number of acquaintanceships is odd or even
        if (acquaintanceships % 2 == 0) {
            printf("Case #%d: Party time!\n", i);
        } else {
            printf("Case #%d: Need more frogs\n", i);
        }
    }

    return 0;
}
