#include<stdio.h>

/*
int can_strlen_for(char dizi[]){
	int i=0;
	int temp=0;
	for (;dizi[i]!='\0';i++)
	temp++;

	return temp;
}

int can_strlen_while(char dizi[])
{
	int i=0;


	while(dizi[i]!='\0'){
		i++;
	}
return i;

}


int main()
{
	 char strlen[20]="cankahraman";

	printf("%s\n",strlen);
	printf("%d",can_strlen_while(strlen)); // ben burada can_strlen_while fonksiyonuna g�nderdim ama istersek can_strlen_for fonksiyonuna da g�nderebilirim. �kiside ayn� sonu�u verir.

	return 0;
}
*/
/*
int can_strncpy(char dizi1[],char dizi2[]){

	int i;
	for(i=0;i<10;i++){
		dizi1[i]=dizi2[i];


	}

	printf("Kopyalanacak Harf sayisi=%d\nKaynak=%s\nKopya=%s\n",10,dizi2,dizi1);
	return 0;

}
int can_strcpy(char dizi1[],char dizi2[]){
	int i=0;

	while(dizi2[i]!='\0'){
		dizi1[i]=dizi2[i];
		i++;

	}
	printf("Kaynak = %s\nKopya= %s\n",dizi2,dizi1);
	return 0;
}


int main(){

	char kaynak[]={"can strcpy ve strncpy odevi"};
	char kopya[30];
	char kopya1[10];
	can_strcpy(kopya,kaynak);
	can_strncpy(kopya1,kaynak);

	return 0;
}
*/
/*
int can_strcmp(char dizi1[],char dizi2[]){
	int i;
	int t=sizeof(dizi1)/sizeof(char)-1;
	int a=0;
	for(i=0;dizi1[i]!='\0';i++){
		if(dizi1[i]==dizi2[i]){
		a++;

		}
		else{
			printf("Diziler esit degildir.\n");
		break;
		}
		if(t==a)
		printf("Esitler.\n");

		}



	return 0;
}
int can_strncmp(char dizi1[],char dizi2[],int n){
		int i;
	int a=0;
	for(i=0;i<n;i++){
		if(dizi1[i]==dizi2[i]){
		a++;

		}
		else{
			printf("Diziler esit degildir.\n");
		break;
		}
		if(n==a)
		printf("esitler\n");

		}

	return 0;
}
int main(){

	char dizi1[]="ticaret";
	char dizi2[]="timsah";

	can_strcmp(dizi1,dizi2);
	can_strncmp(dizi1,dizi2,3);

	return 0;
}
*/
/*
int can_strcat(char dizi1[],char dizi2[]){
	int i;
	int t;
	char dizi3[50];
	for(i=0;dizi1[i]!='\0';i++){

	dizi3[i]=dizi1[i];
	}
	for(t=0;dizi2[t]!='\0';t++){

		dizi3[i]=dizi2[t];
		i++;
	}
	printf("%s\n",dizi3);

	return 0;
}
int can_strncat(char dizi3[],char dizi4[],int n){
	int a;
	int b;
	char dizi5[50];
	for(a=0;dizi3[a]!='\0';a++){

	dizi5[a]=dizi3[a];
	}

	for(b=0;b<n;b++){

		dizi5[a]=dizi4[b];
		a++;

	}
	printf("%s\n",dizi5);

	return 0;
}
int main(){
	int n=2;
	char dizia[]="can "; // bo� bir iki dizi olu�turup kullan�c�dan al�rsak ayn� i�lemi yapabiliriz fonksiyonlar ona g�rede tasarland�.
	char dizib[]="kahraman";
	can_strncat(dizia,dizib,n);
	can_strcat(dizia,dizib);

	return 0;
}
*/
