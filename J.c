#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k); // Read the input values

    // Check if the elevators can meet at the same level
    for (int t = 0; t <= 100; t++) {
        int pos1 = x + t; // First elevator going up
        int pos2 = y - t; // Second elevator going down
        int pos3 = k;     // Third elevator in maintenance

        if (pos1 == pos2 && pos2 == pos3) {
            printf("%d\n", t);
            return 0;
        }
    }

    // If no meeting point is found
    printf("-1\n");
    return 0;
}
