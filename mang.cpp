#include<stdio.h>
#include<math.h>
int giaithua(int n){
	float giaithua=1;
	for(int i=1;i<=n;i++){
	giaithua=giaithua*i;	
	}
	return giaithua;
}
int main (){
	int a[100];
	int n;
	printf("Nhap so phan tu : ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("Nhap phan tu thu a[%d] : ",i);
		scanf("%d",&a[i]);
	 }
	 printf("Cac phan tu trong mang la : ");
		for (int i =0;i<n;i++){
		printf("a[%d]=%d ",i,a[i]);
	}
	int i;
	float Sgiaithua = 0;
	printf("\nnhap i : "), scanf("%d",&i);
	printf("Giai thua cua phan tu thu [%d] la : %d",i,giaithua(n));
	for (int i=0;i<n;i++)
  	  Sgiaithua=Sgiaithua+giaithua(a[i]);
  	printf ("\nTong giai thua cua cac phan tu trong mang la : %f \n",Sgiaithua);
	}
