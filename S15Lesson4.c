#include <stdio.h>

int tongMang(int arr[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += arr[i]; 
    }
    return tong;
}
int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int result = tongMang(arr, n);
    printf("Tong cac phan tu trong mang = %d\n", result);

    return 0;
}
