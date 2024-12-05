#include <stdio.h>


struct phanso
{
	float tu;
	float  mau;
};

void nhap(phanso *a);
void xuat(phanso a);
void rutgon(phanso a);
int ucln(int a,int b);
//void tong()

int main()
{
	phanso a;
	phanso b;
	
	nhap(&a);
	xuat(a);
	rutgon(a);
	
	nhap(&b);
	xuat(b);
	rutgon(b);
	float tong=a.tu/a.mau + b.tu/b.mau;
	printf("\nTong: %.2f",tong);
	float hieu=a.tu/a.mau-b.tu/b.mau;
	printf("\nHieu: %.2f ",hieu);
	float tich=a.tu/a.mau * b.tu/b.mau;
	printf("\nTich: %.2f",tich);
	float thuongPS=( a.tu/a.mau) / (b.tu/b.mau);
	printf("\nThuong: %.2f",thuongPS);
	
	return 0;
}



//nhap phan so 
void nhap(phanso *a)
{
	printf("Tu so= ");
	scanf("%f",&a->tu);
	
	printf("Mau so= ");
	scanf("%f",&a->mau);
	
	
}
//xuat phan so 
void xuat(phanso a)
{
	printf("phan so: %.0f/%.0f\n",a.tu,a.mau);
}

//rut gon phan so 
void rutgon(phanso a)
{
	int t=ucln(a.tu,a.mau);
	if(a.mau/t==1)
	{
		printf("%.0f\n",a.tu/t);
	}else
	{
		printf("Rut gon: %.0f/%.0f\n",a.tu/t,a.mau/t);
	}
	
}

//Uoc chung lon nhat 
int ucln(int a,int b)
{
	while(b!=0)
	{
		int t=a%b;
		a=b;
		b=t;
	}
	return a;

}

