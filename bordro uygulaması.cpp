#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h> 
#define uzunluk 11 
int kimlikkontrol(char tc[]) { // kimlik için alt program oluþturuyorum
 if (strlen(tc) != uzunluk) { // Uzunluk kontrolü için strlen kullanýyorum
 return 0;   
}
for (int i = 0; i < uzunluk; i++) //diziyi for ile kontrol edip rakam girildi mi diye kontrol ediyorum
{ if (!isdigit(tc[i])) {
return 0; //0 olursa geçersiz yani rakam dýþý bir þey algýlýyor
} 
return 1; // rakam olduðu anlaþýlýyor 
}
}		 
int karakterkontrolleri(char str[]){ // karakter kontorlü için yine aynýsýný alt program  yapýyorum 
for (int i = 0; i < strlen(str); i++){
if (!isalpha(str[i])) 
{
return 0; 
} 
} 
return 1; 
}  
void karakterkontrolu( const char *mesaj, char dizi[], int boyut) { // hatalý  olduðunda tekrar girmesi için sonsuz döngü  ve yine alt program yaðýyorum
while (1) {                                                  // boyut ,dizi,mesaj çýktýlar girdiler ve bouytlarýnýn kontrol etmek için yapýlýyor
printf("%s",mesaj);
scanf("%s", dizi); 
if (karakterkontrolleri(dizi)) {
break; } else {
printf("Hata: Sadece harfler girebilirsiniz.\n"); 
}
}
}
int netmas(){// net maaþ için burada kesintiler hesaplanýyor ve yine alt program 
float sskprim,issizliksgp,glrvrgmtrh,glrvrgmktr,kesintiler,netmaas,dmgvrgmktr,brutmaas;
printf("lutfen brut maasinizi giriniz  :");
scanf("%f",&brutmaas);
sskprim=brutmaas*0.14;
issizliksgp=brutmaas*0.01;
glrvrgmtrh=brutmaas-(sskprim+issizliksgp);
glrvrgmktr=glrvrgmtrh*0.15;
dmgvrgmktr=brutmaas*0.00759;
kesintiler=sskprim+issizliksgp+glrvrgmktr+dmgvrgmktr;
netmaas=brutmaas-kesintiler;
printf("net maasiniz :%.3f",netmaas,"TL");	
return netmaas;
}
FILE *fpr,*fpw; // dosya oluþturup yazýyoruz
int main(){	
char tc[12], isim[50], soyisim[50], departman[50];
while (1) {// buradaki komut hata olduðunda tekrar girilmesini saðlýyor.
printf("Lutfen 11 haneli TC kimlik numaranizi girin: ");
scanf("%11s", tc);// 11 hane sonrasýna izin vermez
if (kimlikkontrol(tc)) {
printf("\n");
break;
} else {
printf("Hata: TC kimlik numarasi 11 haneli olmali ve sadece rakamlardan olusmalidir.\n");
}
} 
// while dan baþlayýp bu noktaya kadar tc kontrolü yapýlýp alt program ile entegre ediyorum
karakterkontrolu("Ýsim: ", isim, sizeof(isim)); 
karakterkontrolu("Soyisim: ", soyisim, sizeof(soyisim)); 
karakterkontrolu("Departman: ", departman, sizeof(departman)); // karakterkontrolü ile baþlayan yer den buraya kadar ise karakteter kontrolü alt programý yapýlýyor
float brutmaas,netmaas;
netmas();
fpw=fopen("bordrokayit.txt","w");
tc[12];
isim[50];
 soyisim[50];
  departman[50];
fprintf(fpw," %s %s %s %s %s",tc,isim,soyisim,departman,netmas());
fclose(fpr);
return 0;
}


  



	
	
	
	
	
	
	
	
	
	
	
	
	



