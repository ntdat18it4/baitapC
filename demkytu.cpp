#include<stdio.h>
#include<conio.h>
#include <string.h>
int demkytu( char chuoi[100]){
int dem = 0;
for (int i=0 ; i<strlen(chuoi) ; i++){
	 dem = dem +1 ;
	 }
	 return dem;
}
int main(){
	char chuoi[100];
	printf("Nhap chuoi ky tu : ");
	scanf("%s",&chuoi);
printf("Chuoi co %d ki tu",demkytu(chuoi));

}

