#include<stdio.h>
#include<conio.h>
float Tiendien(int sodien)
{ 	float tiendien;
	if((sodien>0)&&(sodien<50)){
 	tiendien=sodien*1500;
 	}
 	else
 	{
 		if((sodien>=50)&&(sodien<=100))
		 {
 		tiendien=49*1500+(sodien-49)*2000;
 		 }
 		else
		 {
 		tiendien=49*1500+51*2000+(sodien-100)*3000;
		 }	
  return tiendien;
    }
}
int main(){
	int a,b,tiendien;
	printf("Nhap so dien moi : ");
	scanf("%d",&a);
	printf("Nhap so dien cu : ");
	scanf("%d",&b);
	tiendien= a-b;
	printf("So tien phai tra la: %f",Tiendien(tiendien));
}
