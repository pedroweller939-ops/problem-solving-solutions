#include <stdio.h>
#define MAX 5

int main() {

    int guesses[MAX];
    int guess;

    scanf("%d", &guess);
    scanf("%d %d %d %d %d", &guesses[0], &guesses[1], &guesses[2], &guesses[3], &guesses[4]);
    int count = 0;


    for (int i = 0; i < MAX; i++) {


        if ( guesses[i] ==  guess) {

            count++;

        }

    }

    printf("%d\n", count);
    return 0;
}