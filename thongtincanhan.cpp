#include <stdio.h>
#include <string.h>


struct thongtincanhan
{
	char hoten[50];
	int tuoi;
	char gioitinh[20];
	char diachi[80];
	long long thunhap;
	
	
};
void nhap(thongtincanhan *a );
void xuat(thongtincanhan a);

int main()
{
	thongtincanhan a;
	nhap(&a);
	printf("--THONG TIN CA NHAN--\n");
	xuat(a);
	
	return 0;
}

void nhap(thongtincanhan *a)
{
	printf("\nHo va Ten: ");
	fflush(stdin);
	gets(a->hoten);
	
	printf("\nTuoi: ");
	scanf("%d",&a->tuoi);
	
	printf("\nGioi tinh: ");
	fflush(stdin);
	gets(a->gioitinh);
	
	printf("Dia chi: ");
	fflush(stdin);
	gets(a->diachi);
	
	printf("Thu Nhap: ");
	scanf("%lf",&a->thunhap);
	
}

void xuat(thongtincanhan a)
{
	printf("\nHo va Ten: %s\nTuoi: %d\nGioi tinh: %s\nDia chi: %s\nThu nhap: %.2lfVND.",a.hoten,a.tuoi,a.gioitinh,a.diachi,a.thunhap);
}
