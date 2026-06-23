#include <stdio.h>

int main() {
    int arr[10] = {2,5,7,1,3,9,0,8,6,4};
    int temp;

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array in ascending order:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
