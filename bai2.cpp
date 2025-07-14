#include <stdio.h>
#include <math.h>
#include <conio.h>
int main (){
	int n;
	do{
		printf("Nhap n =");
		scanf("%d",&n);
	}while(n<0);
	int sprtn = (int)sqrt(n);
	 if (sprtn * sprtn == n) {
        printf("So %d la so chinh phuong\n", n);
    } else {
        printf("So %d khong phai la so chinh phuong\n", n);
    }

    getch();
}
