// r al�p i�lem t�r� 1 ise daire �evresi 2 ise daire alan� hesaplayan program

#include <stdio.h>

int main(){
	
	int r, sayi, alan, cevre;
	
	printf("Yaricapi Giriniz:");
	scanf("%d,", &r);
	
	printf("Islem Turu Icin Sayiyi Giriniz:");
	scanf("%d", &sayi);
	
	if (sayi == 1){
		cevre = 2 * 3 * r;
		printf("Cevre: %d", cevre);
		
	}	
	else if (sayi == 2){
		alan = 3 * r * r; 
		printf("Alan: %d", alan);
		
	}
	else
		printf("Yanlis Sayi Girdiniz!");
		
		return 0;
	
	
}
