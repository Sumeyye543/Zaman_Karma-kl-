
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
char dizi[1000][1000];

FILE *dosya;
int i=0,j=0;
dosya = fopen("dosya.txt", "r");

while(! feof(dosya)){
fscanf (dosya, "%s", dizi[i]);
i++;
}
int a=0;
for (j=0;j<=i;j++){
    if(strstr(dizi[j],"main")!=NULL){
       a=1;
    }

}
if(a==1){
    printf("Dosya vardir\n");
}
else{
    printf("Dosya yoktur\n");
    return 0;
}


fclose(dosya);
int n=0;
int gecici=0;
int enyuksek=0;
int logaritmik=0;
int enyukseklog=0;
int rekursif=0;
int donguler[i];
donguler[-1]=0;
int kacdongu=0;

for (j=0;j<=i;j++){
if(strstr(dizi[j],"for")!=NULL || strstr(dizi[j],"while")!=NULL || strstr(dizi[j],"do")!=NULL)  {
gecici=1;
n=1;
int k=j+1;
logaritmik=0;
if(strstr(dizi[j],"2")!=NULL || strstr(dizi[j],"/2")!=NULL ||strstr(dizi[j],"=2")!=NULL || strstr(dizi[j],"/=2")!=NULL){
logaritmik=logaritmik+1;
}
while(gecici == 1){
        if(strstr(dizi[k],"}")!=NULL){
            gecici=0;
            break;
        }
        if(strstr(dizi[k],"2")!=NULL || strstr(dizi[k],"/2")!=NULL ||strstr(dizi[k],"=2")!=NULL || strstr(dizi[k],"/=2")!=NULL){
        logaritmik=logaritmik+1;
        }
        if(strstr(dizi[k],"for")!=NULL || strstr(dizi[k],"while")!=NULL || strstr(dizi[k],"do")!=NULL) {
        n=n+1;
        }
        if(strstr(dizi[k],"n*n")!=NULL ) {
        n=n+1;
        }

k++;


}


}

if(strstr(dizi[j],"return")!=NULL){
            int gec=1;
            int o=j;
            while(gec == 1){
            if(strstr(dizi[o],"(")!=NULL){
             rekursif=1;
            }
            else if(strstr(dizi[o],";")!=NULL){
                gec=0;
            }

            o++;
        }
}


if(enyuksek<=n-logaritmik){
    enyukseklog=logaritmik;
    enyuksek=n;
}



}
int donguicice=0;
for (j=0;j<=i;j++){
if(strstr(dizi[j],"for")!=NULL  || strstr(dizi[j],"do")!=NULL || (strstr(dizi[j],"while")!=NULL && strstr(dizi[j],";")==NULL))  {
gecici=1;
kacdongu=1;

int k=j+1;

while(gecici == 1){
        if(strstr(dizi[k],"}")!=NULL){
            gecici=0;
            break;
        }
        if(strstr(dizi[k],"for")!=NULL || strstr(dizi[k],"while")!=NULL || strstr(dizi[k],"do")!=NULL) {
        kacdongu=kacdongu+1;
        }
        if(strstr(dizi[k],"n*n")!=NULL ) {
        kacdongu=kacdongu+1;
        }
        k++;
}
donguler[donguicice]=kacdongu;

donguicice++;

kacdongu=0;


}
}

int alan=0;
  for (j=0;j<=i;j++){
    if(strstr(dizi[j],"int")!=NULL && strstr(dizi[j],"printf")==NULL  || strstr(dizi[j],"long")!=NULL || strstr(dizi[j],"float")!=NULL || strstr(dizi[j],"i=1;")!=NULL ){
       alan=alan+4;

    }
    if(strstr(dizi[j],"char")!=NULL || strstr(dizi[j],"bool")!=NULL ){
    	 alan=alan+1;
	}
	if(strstr(dizi[j],"double")!=NULL) {
		alan= alan+8;
	}
    if(strstr(dizi[j],"return")!=NULL) {
		if(strstr(dizi[j+1],"0")==NULL && strstr(dizi[j+1],"1")==NULL && strstr(dizi[j+1],"(")==NULL && strstr(dizi[j+2],"(")==NULL && strstr(dizi[j+3],"(")==NULL  ){
            alan=alan+4;

		}
	}
  }

