#include<stdio.h>
/*
int main()
{
	int girilen_sayi;
	printf("Lutfen bir tam sayi giriniz=");
	scanf("%d",&girilen_sayi);
	if( girilen_sayi > 44 )
  {
		printf("Girilen sayı 44'den buyuktur\n");
  }
	return 0;
}
*/
/*
int main()
{
	int girilen_sayi;
	printf("Lutfen bir tam sayi giriniz=");
	scanf("%d",&girilen_sayi);
	if( girilen_sayi > 44 )
		printf("Girilen sayi 44'den buyuktur\n");
	else
		printf("Girilen sayi 44'den kucuktur\n");
	return 0;
}
*/
/*
int main()
{
	int girilen_yas;
	printf("Lutfen yasinizi giriniz=");
	scanf("%d",&girilen_yas);
	if( girilen_yas >= 34 && girilen_yas <= 44 )
		printf("Girilen yas, 34 ile 44 arasindadir.\n");
	//Girilen yaş 34 ile 44 arasında değilse, aşağıdaki else bloğu çalışır.
	else {
		//Girilen yaş 34'den küçükse
		if( girilen_yas < 34 )
			printf("Girilen yas, 34'den kucuktur.\n");
		//Girilen yaş 44'ten büyükse
		else
			printf("Girilen yas, 44'ten buyuktur.\n");
	}
}
*/
/*
int main()
	{

			float boy,m,total;


			printf("Boyunuz m cinsinde giriniz=");
			scanf("%f",&boy);

			printf("\nAgirliginizi kg giriniz=");
			scanf("%f",&m);
			printf("\n");
			total=m/(boy*boy);
				if(total<=18.5)
				{
					printf("Zayif");
				}
				else if(18.5<total && total<24.9)
				{
					printf("Normal kilolu");
				}
				else if(25<total && total<30)
				{
					printf("Fazla kilolu");
				}
				else if(30<total && total<40)
				{
					printf("Obez");
				}
				else if(40<total)
				{
					printf("ileri derece obez");
				}
				else
				{
					printf("Hatali giris yaptiniz.");
				}


		return 0;
	}
  */
