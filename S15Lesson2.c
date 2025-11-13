#include <stdio.h>
#include <stdlib.h>

int tongChuSo(int n) {
    n = abs(n);
    int tong = 0;
    while (n > 0) {
        tong += n % 10;
        n /= 10;              
    }
    return tong;
}
int main () {
	int x;
	printf ("Nhap so nguyen: ");
	scanf ("%d", &x);
	printf ("Tong cac chu so cua %d là: %d\n", x, tongChuSo(x));
	return 0;
}
