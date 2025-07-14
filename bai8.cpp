#include <stdio.h>
#include <math.h>
int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
       if (n % i == 0)
       return 0;
    }
    return 1;
}
int main() {
    int n, a[100];
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int ketqua = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (laSoNguyenTo(a[i])) {
        ketqua = a[i];
        break;
        }
    }
printf("%d",ketqua);
    return 0;
}

