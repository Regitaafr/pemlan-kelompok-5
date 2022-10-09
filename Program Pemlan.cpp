#include <stdio.h>
#include <stdlib.h>
main ()
{
	int bil, pil,opsi, sisi, luass, kelilings;
	int a;
	float angka;
	int modal, hasil, laba, rugi;
	int alas,tinggi,sisi1,sisi2,sisi3,luasss,kelilingss;
	int st,tt,s1,s2,s3,s4,kelilingt;
	float luast;
	int i, banyak, data[20];
	float average, jumlah;
	int aw, be, n,to;
	float awal,r,rn,sn,s;
	float rk,kk,rl,kl;
	float sisikbs, volume;
	
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
  	scanf("%d" , &pil);
  		
		if (pil == 1) {
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
		
		else if (pil==4){
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
	
		else if (pil == 5) {
		printf("================================\n");
	    	printf("Menghitung luas dan Keliling Segiempat\n");
		printf("================================\n");
	   	printf("Masukan sisi segiempat: ");
	   	scanf("%d", &sisi);
	   	luass=sisi*2;
	   	kelilings=sisi*4;
	   	printf("Luas segiempat= %d \n", luass);
	   	printf("Keliling segiempat= %d", kelilings);
		}
		
		else if (pil == 6) {
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
	
		else if (pil==7){
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
		
        	else if (pil == 8){
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
	
	else if (bil==2){
	printf("\n-----------------------\n");
  	printf("Materi Kelas VII");
  	printf("\n-----------------------\n");
  	printf("1. Deret Aritmatika dan Geometri\n");
  	printf("2. Koordinat Kartesius\n");
  	printf("3. Persamaan Garis Lurus\n");
  	printf("4. Theorma Phytagoras\n");
  	printf("5. Lingkaran\n");
  	printf("6. Bangun Ruang Kubus\n");
	printf("7. Statistika (Mean, Modus, Median)\n");
  	printf("8. Peluang\n");
  	printf("Materi yang dipilih: ");
  	scanf("%d" , &opsi);
  	}
		  
		if (opsi==1){
		float i;
		printf("==============================================\n");
		printf("Program Mencari Deret Aritmatika dan Geometri\n");
		printf("==============================================\n");
		printf("\n");
		
		printf("Mencari Deret Aritmatika\n");
		printf("Rumus => Un = a+(n-1)b \n");
		printf("\n");
		printf("Masukan nilai a (nilai awal): ");
		scanf("%d", &aw);
		to=aw;
		printf("Masukan nilai b (nilai pembeda): ");
		scanf("%d", &be);
		printf("Masukan nilai n (suku ke-n) (n disini sudah dikurangi 1 (n-1)): ");
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			aw=aw+be;	
			to= to+aw; 
		}
		printf("Nilai Un yang dicari adalah = %d\n", aw);
		printf("\n");
		
		printf("Mencari Jumlah Deret Geometri\n");
		printf("Rumus => Deret Turun : Sn = a(1-r^n)/(1-r), dengan r<1 \n");
		printf("Rumus => Deret Naik : Sn = a(r^n-1)/(r-1), dengan r>1 \n");
		printf("\n");
		printf("Masukan nilai a (nilai awal): ");
		scanf("%f", &awal);
		printf("Masukan nilai r (nilai rasio): ");
		scanf("%f", &r);
		printf("Masukan nilai n (suku ke-n): ");
		scanf("%d", &n);
		s=a;
		for(rn=r;i<n;i++)
		{
			rn*=r;
			s=s*r;	
		}
		if (r>1)
			sn=(awal*(rn-1))/(r-1);
		else
			sn=(awal*(1-rn))/(1-r);

		printf("Jumlah deret %d suku =%f\n",n,sn);
		}
	
		else if(opsi==5){
		float phi = 3.14;
		printf("==============================================\n");
		printf("Program Mencari Keliling dan Luas Lingkaran\n");
		printf("==============================================\n");
		printf("\n");
		
		printf("Mencari Keliling Lingkaran\n");
		printf("Masukkan r (jari-jari lingkaran): ");
		scanf("%f",&rk);
		kk = 2*phi*rk;
		printf("Keliling Lingkaran = %.2f\n",kk);
		printf("\n");
		
		printf("Mencari Luas Lingkaran\n");
		printf("Masukkan r (jari-jari lingkaran): ");
		scanf("%f",&rl);
		kl = phi*rl*rl;
		printf("Luas Lingkaran = %.2f\n",kl);
			}
		
		else if(opsi==6){
			printf("========================================\n");
			printf("Program Menghitung Volume Kubus\n");
  			printf("========================================\n");
 		printf("Masukkan nilai dari ketiga sisi kubus : ");
 		scanf("%f", &sisikbs);
  		volume = sisikbs * sisikbs * sisikbs;
  		printf("---------------------------------------\n");
  		printf("Volume kubus adalah %.2f", volume);
  		printf("\n\n\n");
		}
}
