#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		char huruf;
		int jumlah=0;
		
		int pilihan;
		
		cout << "Pilih 1. Jumlah Karakter Diketahui\n";
		cout << "Pilih 2. Jumlah Karakter\n";
		cin >> pilihan;
		switch(pilihan)
		{
			case 1:
				int batas;
				cout << "Masukkan Jumlah Karakter Yang Akan Diinput : ";
				cin >> batas;
				
				for(int i=0;i<batas;i++){
					cout << "Masukkan Huruf : ";
					cin >> huruf;
					jumlah++;
				}
				break;
			case 2:
				cout << "Masukkan Huruf : ";
				cin >> huruf;
				
				while(huruf != '.'){
					cout << "Masukkan Huruf : ";
					cin >> huruf;
					jumlah++;
				}
				break;	
		}
		
		cout << "\nJumlah Karakter Nya Adalah = " << jumlah;
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
