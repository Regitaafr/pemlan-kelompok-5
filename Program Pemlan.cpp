#include <stdio.h>
#include <stdlib.h>
main ()
{
	int bil, s, luass, kelilings;
	int a;
	int alas,tinggi,sisi1,sisi2,sisi3,luasss,kelilingss;
	float angka;
	int modal, hasil, laba, rugi;
	int st,tt,s1,s2,s3,s4,kelilingt;
	float luast;
	int i, banyak, data[20];
	float average, jumlah;


	printf("\n-----------------------\n");
  	printf("\n 1.Materi Kelas VII\n");
 	printf("\n 2.Materi Kelas VIII\n");
  	printf("\n 3.Materi Kelas IX\n");
  	printf("\n-----------------------\n");
  
  	printf("Masukan pilihan anda: ");
  	scanf("%d" , &bil);
  	
  	if (bil == 1) {
  		printf("\n-----------------------\n");
  		printf("Materi Kelas VII");
  		printf("\n-----------------------\n");
  		printf("1. Bilangan Bulat dan Pecahan\n");
  		printf("2. Persamaan dan Pertidaksamaan Linear satu Variabel\n");
  		printf("3. Perbandingan\n");
  		printf("4. Aritmatika Sosial\n");
  		printf("5. Segiempat\n");
  		printf("6. Segitiga\n");
		printf("7. Trapesium\n");
  		printf("8. Penyajian Data\n");
  		printf("Materi yang dipilih: ");
  		scanf("%d" , &bil);
		if (bil == 1) {
		printf("================================\n");
  		printf("Menentuka bilangan bulat dan pecahan\n");
		printf("================================\n");
  		printf("Masukkan bilangan: ");
  		scanf("%f", &angka);
  		a=angka;
  		if (angka == a) {
  		 printf("Bilangan bulat");
		}
		else {
			printf("Bilangan Pecahan");
			   }
  		 }
  	}
      if(bil==4){
        printf("================================\n");
        printf("Program Menghitung Laba dan Rugi\n");
        printf("================================\n");
        printf("Masukkan Modal : Rp ");
        scanf("%d",&modal);
        printf("Masukkan Pendapatan : Rp ");
        scanf("%d",&hasil);

        if (hasil > modal){
          laba = hasil-modal;
          printf("Mendapatkan laba sebesar = Rp %d", laba);
        }
        else if (hasil < modal){
          rugi = hasil-modal;
          printf("Mendapatkan rugi sebesar = Rp %d", rugi);
        }
        else{
          printf("Tidak ada laba dan rugi yang diperoleh");
        }
      }
	
	else if (bil == 5) {
	printf("================================\n");
       	printf("Menghitung luas segiempat\n");
	printf("================================\n");
   	printf("Masukan sisi segiempat: ");
   	scanf("%d", &s);
   	luass=s*2;
   	kelilings=s*4;
   	printf("Luas segiempat= %d \n", luass);
   	printf("Keliling segiempat= %d", kelilings);
	}
	
	else if (bil == 6) {
	printf("===========================================\n");
		printf("Menghitung Keliling dan Luas Segitiga\n");
	printf("===========================================\n");
	printf("Masukkan Alas :");
	scanf("%d", &alas);
	printf("Masukkan Tinggi :");
	scanf("%d", &tinggi);
	printf("Sisi 1 :");
	scanf("%d", &sisi1);
	printf("Sisi 2 :");
	scanf("%d", &sisi2);
	printf("Sisi 3 :");
	scanf("%d", &sisi3);
	luasss=(alas*tinggi)/2;
	kelilingss=sisi1+sisi2+sisi3;
	printf("Luas Segitiga =%d \n", luasss);
	printf("Keliling Segitiga =%d ", kelilingss);
	}
	
      else if (bil==7){
        printf("==============================\n");
        printf("Menghitung Bangun Datar Trapesium \n");
        printf("==============================\n");
	printf("1. Luas Trapesium\n");
	printf("Masukkan Jumlah Sisi Sejajar : ");
	scanf("%d",&st);
	printf("Masukkan Tinggi : ");
	scanf("%d",&tt);
	luast=0.5*st*tt;
	printf("Luas Trapesium = %f",luast);
	printf(" cm");
	printf("\n");
	    
	printf("\n");
	printf("2. Keliling Trapesium \n");
      	printf("Masukkan panjang Sisi 1 : ");
        scanf("%d",&s1);
        printf("Masukkan panjang Sisi 2 : ");
        scanf("%d",&s2);
        printf("Masukkan panjang Sisi 3 : ");
        scanf("%d",&s3);
        printf("Masukkan panjang Sisi 4 : ");
        scanf("%d",&s4);
        kelilingt=s1+s2+s3+s4;
        printf("Keliling Trapesium = %d",kelilingt);
        printf(" cm");
	}
	
	else if (bil == 8){
		printf("=====================================\n");
		printf("Program C Menghitung Nilai Rata-rata\n");
  		printf("=====================================\n");
  	printf("Masukkan banyak data yang akan dihitung: ");
 	scanf("%d", &banyak);
  	for (i = 0; i < banyak; i++) {
   	printf("Data ke-%d : ", i+1);
   	scanf("%d", &data[i]);
    	jumlah += data[i];
 	 }
  
  	average = jumlah / banyak;
  	printf("------------------------------------\n");
  	printf("Jumlah dari data adalah %.0f\n", jumlah);
  	printf("Rata-rata yang didapatkan yaitu %.2f\n\n\n", average);
	}
	
}
