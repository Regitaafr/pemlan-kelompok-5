#include <stdio.h>
#include <stdlib.h>
main ()
{
	int bil;
	int modal, hasil, laba, rugi;
	int st,tt;
	float luast;

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
      else if (bil==7){
        printf("==============================\n");
        printf("Menghitung Luas Trapesium \n");
        printf("==============================\n");

        printf("Masukkan Jumlah Sisi Sejajar : ");
        scanf("%d",&st);
        printf("Masukkan Tinggi : ");
        scanf("%d",&tt);
        luast=0.5*st*tt;
        printf("Luas Trapesium = %f",luast);
        printf(" cm");
      }
  	
}
