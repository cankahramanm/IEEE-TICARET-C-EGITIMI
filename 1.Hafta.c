#include<stdio.h>
#include<math.h>
#define PISAYISI 3.14
/*
int main()
{
  printf("Merhaba Arkadaslar");
  printf("\nDersimize hepiniz hosgeldiniz.\n");
  printf("-----------------------\n");
  printf("Ben "
		     "CAN "
		     "EEE-3\n-----------------------\n");
  printf("Merhaba Arkadaslar\nDersimize hepiniz hosgeldiniz.\n-----------------------\n");
  printf("\t\tmerhaba\n-----------------------\n");
  printf("Merhaba\n\tarkadaslar\n-----------------------\n");
  printf("Can: \"Naber\" dedi.\n");
  return 0;
}
*/
/*
int main()
{
int x;
x=5;
printf("X sayisi %d ye esittir.\n",x);
return 0;
}
*/
/*
int main()
{
float a,b,toplam,fark,carpim,bolme;
int bolumdenkalan;
a=2;
b=9;
toplam=a+b;
fark=a-b;
carpim=a*b;
bolumdenkalan=(int)b%(int)a;
bolme=b/a;

printf("A ve B sayisinin toplami %.1f'e esittir.\n",toplam);
printf("A ve B sayisinin farki %.1f'e esittir.\n",fark);
printf("A ve B sayisinin carpimi %.1f'e esittir.\n",carpim);
printf("B sayisinin A ya bolunmesi %.1f'e esittir.\n",bolme);
printf("B sayisinin A ya bolunmunden kalan %d'e esittir.\n",bolumdenkalan);

//bunun başka bir yolu
printf("------------------------------\n");
printf("A ve B sayisinin toplami %.1f'e esittir.\n",a+b);
printf("A ve B sayisinin farki %.1f'e esittir.\n",a-b);
printf("A ve B sayisinin carpimi %.1f'e esittir.\n",a*b);
printf("B sayisinin A ya bolunmesi %.1f'e esittir.\n",b/a);
printf("B sayisinin A ya bolunmunden kalan %d'e esittir.\n",(int)b%(int)a);

return 0;
}
*/
/*
int main()
{
	int saat;
	float ucret, toplam; //burda float ve charı kullanalım.
	char harf;
	ucret=50.595;
  saat=12;
  harf='A';
	toplam = saat * ucret;
	printf("%c kodlu calisanin, alacagi ucret: %.2f\n",harf,toplam);
	return 0;
}
*/
/*
int main()
{
int x;
float y;
char n;
printf("Bir tamsayi giriniz=");
scanf("%d",&x);
printf("Bir float cinsinden sayi giriniz=");
scanf("%f",&y);
printf("Bir harf giriniz=");
scanf(" %c",&n);//yüzde c den önce bir boşluk bırakıyoruz.C text kurallarından nedenini öğrenebilirsiniz.
printf("-----------------------------\n");
printf("Girdiginiz tam sayi=%d\nGirdiginiz float cinsinden sayi=%.2f\nGirdiginiz harf=%c\n",x,y,n);
	return 0;
}
*/
/*
int main()
{

printf( "Veri Tipi        Boyut  \n");
printf( "========================\n");
printf( "char           : %d bayt\n", sizeof(char));
printf( "short          : %d bayt\n", sizeof(short));
printf( "int            : %d bayt\n", sizeof(int));
printf( "long           : %d bayt\n", sizeof(long));
printf( "unsigned char  : %d bayt\n", sizeof(unsigned char));
printf( "unsigned short : %d bayt\n", sizeof(unsigned short));
printf( "unsigned int   : %d bayt\n", sizeof(unsigned int));
printf( "unsigned long  : %d bayt\n", sizeof(unsigned long));
printf( "float          : %d bayt\n", sizeof(float));
printf( "double         : %d bayt\n", sizeof(double));
printf( "long double    : %d bayt\n", sizeof(long double));

return 0;
}
*/
/*
int main()
{
  int a=65;
  printf("%d\n",a);
  printf("%c\n",a);
  return 0;
}
*/
/*
int main( )
{
    float alan,cevre;
    int r;
    printf("Yaricapi giriniz=");
    scanf("%d",&r);
    alan = pow(PISAYISI, 2)*r;
    cevre=2*PISAYISI*r;

   printf("Daire alani=%.3f\n",alan);
   printf("Dairenin cevresi=%.3f\n",cevre);
    return 0;
}
*/
