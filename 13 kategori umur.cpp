#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int umur;
		
		cout << "Masukkan Umur : ";
		cin >> umur;
		
		if (umur > 0 && umur <= 5) {
			cout << "Umur : " << umur << " Termasuk Kategori Balita.";
		}else if (umur > 5 && umur <= 12) {
			cout << "Umur : " << umur << " Termasuk Kategori Anak-anak.";
		}else if (umur > 12 && umur <= 20) {
			cout << "Umur : " << umur << " Termasuk Kategori Remaja.";
		}else if (umur > 20 && umur <= 60) {
			cout << "Umur : " << umur << " Termasuk Kategori Dewasa.";
		}else if (umur > 60) {
			cout << "Umur : " << umur << " Termasuk Kategori Tua.";
		}
				
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
		
	}while(opsi == 'n' || opsi == 'N');
}
