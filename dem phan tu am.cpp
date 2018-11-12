#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void nhapmang(int *a, int n){
	for(int i=0;i<n; i++){
		printf("Phan tu thu [%d] : ",i+1);
		scanf("%d",(a+i));
	}
}
void inmang(int *a, int n){
	for(int i=0; i<n;i++){
		printf("%d\t",*(a+i));
	}
	printf("\n");
}
int Dem(int *a,int n){
	int dem=0;
	for(int i=0; i<n;i++){
		if(*(a+i)<-10) dem++; 
	}
	return dem;
}
int main(){
	int n;
	printf("Nhap so phan tu cua mang : ");scanf("%d",&n);
	int *p=(int*)malloc(n*sizeof(int));
	nhapmang(p,n);
	printf("Mang vua nhap : ");
	inmang(p,n);
	printf("So phan tu nho hon -10 : %d\n",Dem(p,n));
}
