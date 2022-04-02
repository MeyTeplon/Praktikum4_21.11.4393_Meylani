#include <iostream>
using namespace std;

//Deklarasi Variabel umum
string nama, nim,kelas,prodi;
float hasil, ipk;
char predikat;

//membuat fungsi void nilai
void nilai()
{
	//Alokasi Memory Dinamis pada data nilai berbentuk array
	int nilai[20];
	int *pointer;
	pointer=nilai;
	
	int jum;
	string makul[20];
	//Meminta User untuk menginput Berapa banyak nilai
	cout<<"\nJumlah Nilai yang akan diinputkan : ";
	cin>>jum;
	//Menampilkan Inputan Nilai
	for(int i=0; i<jum;i++)
	{
		cin.ignore();
		cout<<"\n+++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\nNama Mata Kuliah ke- "<<i+1<<" : ";
		getline(cin,makul[i]);
		cout<<"Nilai "<<makul[i]<<" \t: ";
		cin>>nilai[i];
		
	}for(int i=0; i<jum;i++){
		hasil += nilai[i];
	}
	ipk=hasil/jum;
		hasil=0;
	//Logika Predikat IPK
		if(ipk>=80){
			predikat='A';
		}else if(ipk<80 && ipk>=65){
			predikat='B';
		}else if(ipk<65 && ipk>=55){
			predikat='C';
		}else if(ipk<55){
			predikat='D';
		}	cout<<"=======================================================\n";
}
//Fungsi Void
void mahasiswa()
{
	cin.ignore();
	//Menginputkan Data-data Mahasiswa
	cout<<"\nMasukan Nama Mahasiswa \t\t: ";
	getline(cin,nama);
	cout<<"Masukan NIM Mahasiswa \t\t: ";
	getline(cin,nim);
	cout<<"Masukan Kelas Mahasiswa \t: ";
	getline(cin,kelas);
	cout<<"\n=======================================================\n";
	
	//Memanggil Fungsi Void nilai ke dalam fungsi void mahasiswa
	nilai();
	
	//Output dari Data Mahasiswa
	cout<<"\n\nData Atas nama : "<<"\nNama \t\t: "<<nama<<"\nNIM \t\t: "<<nim<<"\nKelas \t\t: "<<kelas<<"\nPredikat IPK \t: "<<predikat<<"\nRata-rata Nilai : "<<ipk<<"\n\nBERHASIL DISIMPAN."<<endl;
}
//Fungsi int
int main()
{
	data:
	cout<<"SELAMAT DATANG DI SISTEM INPUT DATA MAHASISWA AMIKOM YK\n";
	cout<<"=======================================================\n";
	
	int jml;
	cout<<"\nBerapa Mahasiswa yang ingin di Inputkan \t: ";
	cin>>jml;
	
	//Perulangan Inputan Data Mahasiswa
	for(int i=0;i<jml;i++){
		//Memanggil Fungsi Void mahasiswa ke dalam Fungsi int
		mahasiswa();
	}
	//Sistem layar bersih agar tidak terlihat penuh
	cin.ignore();
	cout<<"\nTekan Enter untuk kembali menginputkan. ";
	cin.get();
	system("cls");
	goto data;
}
