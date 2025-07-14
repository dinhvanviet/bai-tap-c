#include <stdio.h>
#include <math.h>
int main() {
    int n, i;
    int lasonguyento = 1;
    scanf("%d", &n);
    if (n <= 1) {
     lasonguyento = 0;
    } else {
        for (i = 2;i<= n / 2; i++) {
          if (n % i==0) {
          lasonguyento  = 0;
                break;
      }
    }
}
    if (lasonguyento) {
        printf("Day la so nguyen to");
    } else {
        printf("Day khong phai la so nguyen to");
    }
    return 0;
}
