#include<stdio.h>
int main(){
	int n;
	int a[100];
	int min =a[0];
	int vitri= -1;
	printf("Nhap n=");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n; i++) {
     if (a[i] < 0) {
     if (vitri == -1 || a[i] < min) {
         min= a[i];
           vitri = i;
            }
        }
    }
    printf("%d",vitri);
}
