#include <stdio.h>

int main() {
    int size;
    if (scanf("%d", &size) != 1) return 0;

    int current;
    int previous_marked = -1;
    int count = 0;

    for (int i = 0; i < size; i++) {
        scanf("%d", &current);

        if (current != previous_marked) {
            count++;
            previous_marked = current;
        }
    }

    printf("%d\n", count);
    return 0;
}