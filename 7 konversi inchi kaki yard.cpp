#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		float m, inchi, kaki, yard;
		
		cout << "Masukkan Panjang Benda Dalam Satuan Meter (m) = ";
		cin >> m;
		
		inchi = m * 1000 / 25.4;	
		
		kaki = m * 100 / 30.48;
		
		yard = m / 0.9144;
		
		cout << "\nHasil Konversi\n\n";
		cout << "Inchi = " << inchi << " inch\n";
		cout << "Kaki = " << kaki << " feet\n";
		cout << "Yard = " << yard << " yard\n";
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
