#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 64, 54}, {32, 75, 6}, {7, 89, 24}};
    int max = arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    printf("%d\n", max);

    return 0;
}

