#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, tong;
	printf("\n Nhap vao ba so bat ki: ");
	scanf("%d%d%d", &a, &b, &c);
	tong = a + b + c;
	printf("%d", tong);
	return 0;
}
