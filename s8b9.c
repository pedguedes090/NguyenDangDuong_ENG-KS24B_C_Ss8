#include <stdio.h>

int main() {
    // khai bao
    int arr[] = {1, 2, 1, 2, 4, 1, 2, 7, 9, 2};
    int maxCount = 0; // so lan phan tu xuat hien
    int maxItem; // phan tu xuat hien nhieu nhat
    int lengthArr = sizeof(arr)/sizeof(arr[0]);

    // tim phan tu xuat hien nhieu nhat
    for (int i = 0; i < lengthArr; i++) {
        int count = 0;
        for (int j = 0; j < lengthArr; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxItem = arr[i];
        }
    }

    // in ket qua
    printf("Phan tu %d xuat hien so lan nhieu nhat: %d\n", maxItem, maxCount);
    return 0;
}
