#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h> 
#define uzunluk 11 
int kimlikkontrol(char tc[]) { // kimlik i�in alt program olu�turuyorum
 if (strlen(tc) != uzunluk) { // Uzunluk kontrol� i�in strlen kullan�yorum
 return 0;   
}
for (int i = 0; i < uzunluk; i++) //diziyi for ile kontrol edip rakam girildi mi diye kontrol ediyorum
{ if (!isdigit(tc[i])) {
return 0; //0 olursa ge�ersiz yani rakam d��� bir �ey alg�l�yor
} 
return 1; // rakam oldu�u anla��l�yor 
}
}		 
int karakterkontrolleri(char str[]){ // karakter kontorl� i�in yine ayn�s�n� alt program  yap�yorum 
for (int i = 0; i < strlen(str); i++){
if (!isalpha(str[i])) 
{
return 0; 
} 
} 
return 1; 
}  
void karakterkontrolu( const char *mesaj, char dizi[], int boyut) { // hatal�  oldu�unda tekrar girmesi i�in sonsuz d�ng�  ve yine alt program ya��yorum
while (1) {                                                  // boyut ,dizi,mesaj ��kt�lar girdiler ve bouytlar�n�n kontrol etmek i�in yap�l�yor
printf("%s",mesaj);
scanf("%s", dizi); 
if (karakterkontrolleri(dizi)) {
break; } else {
printf("Hata: Sadece harfler girebilirsiniz.\n"); 
}
}
}
int netmas(){// net maa� i�in burada kesintiler hesaplan�yor ve yine alt program 
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
FILE *fpr,*fpw; // dosya olu�turup yaz�yoruz
int main(){	
char tc[12], isim[50], soyisim[50], departman[50];
while (1) {// buradaki komut hata oldu�unda tekrar girilmesini sa�l�yor.
printf("Lutfen 11 haneli TC kimlik numaranizi girin: ");
scanf("%11s", tc);// 11 hane sonras�na izin vermez
if (kimlikkontrol(tc)) {
printf("\n");
break;
} else {
printf("Hata: TC kimlik numarasi 11 haneli olmali ve sadece rakamlardan olusmalidir.\n");
}
} 
// while dan ba�lay�p bu noktaya kadar tc kontrol� yap�l�p alt program ile entegre ediyorum
karakterkontrolu("�sim: ", isim, sizeof(isim)); 
karakterkontrolu("Soyisim: ", soyisim, sizeof(soyisim)); 
karakterkontrolu("Departman: ", departman, sizeof(departman)); // karakterkontrol� ile ba�layan yer den buraya kadar ise karakteter kontrol� alt program� yap�l�yor
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


  



	
	
	
	
	
	
	
	
	
	
	
	
	



