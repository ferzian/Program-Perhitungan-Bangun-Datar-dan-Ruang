#include <iostream>		//untuk cout, cin, endl;
#include <math.h>		//untuk sqrt (akar), pow (kuadrat) 
#include <windows.h>	//untuk system (pemberian warna dan pembersih layar)

using namespace std;

	//tipe data
	int pilih, pilihan, kembali, i;
	float  v, L, K, r, s, a, t, sisimiring, sisibawah, sisiatas, sisi1, sisi2, panjang, lebar, sisia, sisib, sisic, d1, d2, L_permukaan, L_satusisi, Diagonalruang, L_alas, L_selubung, L_segitiga, K_alas;
	double phi= 3.14;
	char lagi, berhenti;

/*Void (function) adalah sebuah syntax yang dapat di panggil kapan saja*/
void identitas(){
    system("color FC"); //untuk memberikan warna pada tulisan di output
	system("cls");		//untuk membersihkan layar

    cout<<"\t\t   ====================================================================="<<endl;
    cout<<"\t\t   |                       TUGAS AKHIR ALGORITMA                       |"<<endl;
    cout<<"\t\t   |             PROGRAM PERHITUNGAN BANGUN DATAR DAN RUANG            |"<<endl;
    cout<<"\t\t   ====================================================================="<<endl;
    cout<<endl;
}
void judul_datar(){
	system("cls");
	cout<<"\t\t   ====================================================================="<<endl;
    cout<<"\t\t   |                       TUGAS AKHIR ALGORITMA                       |"<<endl;
    cout<<"\t\t   |             PROGRAM PERHITUNGAN BANGUN DATAR DAN RUANG            |"<<endl;
    cout<<"\t\t   ====================================================================="<<endl;
    cout<<endl;

	cout<<"----------------------------------------------"<<endl;
	cout<<"|                BANGUN DATAR                |"<<endl;
	cout<<"----------------------------------------------\n\n";
}
void judul_ruang(){
	system("cls");
	cout<<"\t\t   ====================================================================="<<endl;
    cout<<"\t\t   |                       TUGAS AKHIR ALGORITMA                       |"<<endl;
    cout<<"\t\t   |             PROGRAM PERHITUNGAN BANGUN DATAR DAN RUANG            |"<<endl;
    cout<<"\t\t   ====================================================================="<<endl;
    cout<<endl;

	cout<<"----------------------------------------------"<<endl;
	cout<<"|                BANGUN RUANG                |"<<endl;
	cout<<"----------------------------------------------\n\n";
}
float hitung_persegi(float s){
	K = 4 * s;
	L = s * s;
	return L, K;
}
void persegi(){
	system("cls");
	identitas();
	judul_datar();
	
	cout<<"\n------- PERSEGI -------\n\n";
	/* Rumus - Rumus Persegi
		Keliling = 4 x sisi
		Luas	 = sisi x sisi
				
	*/			
	
	cout<<"Keliling Persegi = 4 x sisi"<<endl;
	cout<<"Luas Persegi     = sisi x sisi"<<endl;
	cout<<endl;
	
	cout<<"Masukkan sisi \t: ";
	cin>>s;
	cout<<endl;

	hitung_persegi(s);
				
	cout<<"Keliling Persegi = "<<K<<endl;
	cout<<"Luas Persegi     = "<<L<<endl;
	
}
float hitungpersegi_panjang(float panjang, float lebar){
	K = 2 * (panjang + lebar);
	L = panjang * lebar;
	return K, L;
}
void persegi_panjang(){
	system("cls");
	identitas();
	judul_datar();
	
	cout<<"\n------- PERSEGI PANJANG -------\n\n";
	/* Rumus - Rumus Persegi Panjang
		Keliling = 2 x (p + l)
		Luas 	 = p x l
				
	*/
				
	cout<<"Keliling Persegi Panjang = 2 x (p + l)"<<endl;
	cout<<"Luas Persegi Panjang     = p x l"<<endl;
	cout<<endl;

	cout<<"Masukkan panjang : ";
	cin>>panjang;
	cout<<"Masukkan lebar   : ";
	cin>>lebar;
	cout<<endl;
				
	hitungpersegi_panjang(panjang, lebar);
				
	cout<<"Keliling Persegi Panjang = "<<K<<endl;
	cout<<"Luas Persegi Panjang     = "<<L<<endl;	
}
float hitungjajar_genjang(float a, float t){
	K = 2 * (a + t);
	L = a * t;
	return K, L;
}
void jajar_genjang(){
	system("cls");
	identitas();
	judul_datar();
	
	cout<<"\n------- JAJAR GENJANG -------\n\n";
	/* Rumus - Rumus Jajar Genjang
		Keliling = 2 x (alas + tinggi)
		Luas	 = alas x tinggi
	*/
				
	cout<<"Keliling Jajar Genjang = 2 x (alas + tinggi)"<<endl;
	cout<<"Luas Jajar Genjang     = alas x tinggi"<<endl;
	cout<<endl;

	cout<<"Masukkan alas    : ";
	cin>>a;
	cout<<"Masukkan tinggi  : ";
	cin>>t;
	cout<<endl;
				
	hitungjajar_genjang(a, t);
				
	cout<<"Keliling Jajar Genjang = "<<K<<endl;
	cout<<"Luas Jajar Genjang     = "<<L<<endl;	
}
float hitung_trapesium(float sisibawah, float sisiatas, float sisimiring, float t){
	K = sisibawah + sisiatas + sisimiring + t;
	L = (sisibawah + sisiatas) * t / 2;
	return K, L;
}
void trapesium(){
	system("cls");
	identitas();
	judul_datar();
	
	cout<<"\n------- TRAPESIUM -------\n\n";
	/* Rumus - Rumus Trapesium 
		Keliling = sisi bawah + sisi atas + sisi miring + t
		Luas 	 = (sisi bawah + sisi atas) * tinggi / 2
	*/
				
	cout<<"Keliling Trapiseum = sisi bawah + sisi atas + sisi miring + t"<<endl;
	cout<<"Luas Trapesium     = (sisi bawah + sisi atas) * tinggi / 2"<<endl;
	cout<<endl;
	
	cout<<"Masukkan Sisi Bawah \t: ";
	cin>>sisibawah;
	cout<<"Masukkan Sisi Atas \t: ";
	cin>>sisiatas;
	cout<<"Masukkan Sisi Miring \t: ";
	cin>>sisimiring;
	cout<<"Masukkan Tinggi \t: ";
	cin>>t;
	cout<<endl;
				
	hitung_trapesium(sisibawah, sisiatas, sisimiring, t);
				
	cout<<"Keliling Trapesium = "<<K<<endl;
	cout<<"Luas Trapesium     = "<<L<<endl;	
}
float hitungbelah_ketupat(float d1, float d2, float s){
	K = 4 * s;
	L = (d1 * d2) / 2;
	return K, L;
}
void belah_ketupat(){
	system("cls");
	identitas();
	judul_datar();
	
	cout<<"\n------ BELAH KETUPAT ------\n\n";
	/* Rumus - Rumus Belah Ketupat
		Keliling = 4 x sisi
		Luas 	 = d1 x d2 / 2
	*/
				
	cout<<"Keliling Belah Ketupat = 4 x sisi"<<endl;
	cout<<"Luas Belah Ketupat     = d1 x d2 / 2"<<endl;
	cout<<endl;
	
	cout<<"Masukkan	sisi	: ";
	cin>>s;
	cout<<"Masukkan Diagonal 1 \t: ";
	cin>>d1;
	cout<<"Masukkan Diagonal 2 \t: ";
	cin>>d2;
	cout<<endl;
				
	hitungbelah_ketupat(d1, d2, s);
				
	cout<<"Keliling Belah Ketupat = "<<K<<endl;
	cout<<"Luas Belah Ketupat     = "<<L<<endl;	
}
float hitung_layang(float sisi1, float sisi2, float d1, float d2){
	K = 2 * (sisi1 + sisi2);
	L = (d1 * d2) / 2;
	return K, L;
}
void layang_layang(){
	system("cls");
	identitas();
	judul_datar();
	
	cout<<"\n------- LAYANG - LAYANG -------\n\n";
	/* Rumus - Rumus Layang - Layang
		Keliling = 2 x (sisi1 + sisi2)
		Luas 	 = (d1 x d2) / 2
	*/
				
	cout<<"Keliling Layang - Layang = 2 x (sisi1 + sisi2)"<<endl;
	cout<<"Luas Layang - Layang     = (d1 x d2) / 2"<<endl;
	cout<<endl;
	
	cout<<"Masukkan Sisi 1 \t: ";
	cin>>sisi1;
	cout<<"Masukkan Sisi 2 \t: ";
	cin>>sisi2;
	cout<<"Masukkan Diagonal 1 \t: ";
	cin>>d1;
	cout<<"Masukkan Diagonal 2 \t: ";
	cin>>d2;
	cout<<endl;
				
	hitung_layang(sisi1, sisi2, d1, d2);
				
	cout<<"Keliling Layang - Layang = "<<K<<endl;
	cout<<"Luas Layang - Layang     = "<<L<<endl;	
}
float hitung_segitiga(float sisia, float sisib, float sisic, float a, float t){
	K = sisia + sisib + sisic;
	L = a * t / 2;
	return K, L;
}
void segitiga(){
	system("cls");
	identitas();
	judul_datar();
	
	cout<<"\n-------- SEGITIGA --------\n\n";
	/* Rumus - Rumus Segitiga
		Keliling = sisi a + sisi b + sisi c
		Luas 	 = alas x tinggi / 2
	*/
				
	cout<<"Keliling Segitiga = sisi a + sisi b + sisi c"<<endl;
	cout<<"Luas Segitiga     = alas x tinggi / 2"<<endl;
	cout<<endl;
	
	cout<<"Masukkan Sisi a \t: ";
	cin>>sisia;
	cout<<"Masukkan Sisi b \t: ";
	cin>>sisib;
	cout<<"Masukkan Sisi c \t: ";
	cin>>sisic;
	cout<<"Masukkan Alas		: ";
	cin>>a;
	cout<<"Masukkan Tinggi \t: ";
	cin>>t;
	cout<<endl;
				
	hitung_segitiga(sisia, sisib, sisic, a, t);
				
	cout<<"Keliling Segitiga = "<<K<<endl;
	cout<<"Luas Segitiga     = "<<L<<endl;
}
float hitung_lingkaran(float r){
	K = 2 * phi * r;
	L = phi * r * r;
	return K, L;
}
void lingkaran(){
	system("cls");
	identitas();
	judul_datar();
	
	cout<<"\n-------- LINGKARAN --------\n\n";
	/* Rumus - Rumus Lingkaran 
		Keliling = 2 x phi x r
		Luas 	 = phi x r^2
	*/
				
	cout<<"Keliling Lingkaran = 2 x phi x r"<<endl;
	cout<<"Luas Lingkaran     = phi x r^2"<<endl;
	cout<<endl;
	
	cout<<"Masukkan Jari - Jari \t: ";
	cin>>r;
	cout<<endl;
				
	hitung_lingkaran(r);
				
	cout<<"Keliling Lingkaran = "<<K<<endl;
	cout<<"Luas Lingkaran     = "<<L<<endl;
}
float hitung_kubus(float s){
	v = s * s * s;
	L_permukaan = 6 * (s * s);
	K = 12 * s;
	L_satusisi = s * s;
	return v, L_permukaan, K, L_satusisi;
}
void kubus(){
	system("cls");
	identitas();
	judul_ruang();
	
	cout<<"\n-------- KUBUS --------\n\n";
	/* Rumus - Rumus Kubus
		Volume 		   		 = s x s x s
		Luas Permukaan 		 = 6 x (s x s)
		Keliling	   		 = 12 x s
		Luas salah satu sisi = s x s
	*/
	
	cout<<"Volume Kubus               = s x s x s"<<endl;
	cout<<"Luas Permukaan Kubus       = 6 x (s x s)"<<endl;
	cout<<"Keliling Kubus             = 12 x s"<<endl;
	cout<<"Luas salah satu sisi Kubus = s x s"<<endl;
	cout<<endl;
	
	cout<<"Masukkan Sisi		: ";
	cin>>s;
	cout<<endl;
			
	hitung_kubus(s);
			
	cout<<"Volume Kubus               = "<<v<<endl;
	cout<<"Luas Permukaan Kubus       = "<<L_permukaan<<endl;
	cout<<"Keliling Kubus             = "<<K<<endl;
	cout<<"Luas Salah Satu Sisi Kubus = "<<L_satusisi<<endl;		
}
float hitung_balok(float panjang, float lebar, float t){
	v = panjang * lebar * t;
	L_permukaan = 2 * ((panjang * lebar) + (lebar * t) + (panjang * t));
	K = 4 * (panjang + lebar + t);
	Diagonalruang = sqrt(pow(panjang, 2) + pow(lebar, 2) + pow(t, 2));
	return v, L_permukaan, K, Diagonalruang;
}
void balok(){
	system("cls");
	identitas();
	judul_ruang();
	
	cout<<"\n------- BALOK -------\n\n";
	/* Rumus - Rumus Balok
		Volume		   = p x l x t
		Luas Permukaan = 2 x (pl + lt + pt)
		Keliling 	   = 4 x (p + l + t)
		Diagonal Ruang = sqrt((pow(p, 2)) + (pow(l. 2)) + (pow(t, 2))
	*/
			
	cout<<"Volume Balok         = p x l x t"<<endl;
	cout<<"Luas Permukaan Balok = 2 x (pl + lt + pt)"<<endl;
	cout<<"Keliling             = 4 x (p + l + t)"<<endl;
	cout<<"Diagonal Ruang Balok = sqrt((pow(p, 2)) + (pow(l. 2)) + (pow(t, 2))"<<endl;
	cout<<endl;

	cout<<"Masukkan Panjang \t: ";
	cin>>panjang;
	cout<<"Masukkan Lebar		: ";
	cin>>lebar;
	cout<<"Masukkan Tinggi \t: ";
	cin>>t;
	cout<<endl;
			
	hitung_balok(panjang, lebar, t);
			
	cout<<"Volume Balok         = "<<v<<endl;
	cout<<"Luas Permukaan Balok = "<<L_permukaan<<endl;	
	cout<<"Keliling Balok       = "<<K<<endl;
	cout<<"Diagonal Ruang Balok = "<<Diagonalruang<<endl;
}
float hitungprisma_segitiga(float a, float t, float sisimiring){
	v = a * t * t / 2;
	L_permukaan = (a + t + sisimiring) * t + (2 * a * t / 2);
	return v, L_permukaan;
}
void prisma_segitiga(){
	system("cls");
	identitas();
	judul_ruang();
	
	cout<<"\n------ PRISMA SEGITIGA ------\n\n";
	/* Rumus - Rumus Prisma Segitiga
		Volume = luas alas x tinggi
		Luas Permukaan = Keliling alas x tinggi + 2 x luas alas segitiga
	*/
			
	cout<<"Volume Prisma Segitiga         = luas alas x tinggi"<<endl;
	cout<<"Luas Permukaan Prisma Segitiga = Keliling alas x tinggi + 2 x luas alas segitiga"<<endl;
	cout<<endl;
	
	cout<<"Masukkan Alas			: ";
	cin>>a;
	cout<<"Masukkan Tinggi			: ";
	cin>>t;
	cout<<"Masukkan Sisi Miring Alas	: ";
	cin>>sisimiring;
	cout<<endl;
			
	hitungprisma_segitiga(a, t, sisimiring);
			
	cout<<"Volume Prisma Segitiga         = "<<v<<endl;
	cout<<"Luas Permukaan Prisma Segitiga = "<<L_permukaan<<endl;
}
float hitunglimas_segiempat(float a, float panjang, float t){
	L_alas = panjang * panjang;
	v = L_alas * t / 3;
	L_segitiga = a * t / 2;
	L_selubung = 4 * L_segitiga;
	L_permukaan = L_alas + L_selubung;
	return v, L_permukaan;
}
void limas_segiempat(){
	system("cls");
	identitas();
	judul_ruang();
	
	cout<<"\n------ LIMAS SEGIEMPAT ------\n\n";
	/* Rumus - Rumus Limas Segiempat
		Volume = 1/3 x luas alas x t
		Luas Permukaan = luas alas + luas selubung limas
	*/
			
	cout<<"Volume Limas Segitiga         = 1/3 x luas alas x t"<<endl;
	cout<<"Luas Permukaan Limas Segitiga = luas alas + luas selubung limas"<<endl;
	cout<<endl;
	
	cout<<"Masukkan Panjang Alas \t: ";
	cin>>panjang;
	cout<<"Masukkan Alas Segitiga \t: ";
	cin>>a;
	cout<<"Masukkan Tinggi \t: ";
	cin>>t;
	cout<<endl;
			
	hitunglimas_segiempat(panjang, a, t);
			
	cout<<"Volume Limas Segiempat         = "<<v<<endl;
	cout<<"Luas Permukaan Limas Segiempat = "<<L_permukaan<<endl;
}
float hitunglimas_segitiga(float sisia, float sisib, float t){
	v = (sisia * sisib / 2) * t / 3;
	L_alas = sisia * sisib / 2;
	L_selubung = 3 * L_segitiga;
	L_permukaan = L_alas + L_selubung;
	return v;
}
void limas_segitiga(){
	system("cls");
	identitas();
	judul_ruang();
	
	cout<<"\n------ LIMAS SEGITIGA ------\n\n";
	/* Rumus - Rumus Limas Segitiga 
		Volume 		   = 1/3 x luas alas x tinggi
		Luas Permukaan = Luas alas + Luas selubung limas
	*/
	
	cout<<"Volume Limas Segitiga         = 1/3 x luas alas x tinggi"<<endl;
	cout<<"Luas Permukaan Limas Segitiga = Luas alas + Luas selubung limas"<<endl;
	cout<<endl;
			
	cout<<"Masukkan Sisi a \t: ";
	cin>>sisia;
	cout<<"Masukkan Sisi b \t: ";
	cin>>sisib;
	cout<<"Masukkan Tinggi \t: ";
	cin>>t;
	cout<<endl;
			
	hitunglimas_segitiga(sisia, sisib, t);
			
	cout<<"Volume Limas Segitiga         = "<<v<<endl;
	cout<<"Luas Permukaan Limas Segitiga = "<<L_permukaan<<endl;
}
float hitung_tabung(float r, float t){
	L_alas = phi * r * r;
	K_alas = 2 * phi * r;
	v = phi * r * r * t;
	L_permukaan = (2 * L_alas) + (K_alas * t);
	return v, L_permukaan;
}
void tabung(){
	system("cls");
	identitas();
	judul_ruang();
	
	cout<<"\n-------- TABUNG --------\n\n";
	/* Rumus - Rumus Tabung
		Volume 		   = phi x r^2 x t
		Luas Permukaan = (2 x luas alas) + (keliling alas x tinggi)	
	*/
			
	cout<<"Volume Tabung         = phi x r^2 x t"<<endl;
	cout<<"Luas Permukaan Tabung = (2 x luas alas) + (keliling alas x tinggi)"<<endl;
	cout<<endl;

	cout<<"Masukkan Jari - Jari \t: ";
	cin>>r;
	cout<<"Masukkan Tinggi \t: ";
	cin>>t;
	cout<<endl;
			
	hitung_tabung(r, t);
			
	cout<<"Volume Tabung         = "<<v<<endl;
	cout<<"Luas Permukaan Tabung = "<<L_permukaan<<endl;
}
float hitung_kerucut(float r, float t){
	s = sqrt(pow(r, 2) + pow(t, 2));
	v = phi * pow(r, 2) * t / 3;
	L_permukaan = (phi * pow(r, 2)) + (phi * r * s);
	return v, L_permukaan;
}
void kerucut(){
	system("cls");
	identitas();
	judul_ruang();
	
	cout<<"\n-------- KERUCUT --------\n\n";
	/* Rumus - Rumus Kerucut
		Volume = 1/3 x phi x r^2 x t
		Luas Permukaan = (phi x r^2) + (phi x r x s)
	*/
			
	cout<<"Volume Kerucut         = 1/3 x phi x r^2 x t"<<endl;
	cout<<"Luas Permukaan Kerucut = (phi x r^2) + (phi x r x s)"<<endl;
	cout<<endl;

	cout<<"Masukkan Jari - Jari \t: ";
	cin>>r;
	cout<<"Masukkan Tinggi \t: ";
	cin>>t;
	cout<<endl;
			
	hitung_kerucut(r, t);
			
	cout<<"Volume Kerucut         = "<<v<<endl;
	cout<<"Luas Permukaan Kerucut = "<<L_permukaan<<endl;
}
float hitung_bola(float r){
	v = 1.3333 * phi * pow(r, 3);
	L_permukaan = 4 * phi * pow(r, 2);
	return v, L_permukaan;
}
void bola(){
	system("cls");
	identitas();
	judul_ruang();
	
	cout<<"\n-------- BOLA --------\n\n";
	/* Rumus - Rumus Bola 
		Volume = 4/3 x phi x r^3
		Luas Permukaan Bola = 4 x phi x r^2
	*/
			
    cout<<"Volume Bola         = 4/3 x phi x r^3"<<endl;
    cout<<"Luas Permukaan Bola = 4 x phi x r^2"<<endl;
	cout<<endl;

	cout<<"Masukkan Jari - Jari \t: ";
	cin>>r;
	cout<<endl;

	hitung_bola(r);
			
	cout<<"Volume Bola         = "<<v<<endl;
	cout<<"Luas Permukaan Bola = "<<L_permukaan<<endl;	
}

