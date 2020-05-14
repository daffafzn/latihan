#include <iostream>

using namespace std;
int main()
{
	char opsi;
	
	do
	{
	system("cls");
	
	int tahun, jumlah, kelahiran, imigrasi, kematian, emigrasi;
	
	cout << "Masukkan Tahun Pendataan : ";
	cin >> tahun;
	
	cout << "\nMasukkan Jumlah Kelahiran : ";
	cin >> kelahiran;
	
	cout << "Masukkan Jumlah Imigrasi Ke Negara : ";
	cin >> imigrasi;
	
	cout << "Masukkan Jumlah Kematian : ";
	cin >> kematian;
	
	cout << "Masukkan Jumlah Emigrasi Ke Luar Negeri : ";
	cin >> emigrasi;
	
	jumlah = (kelahiran + imigrasi) - (kematian + emigrasi);
	
	cout << "\nTotal Jumlah Penduduk Di Negara Pada Tahun " << tahun <<  " Adalah = " << jumlah;
	
	cout << "\n\nApakah Anda Ingin Keluar ?  " << endl;
	cout << "Ketik y atau n ";
	cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
