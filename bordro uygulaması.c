#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h> 
#define uzunluk 11 
int kimlikkontrol(char tc[]) { // kimlik için alt program oluşturuyorum
 if (strlen(tc) != uzunluk) { // Uzunluk kontrolü için strlen kullanıyorum
 return 0;   
}
for (int i = 0; i < uzunluk; i++) //diziyi for ile kontrol edip rakam girildi mi diye kontrol ediyorum
{ if (!isdigit(tc[i])) {
return 0; //0 olursa geçersiz yani rakam dışı bir şey algılıyor
} 
return 1; // rakam olduğu anlaşılıyor 
}
}		 
int karakterkontrolleri(char str[]){ // karakter kontorlü için yine aynısını alt program  yapıyorum 
for (int i = 0; i < strlen(str); i++){
if (!isalpha(str[i])) 
{
return 0; 
} 
} 
return 1; 
}  
void karakterkontrolu( const char *mesaj, char dizi[], int boyut) { // hatalı  olduğunda tekrar girmesi için sonsuz döngü  ve yine alt program yağıyorum
while (1) {                                                  // boyut ,dizi,mesaj çıktılar girdiler ve bouytlarının kontrol etmek için yapılıyor
printf("%s",mesaj);
scanf("%s", dizi); 
if (karakterkontrolleri(dizi)) {
break; } else {
printf("Hata: Sadece harfler girebilirsiniz.\n"); 
}
}
}
int netmas(){// net maaş için burada kesintiler hesaplanıyor ve yine alt program 
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
FILE *fpr,*fpw; // dosya oluşturup yazıyoruz
int main(){	
char tc[12], isim[50], soyisim[50], departman[50];
while (1) {// buradaki komut hata olduğunda tekrar girilmesini sağlıyor.
printf("Lutfen 11 haneli TC kimlik numaranizi girin: ");
scanf("%11s", tc);// 11 hane sonrasına izin vermez
if (kimlikkontrol(tc)) {
printf("\n");
break;
} else {
printf("Hata: TC kimlik numarasi 11 haneli olmali ve sadece rakamlardan olusmalidir.\n");
}
} 
// while dan başlayıp bu noktaya kadar tc kontrolü yapılıp alt program ile entegre ediyorum
karakterkontrolu("İsim: ", isim, sizeof(isim)); 
karakterkontrolu("Soyisim: ", soyisim, sizeof(soyisim)); 
karakterkontrolu("Departman: ", departman, sizeof(departman)); // karakterkontrolü ile başlayan yer den buraya kadar ise karakteter kontrolü alt programı yapılıyor
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


  



	
	
	
	
	
	
	
	
	
	
	
	
	



