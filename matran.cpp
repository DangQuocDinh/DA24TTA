#include <stdio.h>
#include<math.h>
#define COL 100
#define ROW 100

void nhapmang(int a[][COL], int n, int m);
void xuatmang(int a[][COL], int n, int m);
int tongmang(int a[][COL],int n,int m);
void findx(a[][COL],int n,int m);
void tonghang(a[][COL],int n,int m);
void tongcot(int a[][],int n,int m);
void checknegativenumber(int a[][COL],int n, int m);
void checkprimenumber(int n);
void kiemtrasonguyento(int a[][COL],int n, int m);
void giamdandong(int a[][COL],int n,int m);
void kiemtracotcoleko(int a[][COL],int n,int m);
void insonguyento(int a[][COL],int n, int m);
void maxdong(int a[][COL],int n, int m);
void mindong(int a[][COL],int n,int m);




int main()
{


	int n,m;
	int a[n][m];
	do
	{
	
		printf("nhap lan luot so hang, cot.");
		scanf("%d%d",&n,&m);
	}while(n>COL&n<0|| m>ROW&m<0);
	
	nhapmang(a,n,m);
	xuatmang(a,n,m);

	return 0;
}


//ham nhap mang 2 chieu: cau a
void nhapmang(int a[][COL], int n, int m)
{
	
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("cot %d hang %d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
			
		}
	}
}

//ham xuat mang 2 chieu: cau b
void xuatmang(int a[][COL], int n, int m)
{
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
//cau c
int tongmang(int a[][COL],int n,int m)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			sum+=a[i][j];
		}
	}return sum;
}



//cau j
void findx(a[][COL],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if (a[i][j]%5==0)
			{
				printf("co ton tai X\n");
			}
			else {
				printf("khong ton tai x\n");
				
			}
		}
	}
	
	
}
//cau d
void tonghang(a[][COL],int n,int m)
{
	

 for(int i = 0; i < n; i++){
        int tong = 0;
        for(int j = 0; j < m; j++){
            tong= tong +  a[i][j];
        }
        printf("Tong hang %d : %d\n", i, tong);
    }
}
//cau e 
void tongcot(int a[][],int n,int m)
{
	for(int i=0;i<m;i++)
	{
		tong=0
		for(int j = 0;j<n;j++)
		{
			tong= tong + a[i][j];
		}
		printf("tong cot la: %d ",a[i][j]);
		
	}
}
//cau f
void checknegativenumber(int a[][COL],int n, int m)
{
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]<0)
			{
				printf("co ton tai so am.\n");
			}else printf("khong ton tai so am\n.");
			
		}
	}
	
	
}
//kiem tra so nguyen to
void checkprimenumber(int n)
{


	if (n<2)
	{
		return 0;
	}
	for (int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
		
	}
	
	return 1;
}
//cau g
void kiemtrasonguyento(int a[][COL],int n, int m)
{
	for( int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(checkprimenumber(a[i][j])==1)
			{
				printf("ton tai so nguyen to.\n";);
			}else{
				printf("khong ton tai so nguyen to.\n");
			}
		}
	}
}

//cau h
void giamdandong(int a[][COL],int n,int m)
{
	int dong;
	for(int i=0;i<n-1;i++)
	{
		for (int j= i + 1;j<n;j++)
		{
			if(a[dong][i]<a[dong][j])
			{
				int t=a[dong][i];
				a[dong][i]=a[dong][j];
				a[dong][j]=t;
			}
		}
	
	}
}
//cau i
void kiemtracotcoleko(int a[][COL],int n,int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]%2!=0)
			{
				printf("toan gia tri le\n",a[i][j]);
			}
		}
	}	
}
//cau n
void insonguyento(int a[][COL],int n, int m)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if(checkprimenumber==1)
			{
				printf("so nguyen to: %d.\n",a[i][j]);
			}
		}
	}
	
}
//cau l
void maxdong(int a[][COL],int n, int m)
{
	long long  max=-10e9
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}printf("so lon nhat la: %ld\n ",max);
	}
}
//cau m
void mindong(int a[][COL],int n,int m)
{
	long long mix=10e9;
	for(int i=0;i<n ;i++)
	{
		for (int j=0;j<m;j++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
				
			}
		}printf("phan tu nho nhat la: %ld. ",min);
	}
}


































