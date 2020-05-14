#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		char asal[256], tujuan[256], nama[256];
		int harga;
		struct {
			int hari, bulan, tahun;
		}lahir, berangkat;
		
		cout << "Masukkan Kota Keberangkatan : ";
		cin >> asal;
		cout << "\nMasukkan Kota Tujuan : ";
		cin >> tujuan;
		cout << "\nMasukkan Nama Penumpang : ";
		cin >> nama;
		cout << "\nMasukkan Tanggal Lahir = ";
		cout << "\n Hari (dd) : "; cin >> lahir.hari;
		cout << " Bulan (mm) : "; cin >> lahir.bulan;
		cout << " Tahun (yy) : "; cin >> lahir.tahun;
		cout << "\nMasukkan Tanggal Keberangkatan = ";
		cout << "\n Hari (dd) : "; cin >> berangkat.hari;
		cout << " Bulan (mm) : "; cin >> berangkat.bulan;
		cout << " Tahun (yy) : "; cin >> berangkat.tahun;
		cout << "\nMasukkan Harga Tiket : ";
		cin >> harga;
		
		if(berangkat.tahun - lahir.tahun < 12) {
			cout << "\nAnda Mendapatkan Diskon 25% Dari " << harga;
			harga = harga - (harga * 0.25);
			cout << "\nMenjadi : " << harga;
		}else{
			cout << "\nAnda Tidak Mendapatkan Diskon";
			cout << "\nTotal Bayar : " << harga;
		}
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
		
	}while(opsi == 'n' || opsi == 'N');
}
