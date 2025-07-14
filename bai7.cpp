#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	int a[100];
	printf("Nhap n=");
	scanf("%d",&n);
	for (int i =0 ;i < n;i++){
		scanf("%d",&a[i]);
	}
	int found=-1;
	for(int i=0;i<n;i++){
		if(a[i] % 2 == 0){
			found =i;
			break;
		}
	}
	printf("%d",found);
	return (0);
}
