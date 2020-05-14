#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int sisa, detik, menit, sisa_hari, jam, hari;
		
		cout << "Masukkan Detik = ";
		cin >> detik;
		
		hari = detik / 86400;	
			
		sisa_hari = detik % 86400;
		
		jam = sisa_hari / 3600;
		
		sisa = detik % 3600;
		
		menit = sisa / 60;
		
		detik = sisa % 60;
		
		cout << hari << " Hari " << jam << " Jam " << menit << " Menit " << detik << " Detik ";
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
