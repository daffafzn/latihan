#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		struct {
			int hari, bulan, tahun;
		} pertama, kedua;
		
		struct {
			int hari, bulan, tahun;
		} selisih;
		
		cout << "Masukkan Tanggal Pertama (dd:mm:yy) \n\n";
		cout << "Hari = ";
		cin >> pertama.hari;
		cout << "Bulan = ";
		cin >> pertama.bulan;
		cout << "Tahun = ";
		cin >> pertama.tahun;
		
		cout << "\n\nMasukkan Tanggal Kedua (dd:mm:yy) \n\n";
		cout << "Hari = ";
		cin >> kedua.hari;
		cout << "Bulan = ";
		cin >> kedua.bulan;
		cout << "Tahun = ";
		cin >> kedua.tahun;
		
		selisih.tahun = pertama.tahun - kedua.tahun;
		selisih.bulan = pertama.bulan - kedua.bulan;
		selisih.hari = pertama.hari - kedua.hari;
		
		if (selisih.tahun < 0) {
			selisih.tahun = selisih.tahun * -1;
		}
		else if (selisih.bulan < 0) {
			selisih.bulan = selisih.bulan * -1;
		}
		else if (selisih.hari < 0) {
			selisih.hari = selisih.hari * -1;
		}
		
		cout << "\nSelisih = " << selisih.tahun << " Tahun " << selisih.bulan << " Bulan " << selisih.hari << " Hari ";
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
		
	}while(opsi == 'n' || opsi == 'N');
}
