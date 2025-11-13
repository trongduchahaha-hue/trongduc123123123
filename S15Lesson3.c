#include <stdio.h>

int daoNguocSo(int n) {
    int daoNguoc = 0;

    while (n != 0) {
        daoNguoc = daoNguoc * 10 + n % 10; 
        n /= 10; 
    }
    return daoNguoc;
}
int main() {
    int so;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);

    int result = daoNguocSo(so);
    printf("So dao nguoc: %d\n", result);

    return 0;
}
