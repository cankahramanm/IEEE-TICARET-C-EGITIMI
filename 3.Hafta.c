
#include <stdio.h>
/*
int main() {
  int array[5];
  int i;
  printf("5 tam sayi giriniz=\n");

  for(i = 0; i < 5; ++i)
  {
     scanf("%d", &array[i]);
  }

  printf("Arrayler= ");


  for(i = 0; i < 5; ++i)
  {
     printf("%d\n", array[i]);
  }
  return 0;
}
*/
/*
int main()
{
     int array[10], i, n, toplam = 0, ortalama;

     printf("Kaclik array olusturacaginizi seciniz=");
     scanf("%d", &n);

     for(i=0; i<n; ++i)
     {
          printf("%d.sayiyi giriniz= ",i+1);
          scanf("%d", &array[i]);


          toplam += array[i];
     }

     ortalama = toplam/n;
     printf("Ortalama = %d\n", ortalama);

     return 0;
}
*/
/*
int main ()
{

   char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
   printf("Arrayimiz(Aslinda Str)=%s\n", str );
   return 0;
}
*/
/*
float x[5];
x[0]   = 1.0;    // OK
x[-1]  = 2.0;    // Wrong! Negative index.
x[3/2] = -0.75;  // OK. Sets x[1] = -0.75
x[1.5] = 4.6;    // Wrong! Nonintegerindex.
x[5]   = 10.3;   // Wrong! Sixth element.
*/
/*
int main()
{
  int array[10] = {1, -4, 3, 9, -2};
  for(int i=0; i<10; i++) printf("%d ", array[i]);
  return 0;
}
*/
/*
int main()
{
float a[5] = {1.1, 2.3, -4.8, -7.3, 10.1};
float toplam = 0;
for(int i=0; i<5; i++)
toplam += a[i];
printf("Toplam = %f\n", toplam);
}
*/
/*
int main(){

   int matrix[3][3];

   int i, j;
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("Lutfen degerleri giriniz[%d][%d]:", i, j);
         scanf("%d", &matrix[i][j]);
      }
   }

   printf("Matrix:\n");
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", matrix[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}
*/
/*
void fonk()
{
int x;
x=100;
printf("Fonksiyondaki x degeri: %d\n", x);
}

int main()
{
int x;
x=10;
printf("Ana programdaki x degeri: %d\n", x);
fonk();
printf("Ana programdaki x degeri: %d\n",x);
return 0;
}
*/
/*
void func(int a)
{
  a++;
}
int main()
{ int a = 0;
  func(a);
  printf("%d\n", a);
return 0;
}
*/
/*
int func(int a)
{
  a++;
  return a;
}
int main()
{ int a = 0;
  a = func(a);
  printf("%d\n", a);
return 0;
}
*/
void cati()
{
    printf( "    /\\   \n" );
  	printf( "   /  \\  \n" );
  	printf( "  /    \\ \n" );
  	printf( " /      \\\n" );
  	printf( "----------\n" );
}


void kat()
{
	printf( "|        |\n" );
	printf( "|        |\n" );
	printf( "|        |\n" );
	printf( "----------\n" );
}


int main()
{
	cati( );
	kat( );
	return 0;
}
