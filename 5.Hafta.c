#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
int main()
{
	int x, y, z;
	int *int_addr;
	x = 41;
	y = 12;
	// int_addr x degiskenini
	// isaret ediyor.
	int_addr = &x;
	// int_addr'in isaret ettigi
	// degiskenin sakladigi deger
	// aliniyor. (yani x'in degeri)
	z = *int_addr;
	printf( "z: %d\n", z );
	// int_addr, artik y degiskenini
	// isaret ediyor.
	int_addr = &y;
	// int_addr'in isaret ettigi
	// degiskenin sakladigi deger
	// aliniyor. (yani y'nin degeri)
	z = *int_addr;
	printf( "z: %d\n" ,z );

	return 0;
}
*/
/*
int main()
{
  int *ip;
  int idizi[5] = { 36, 64, 127, 152, 183 };

  ip = &idizi[0];

  printf("%d %d %p\n", idizi[0], *ip, ip);

  *ip++;     /* 1 */ /* ip++ ile aynı işlemi gerçekleştirir!

  printf("%d %d %p\n", idizi[0], *ip, ip);

  (*ip)++;   /* 2 */ /* idizi[1]++ ile aynı işlemi gerçekleştirir!

  printf("%d %d %p\n", idizi[0], *ip, ip);

  return 0;
}
*/
/*
int bolme_islemi( int bolunen, int bolen, int *kalan )
{
	*kalan = bolunen % bolen;
	return bolunen / bolen;
}
int main()
{
	int bolunen, bolen;
	int bolum, kalan;
	bolunen = 13;
	bolen = 4;
	bolum = bolme_islemi( bolunen, bolen, &kalan );
	printf( "Bolum: %d Kalan: %d\n", bolum, kalan );

	return 0;
}
*/
/*
struct yap {
  char cdizi1[15];
  char cdizi2[15];
  char cdizi3[15];
  char cdizi4[15];
  int id;
} yd;

int main()
{
  printf("Adi: ");
  gets(yd.cdizi1);
  printf("Soyadi: ");
  gets(yd.cdizi2);
  printf("Memleketi: ");
  gets(yd.cdizi3);
  printf("Tahsili: ");
  gets(yd.cdizi4);
  printf("Yasi: ");
  scanf("%d", &yd.id);
  printf("%s %s %s %s %d", yd.cdizi1, yd.cdizi2, yd.cdizi3, yd.cdizi4, yd.id);

  return 0;
}
*/
/*
struct adres{
	char mah[30];
	char cadde[30];
	char sok[30];
	int no;
};

struct student {
	char isim[10];
	char soyisim[15];
	int no,yas,sinif;
	struct adres adres1;
}student1;
int main(){
	struct student stu;
	strcpy(stu.isim,"can");
	strcpy(stu.soyisim,"kahraman");
	stu.no=200008645;
	stu.yas=22;
	stu.sinif=2;
	strcpy (stu.adres1.mah,"girne");
	strcpy (stu.adres1.cadde,"girne");
	strcpy (stu.adres1.sok,"yok");
	stu.adres1.no=85;
	printf("%s %s %d %d %d %s %s %s %d",stu.isim,stu.soyisim,stu.no,stu.yas,stu.sinif,stu.adres1.mah,stu.adres1.cadde,stu.adres1.sok,stu.adres1.no);
	return 0;
}
*/
/*
typedef struct person {

  int age;
  char firstname[6];
  char lastname[6];
  int student_number;
  char department[4];
}person_t;

int main(){

person_t myperson;
myperson.age = 19;
strcpy(myperson.firstname, "Sufuk");
strcpy(myperson.lastname, "Guler");
myperson.student_number = 200011674;
strcpy(myperson.department, "EEE");

printf("mypersons's:\nFirst Name is %s\nLast Name is %s\nStudent Number is %d\nDepartmen is %s", myperson.firstname,
myperson.lastname, myperson.student_number, myperson.department);

  return 0;
}
*/
