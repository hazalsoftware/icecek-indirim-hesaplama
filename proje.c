#include <stdio.h>
#include <locale.h>
int main (void) {

	// Türkçe karakterleri düzgün göstermek için
    setlocale(LC_ALL, "Turkish");
    
    float tutar;

    // Kullanýcýdan fiyatý istiyoruz
    printf("Ýçeceðin fiyatýný giriniz: ");
    scanf("%f", &tutar);
    
    // %40 indirim hesabý     
    tutar = tutar - (tutar * 40 / 100);
    
    // Sonucu virgülden sonra iki basamak olacak þekilde yazdýrýyoruz
    printf("%%40 indirim uygulandý: %.2f TL\n", tutar);
     
return 0;
}

