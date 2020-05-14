#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int lama, hari, bulan, tahun, sisa_tahun;
		
		cout << "Masukkan Lama Proyek Dikerjakan = ";
		cin >> lama;
		
		tahun = lama / 365;
		
		sisa_tahun = lama % 365;
		
		bulan = sisa_tahun / 30;
		
		hari = sisa_tahun % 30;
		
		cout << "Lama Pengerjaan nya adalah " << tahun << " Tahun " << bulan << " Bulan " << hari << " Hari ";
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