/*
int main()
{
    int sayi1, sayi2;
    printf("Iki tam sayi girin= ");
    scanf("%d %d", &sayi1, &sayi2);

    if (sayi1 >= sayi2)
    {
      if (sayi1 == sayi2)
      {
        printf("Sonuc = %d = %d\n",sayi1,sayi2);
      }
      else
      {
        printf("Sonuc = %d > %d\n", sayi1, sayi2);
      }
    }
    else
    {
        printf("Sonuc = %d < %d\n",sayi1, sayi2);
    }

    return 0;
}
*/
/*
int main() {

     int sayi;
     printf("1 den 5 e kadar bir sayi giriniz : \n");
     scanf("%d", &sayi);

     switch (sayi) {
         case 1 :
             printf("1 sayisini girdiniz.\n");
             break;
         case 2  :
             printf("2 sayisini girdiniz.\n");
             break;
         case 3 :
             printf("3 sayisini girdiniz.\n");
             break;
         case 4 :
             printf("4 sayisini girdiniz.\n");
             break;
         case 5 :
             printf("5 sayisini girdiniz.\n");
             break;
         default:
             printf("1 ile 5 arasinda bir sayi degil.\n");
   }
    return 0;
  }
*/
/*
int main()
{
  int islem,sayi1,sayi2;
  printf("Lutfen yapmak isteginiz islemi seciniz...\n1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\nSeciminiz=");
  scanf("%d",&islem);
  switch (islem) {
    case 1:
    printf("Toplamak istediginiz 1.sayiyi giriniz=");
    scanf("%d",&sayi1);
    printf("Toplamak istediginiz 2.sayiyi giriniz=");
    scanf("%d",&sayi2);
    printf("Bu iki sayinin toplami=%d\n",sayi1+sayi2);
    break;

  case 2:
  printf("Cikarmak istediginiz 1.sayiyi giriniz=");
  scanf("%d",&sayi1);
  printf("Cikarmak istediginiz 2.sayiyi giriniz=");
  scanf("%d",&sayi2);
  printf("Bu iki sayinin farki=%d\n",sayi1-sayi2);
  break;

case 3:
printf("Carpmak istediginiz 1.sayiyi giriniz=");
scanf("%d",&sayi1);
printf("Carpmak istediginiz 2.sayiyi giriniz=");
scanf("%d",&sayi2);
printf("1.sayi ile 2.sayinin carpimi=%d\n",sayi1*sayi2);
break;

case 4:
printf("Bolmek istediginiz 1.sayiyi giriniz=");
scanf("%d",&sayi1);
printf("Bolmek istediginiz 2.sayiyi giriniz=");
scanf("%d",&sayi2);
printf("1.sayinin 2.ci sayiya bolumu=%.2f\n",(float)sayi1/(float)sayi2);
break;
default:
printf("Hatali giris yaptiniz.\n");
}
  return 0;
}
*/
/*
int main()
{
	int i;
	for( i = 0 ; i < 10; i++ ) {
		printf("%d: IEEE\n",i);
	}
	return 0;
}
*/
/*
int main()
{
	int i;
	i = 0;
	for( ; i < 10; ) {
		printf("%d: IEEE\n",i);
		i = i + 1;
	}
	return 0;
}
*/
/*
int main()
{

	int sayi,i;
	int faktoriyel = 1;

	printf("Sayi giriniz=");
	scanf("%d",&sayi);

	//Eğer sayı 0'a büyük eşitse, faktoriyel hesaplanır.
	if( sayi >= 0 )
  {
		//Eğer sayı 0 ise, alttaki döngü hiç çalışmaz.
		for( i = sayi; i > 0; i-- )
    {
			faktoriyel *= i;
		}
		printf("Faktoriyel = %d\n",faktoriyel);
	}
	//Eğer sayı 0'dan küçükse, değer hesaplanamaz.
	else
		printf("Sayi 0'dan kücük olamaz!\n");
	return 0;
}
*/
/*
int main()
{
	int i, j;
	for( i = 0 ; i < 5; i++ )
  {
		for( j = 0; j < i+1; j++ )
    {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
*/
/*
int main()
{
    int a ;
    for (a=0; a<=9; a++)
    {
        if (a==5)
        {
            continue;   //a 5 te devamını çalıştırmadı 6 dan devam etti
        }
        printf("%d. IEEE CS \n", a);
    }
    return 0;
}
*/
/*
int main(){
float i;
float x;
float z=0;
float n=1;
float e=3269017.37;
float total;
for(i=0;i<50;i++){
n=n*z;
  if(n==0){
    n=1;
  }
  x+=pow(15,i)/n;
  z++;
}
printf("True Value=%f\n",e);
printf("Approximation=%f\n",x);
total=(e-x)/e*100;
printf("True Error=True Value-Approximation=%f\n",e-x);
printf("True Error/True Value*100=True Relative Percent Error=%f\n",total);

  return 0;

}
*/
/*
int main()
{

	int i = 0;

	while( i++ < 10 ) {

		printf("%d: IEEE\n",i);
	}
	return 0;
}
*/
/*
int main()
{
	int i = 0, toplam_deger = 0;
	int n;
	printf("Lutfen n degerini giriniz= ");
	scanf("%d",&n);
	while( i <= n )
  {
		toplam_deger += i*i;
		i++;
	}
	printf("Sonuc: %d\n",toplam_deger);
	return 0;
}
*/
/*
int main() {
    int a=0;
    while (a<=9) {

        while (a<=5) {
            printf("%d. IEEE CS \n",a);
            a++;
        }
        printf("%d. Ticaret Universitesi\n",a);
        a++;
    }
}
*/
/*
int main()
{
	int i = 0;
	do {
		//Önce i'nin değeri arttırılıyor
		//sonra ekrana Merhaba Dünya yazdırılıyor.
		printf("%d: IEEE CS\n",++i);
	} while( i < 10 );
	return 0;
}
*/
/*
int main()
{
	int sayi_1, sayi_2;
	char devam_mi;
	do {
		printf("Birinci sayiyi giriniz= ");
		scanf("%d",&sayi_1);
		printf("Ikinci sayiyi giriniz= ");
		scanf("%d",&sayi_2);
		printf("%d + %d = %d\n", sayi_1, sayi_2, sayi_1 + sayi_2);
		printf("Devam etmek ister misiniz? ");
		//C'de tek karakter okuma işlemi biraz sıkıntılı
		//olduğundan, burada da bir do while kullandık.
		do {
			scanf("%c",&devam_mi);
		}while( devam_mi == '\n' );
		printf("\n");
	} while( devam_mi == 'E' || devam_mi == 'e' );

	return 0;
}
*/
/*
int main()
{  //6 ya bölünebilme kuralı

    int a;
    printf("2 ve 3 e tam bolunebilen sayilar 6 sayisina  tam bolunebilir\n");
    for (a=5;a<19;a++){
        if(a%3==0 && a%2==0){
            printf("%d sayisi 6 ya tam bolunebilen sayi\n",a);
        }
        else {
            printf("%d sayisi 6 ya tam bolunemez \n",a);
        }
    }
    return 0;
}
*/
