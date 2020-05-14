#include <iostream>
#include <math.h> 

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int nilai, hasil;
		
		cout << "Masukkan Nilai Belanja : ";
		cin >> nilai;
		
		nilai = nilai / 100;
		
		hasil = floor(nilai);
		
		hasil = hasil * 100;
		
		cout << "\nHasil Pembulatan : " << hasil;
		      	
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
