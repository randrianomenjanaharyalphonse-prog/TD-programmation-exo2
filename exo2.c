#include <stdio.h>

int main() {
    int T[50];
    int N, i, max, pos;

    scanf("%d", &N);

    for(i = 0; i < N; i++)
        scanf("%d", &T[i]);

    max = T[0];
    pos = 0;

    for(i = 1; i < N; i++) {
        if(T[i] > max) {
            max = T[i];
            pos = i;
        }
    }

    printf("Max = %d\n", max);
    printf("Position = %d", pos);

    return 0;
}
