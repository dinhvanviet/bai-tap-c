#include <stdio.h>
int main(){
	int n;
	int a[100];
	int found =0;
	printf("Nhap phan tu n =");
	scanf ("%d",&n);
	printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Vi tri so le: ");
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d",i);
            found =1;
        }
    }
if (!found){
	printf("Khong co so le tren day so tren");
}
    return(0);
}