int zaman=0;
int zamandongusayisi[i];
zamandongusayisi[-1]=0;
int sayac=0;
int zamandonguiciice=0;
int sayac2=0;
int sayac2sayisi[i];
   for (j=0;j<=i;j++){


if(strstr(dizi[j],"int")!=NULL   || strstr(dizi[j],"long")!=NULL || strstr(dizi[j],"float")!=NULL || strstr(dizi[j],"char")!=NULL || strstr(dizi[j],"bool")!=NULL || strstr(dizi[j],"double")!=NULL ||strstr(dizi[j],"if")!=NULL ){
zaman=zaman+1;
}
    if(strstr(dizi[j],"return")!=NULL) {
		if(strstr(dizi[j+1],"0")==NULL && strstr(dizi[j+1],"1")==NULL){
            zaman=zaman+1;

		}
	}


if(strstr(dizi[j],"for")!=NULL || strstr(dizi[j],"do")!=NULL || (strstr(dizi[j],"while")!=NULL && strstr(dizi[j],";")==NULL ))  {

gecici=1;
sayac=1;
sayac2=1;
int k=j+1;

while(gecici == 1){
        if(strstr(dizi[k],"}")!=NULL){
            gecici=0;
            break;
        }
        if(strstr(dizi[k],"for")!=NULL || strstr(dizi[k],"while")!=NULL || strstr(dizi[k],"do")!=NULL) {
        sayac=sayac+1;
        sayac2=sayac2+1;
        }
        if(strstr(dizi[k],"n*n")!=NULL ) {
        sayac=sayac+1;
        }
        if(strstr(dizi[k],"{")!=NULL && strstr(dizi[k+1],"for")==NULL) {
        int l=k;
        int gecici2=1;
        while(gecici2==1){
        if(strstr(dizi[l],"}")!=NULL){
        gecici2=0;
        break;
        }
        if(strstr(dizi[l],";")!=NULL){
                sayac2=sayac2+1;
        }
        l++;
        }


        }

        k++;
}
zamandongusayisi[zamandonguiciice]=sayac;
sayac2sayisi[zamandonguiciice]=sayac2;
zamandonguiciice++;
sayac2=0;
sayac=0;
}








   }



int y;
if(enyuksek==0 && enyukseklog ==0 && rekursif==0){
    printf("Zaman Karmasikligi O(1)");
    printf("\nAlan Karmasikligi  %d",alan);
}
else if(enyuksek>0 && enyukseklog ==0 && rekursif<enyuksek){
    printf("Zaman Karmasikligi O(N^%d)",enyuksek);
    printf("\nAlan Karmasikligi :");
    for(y=0;y<donguicice;y++){
        if(donguler[y]>donguler[y-1]){
        printf("%dN^%d +",4,donguler[y]);
        }
        else if(donguler[y]==1 &&( donguler[y-1] == 1 && donguicice==2 || donguler[y+1] == 1 && donguicice==2) ){
        printf("%dN^%d +",4,donguler[y]);
        }


        if(donguler[y] == 1 && donguler[y-1]==1 && donguicice != 2 ){
        printf("%dN^%d +",4,donguler[y]);
        }



    }

    printf("%d",alan-4);
}

else if(enyukseklog>0 && enyuksek==enyukseklog){
    printf("Zaman Karmasikligi O((log(n))^%d)",enyukseklog);
        printf("\nAlan Karmasikligi :");
    for(y=0;y<donguicice;y++){
        if(donguler[y]>donguler[y-1]){
        printf("%dN^%d +",4,donguler[y]);
        }
        else if(donguler[y]==1 &&( donguler[y-1] == 1 && donguicice==2 || donguler[y+1] == 1 && donguicice==2) ){
        printf("%dN^%d +",4,donguler[y]);
        }

        if(donguler[y] == 1 && donguler[y-1]==1 && donguicice != 2 ){
        printf("%dN^%d +",4,donguler[y]);
        }



    }

    printf("%d",alan-4);
}

else if(enyukseklog>0 && enyuksek != enyukseklog){
    printf("Zaman Karmasikligi O(N^%d log(n)^%d)",enyuksek-enyukseklog,enyukseklog);
           printf("\nAlan Karmasikligi :");
    for(y=0;y<donguicice;y++){
        if(donguler[y]>donguler[y-1]){
        printf("%dN^%d +",4,donguler[y]);
        }
        else if(donguler[y]==1 &&( donguler[y-1] == 1 && donguicice==2 || donguler[y+1] == 1 && donguicice==2) ){
        printf("%dN^%d +",4,donguler[y]);
        }

        if(donguler[y] == 1 && donguler[y-1]==1 && donguicice != 2 ){
        printf("%dN^%d +",4,donguler[y]);
        }


    }

    printf("%d",alan-4);

}
else if(rekursif>enyuksek || rekursif == enyuksek){
    printf("Zaman Karmasikligi O(N)");
        printf("\nAlan Karmasikligi :");
        printf("N + %d",alan-8);


}
printf("\nCalisma Zamani: T(N) =");
 for(y=0;y<zamandonguiciice;y++){

        if( zamandongusayisi[y]>zamandongusayisi[y-1]){
        printf("%dN^%d +",sayac2sayisi[y],zamandongusayisi[y]);
        }
        else if(zamandongusayisi[y]==1 && (zamandongusayisi[y-1] == 1 && zamandonguiciice==2 || zamandongusayisi[y+1] == 1 && zamandonguiciice==2) ){
        printf("%dN^%d +",sayac2sayisi[y],zamandongusayisi[y]);
        }
        if(zamandongusayisi[y] == 1 && zamandongusayisi[y-1]==1 && zamandonguiciice != 2){
        printf("%dN^%d +",sayac2sayisi[y],zamandongusayisi[y]);
        }


 }
 printf("%d",zaman-1);

return 0;



}
