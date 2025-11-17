#include<stdio.h>
int main()
{
	//Bai2: Xay dung chuong trinh tinh chu vi dien tich hinh chu nhat
	//input
	int dai,rong;
	printf("Hay nhap chieu rong vao: ");
	scanf("%d",&rong);
	printf("Hay nhap chieu dai vao: ");
	scanf("%d",&dai);
	int dienTich, chuVi;
	dienTich = dai*rong;
	chuVi = (dai+rong)*2;
	//output
	printf("dien tich hinh chu nhat la: %d\n",dienTich);
	printf("chu vi hinh chu nhat la: %d", chuVi);
	return 0;
}