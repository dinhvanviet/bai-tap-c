#include<stdio.h>
#include<math.h>
int main (){
	int n;
	int count =0;
	do {
        printf("Nhap so nguyen duong n= ");
        scanf("%d", &n);
    } while (n <= 0);
    while (n != 0) {
        n /= 10;     
        count++;     
    }
    printf("So chu so la: %d\n", count);
    return 0;
}
