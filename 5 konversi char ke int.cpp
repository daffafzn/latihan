#include <iostream>
#include <stdlib.h> 

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		char num[256];
		
		cout << "Konversi Karakter Digit Ke Integer\n\n";
		cout << "Masukkan Karakter : ";
		cin >> num;
		
		if (atoi(num)) {
			int hasil = atoi(num);
			
			cout << "Anda Menginput Angka : " << hasil;
		}else{
			cout << "Anda Menginput Angka : " << -1;
		}
		      	
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
