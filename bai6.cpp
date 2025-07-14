#include<stdio.h>
int main(){
	int a [100];
	int n;
	printf("Nhap phan tu n=");
	scanf("%d",&n);
	int min =a[0];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(min>a[i]){
			min = a[i];
		}
	}
	printf("%d",min);
}
