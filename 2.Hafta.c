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
