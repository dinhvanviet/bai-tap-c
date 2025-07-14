#include<stdio.h>
int main(){
	int n;
	int a[100];
	int x,y;
	printf("Nhap n=");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Nhap doan [x, y]:\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    printf("Cac so trong doan [%d, %d] la:\n", x, y);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= x && a[i] <= y) {
            printf("%d ", a[i]);
            found = 1;
        }
    }
    return (0);
}
