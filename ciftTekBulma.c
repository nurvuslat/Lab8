//Girilen say�n�n �ift mi tek mi oldu�unu bulan program

#include <stdio.h>	

main(){
	
	int sayi;
	
	printf("Sayiyi Giriniz:");
	scanf("%d", &sayi);
	
	if (sayi%2==0){
		printf("Sayi Cifttir");
	}
	else{
		printf("Sayi Tektir");
	}
	
	
}
