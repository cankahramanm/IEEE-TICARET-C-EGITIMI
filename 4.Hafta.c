#include <stdio.h>
#include <string.h>
/*
float fonk (float fonkparametre)
{
  return 10*fonkparametre;
}

int main()
{
  float fonkparametre;

fonkparametre = 12.75;

  printf("%f\n", fonk (fonkparametre));

  return 0;
}
*/
/*
void fonk (int id)
{
  id = id + 27;
  printf("Fonksiyon icinde id degişken degeri: %d\n", id);
}
int main ()
{
  int id;
  id = 34;

  fonk (id);

  printf("main() fonksiyonu icinde id degisken degeri: %d\n", id);

  return 0;
}
*/
/*
int topla(int a, int b)
 {
     return a+b;
 }

 int carp(int a, int b)
 {
     return a*b;
 }


 int toplamlarinKaresi(int a, int b)
 {
     int ikiSayininToplami = topla(a,b);
     return carp(ikiSayininToplami,ikiSayininToplami );
 }

 int main()
 {
    int birinciSayi, ikinciSayi;
    printf("Lutfen iki sayi giriniz!");
    printf("\nilk sayi:");
    scanf("%d", &birinciSayi);
    printf("ikincisi : ");
    scanf("%d", &ikinciSayi);

    printf("iki sayinin toplami: %d \n", topla(birinciSayi,ikinciSayi));
    printf("iki sayinin carpimi: %d \n", carp(birinciSayi,ikinciSayi));
    printf("iki sayinin toplamlarinin karesi: %d \n", toplamlarinKaresi(birinciSayi,ikinciSayi));
    return 0;
 }
*/
/*
int main()
{
    char ad[20];
    printf("Isminizi giriniz: ");
    scanf("%s", ad);
    printf("Isminiz %s.\n", ad);
    return 0;
}
*/
/*
int main()
{
//'\0'=boş karakter ( NULL )
    char str[] = "DeryayaYakinDunyadanUzak";


    printf("%s\n",str);

    return 0;
}
*/
/*
int main()
{
	char cumle[40];
	printf( "Cumle giriniz: ");
	gets( cumle );
	printf( "Girdiginiz cumle:" );
	puts( cumle );
	return 0;
}
*/
//https://stackoverflow.com/questions/3209909/how-to-printf-unsigned-long-in-c
//Bu tarz yazdırma biçimleri için bakabilirsiniz.
/*
scanf(“%s”, str);

bu kod klavyeden belirttiğin turden belirtttiğin değişkene deger almanı sağlar.


fgets(str, sizeof(str), stdin);

ise değişken,boyut, ve alınacak yer seklinde 3 parametre alır.
Bakmak isteyenler için verimli olacak link burakıyorum.
https://www.bilgigunlugum.net/prog/cprog/c_dosya
*/
/*
int main()
{ char s1[] = "Merhabalar", s2[10];

printf("String %s uzunlugu %lu\n", s1, strlen(s1));
printf("String giriniz: ");
fgets(s2, 10, stdin);
printf("String %suzunlugu %lu\n", s2, strlen(s2));
}
*/
/*
int main()
{
  char s1[] = "IEEE", s2[] = "CAN";
  strcpy(s1, s2);
  printf("s1 = %s s2 = %s\n", s1, s2);
  return 0; }
*/
/*
int main()
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;

    // comparing strings str1 and str2
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    result = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);

    return 0;
}
*/
/*
0	---->if both strings are identical (equal)
negative--->	if the ASCII value of the first unmatched character is less than the second.
positive--->  integer	if the ASCII value of the first unmatched character is greater than the second.

*/
/*
int main()
{
   char str1[100] = "IEEE ", str2[] = "CS";


   strcat(str1, str2);

   puts(str1);
   puts(str2);
//gets() fonksiyonu ile okur ve puts() fonksiyonu ile ekrana yazar.
   return 0;

}
*/