void bangun_ruang(){
	judul_ruang();
	
	cout<<"Daftar Bangun Ruang \t: "<<endl;
	cout<<"1. Kubus"<<endl;
	cout<<"2. Balok"<<endl;
	cout<<"3. Prisma Segitiga"<<endl;
	cout<<"4. Limas Segiempat"<<endl;
	cout<<"5. Limas Segitiga"<<endl;
	cout<<"6. Tabung"<<endl;
	cout<<"7. Kerucut"<<endl;
	cout<<"8. Bola"<<endl;
		
	cout<<"\nPilih Bangun Ruang \t: ";
	cin>>pilihan;
	
	switch(pilihan){
		case 1:
			kubus();
		break;
		case 2:
			balok();
		break;
		case 3:
			prisma_segitiga();
		break;
		case 4:
			limas_segiempat();
		break;
		case 5:
			limas_segitiga();
		break;
		case 6:
			tabung();
		break;
		case 7:
			kerucut();
		break;
		case 8:
			bola();
		break;
		default:
			cout<<"Pilihan yang Anda masukkan tidak tersedia"<<endl;
	
	}

}
void bangun_datar(){
	system("cls");
	identitas();
	judul_datar();
	
	cout<<"Daftar Bangun Datar \t: "<<endl;
	cout<<"1. Persegi"<<endl;
	cout<<"2. Persegi Panjang"<<endl;
	cout<<"3. Jajar Genjang"<<endl;
	cout<<"4. Trapesium"<<endl;
	cout<<"5. Belah Ketupat"<<endl;
	cout<<"6. Layang - Layang"<<endl;
	cout<<"7. Segitiga"<<endl;
	cout<<"8. Lingkaran"<<endl;
		
	cout<<"\nPilih Bangun Datar \t: ";
	cin>>pilih;
	
	switch (pilih){
		case 1:
			persegi();
		break;
		case 2:
			persegi_panjang();
		break;
		case 3:
			jajar_genjang();
		break;
		case 4:
			trapesium();
		break;
		case 5:
			belah_ketupat();
		break;
		case 6:
			layang_layang();
		break;
		case 7:
			segitiga();
		break;
		case 8:
			lingkaran();
		break;
		default:
			cout<<"Pilihan yang Anda masukkan tidak tersedia"<<endl;
	}
	
}


void menu(){
	identitas();
	cout<<endl;
	cout<<"======================================"<<endl;
	cout<<"| Pilih Program Yang Ingin Digunakan |"<<endl;
	cout<<"======================================"<<endl;
	cout<<"| Pilihan Program : |"<<endl;
	cout<<"| 1. Bangun Datar   |"<<endl;
	cout<<"| 2. Bangun Ruang   |"<<endl;
	cout<<"====================="<<endl;
	cout<<"\nPilih \t: ";
	cin>>pilih;
	
	switch(pilih){
		case 1:
			bangun_datar();
		break;
		case 2:
			bangun_ruang();
		break;
		default:
			cout<<"Pilihan Anda Tidak Tersedia"<<endl;
	}
	
	cout<<"\n\nIngin kembali ke awal [Y/T] ? ";
	cin>>lagi;
	
	while (lagi == 'y' || lagi == 'Y')
	menu();
	system("cls");

	cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t==============================================="<<endl;
    cout<<"\t\t\t| TERIMA KASIH TELAH MENGGUNAKAN PROGRAM KAMI |"<<endl;
    cout<<"\t\t\t==============================================="<<endl;
    cout<<endl;
}


int main(){
	menu();
}