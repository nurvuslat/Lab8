//Klavyeden girilen iki say�y� toplayan program

#include <stdio.h>

int main(){
	
	int sayi1, sayi2, toplam;
	
	printf("Birinci Sayiyi Giriniz:");
	scanf("%d", &sayi1);
	
	printf("�kinci Sayiyi Giriniz:");
	scanf("%d", &sayi2);
	
	toplam = sayi1 + sayi2;
	printf("Toplam: %d", toplam);
	
	return 0;
	
}
