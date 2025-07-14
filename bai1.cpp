#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
void bai1(); void bai2(); void bai3(); void bai4(); void bai5();
void bai6(); void bai7(); void bai8(); void bai9(); void bai10();

void menu() {
    printf("========== MENU 10 BAI TAP ==========\n");
    printf("1. Kiem tra so nguyen to\n");
    printf("2. Kiem tra so chinh phuong\n");
    printf("3. Dem so chu so cua so nguyen\n");
    printf("4. Tim vi tri so le trong mang\n");
    printf("5. Giai phuong trinh bac 2\n");
    printf("6. Tim gia tri nho nhat trong mang\n");
    printf("7. Tim so chan dau tien trong mang\n");
    printf("8. Tim so nguyen to cuoi cung trong mang\n");
    printf("9. Tim vi tri gia tri am nho nhat trong mang\n");
    printf("10. Liet ke cac so trong doan [x,y]\n");
    printf("Chon bai (1-10), ESC de thoat:\n");
}


int main() {
    char ch;
    while (1) {
        system("cls");
        menu();
        ch = _getch();
        if (ch == 27) break;

        system("cls");
        switch (ch) {
            case '1': bai1(); break;
            case '2': bai2(); break;
            case '3': bai3(); break;
            case '4': bai4(); break;
            case '5': bai5(); break;
            case '6': bai6(); break;
            case '7': bai7(); break;
            case '8': bai8(); break;
            case '9': bai9(); break;
            case '0': bai10(); break;
            default: printf("Lua chon khong hop le!\n");
        }
        printf("\n\nNhan phim bat ky de quay lai menu...");
        _getch();
    }

    printf("\nTam biet!\n");
    return 0;
}


void bai1() {
    int n, i, la = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n <= 1) la = 0;
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                la = 0;
                break;
            }
        }
    }
    if (la) printf("Day la so nguyen to\n");
    else printf("Day khong phai la so nguyen to\n");
}

void bai2() {
    int n;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n < 0);
    int s = (int)sqrt(n);
    if (s * s == n) printf("%d la so chinh phuong\n", n);
    else printf("%d khong phai la so chinh phuong\n", n);
}

void bai3() {
    int n, count = 0;
    do {
        printf("Nhap so nguyen duong n = ");
        scanf("%d", &n);
    } while (n <= 0);
    while (n != 0) {
        n /= 10;
        count++;
    }
    printf("So chu so la: %d\n", count);
}

void bai4() {
    int n, a[100], found = 0;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Vi tri so le: ");
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) printf("Khong co so le trong day\n");
}

void bai5() {
    float a, b, c;
    printf("Nhap a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) printf("Phuong trinh vo so nghiem\n");
            else printf("Phuong trinh vo nghiem\n");
        } else {
            float x = -c / b;
            printf("Nghiem duy nhat x = %f\n", x);
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta < 0) printf("Phuong trinh vo nghiem\n");
        else if (delta == 0) printf("Nghiem kep x = %f\n", -b / (2 * a));
        else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Nghiem x1 = %f, x2 = %f\n", x1, x2);
        }
    }
}

void bai6() {
    int n, a[100], min;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    min = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < min) min = a[i];
    printf("Gia tri nho nhat: %d\n", min);
}

void bai7() {
    int n, a[100], found = -1;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            found = i;
            break;
        }
    }
    printf("Vi tri so chan dau tien: %d\n", found);
}

int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}

void bai8() {
    int n, a[100], kq = -1;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = n - 1; i >= 0; i--) {
        if (laSoNguyenTo(a[i])) {
            kq = a[i];
            break;
        }
    }
    printf("So nguyen to cuoi cung: %d\n", kq);
}

void bai9() {
    int n, a[100], min, vitri = -1;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            if (vitri == -1 || a[i] < min) {
                min = a[i];
                vitri = i;
            }
        }
    }
    printf("Vi tri gia tri am nho nhat: %d\n", vitri);
}

void bai10() {
    int n, a[100], x, y;
    printf("Nhap n = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Nhap x = "); scanf("%d", &x);
    printf("Nhap y = "); scanf("%d", &y);
    printf("Cac so thuoc [%d, %d]: ", x, y);
    for (int i = 0; i < n; i++)
        if (a[i] >= x && a[i] <= y)
            printf("%d ", a[i]);
}

