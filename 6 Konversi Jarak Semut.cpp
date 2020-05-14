#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int x, cm, m, km, sisa_km;
		
		cout << "Masukkan Jarak Dalam Satuan CentiMeter (cm) = ";
		cin >> x;
		
		km = x / 100000;	
			
		sisa_km = x % 100000;
		
		m = sisa_km / 1000;
		
		cm = sisa_km % 1000;
		
		cout << "\nBerarti Semut Menempuh Jarah Sejauh " << km << " Km + " << m << " m + " << cm << " Cm";
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
