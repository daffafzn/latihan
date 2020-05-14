#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int angka;
		
		cout << "Masukkan Angka = ";
		cin >> angka;
		
		if(angka%2==0 || angka%3==0)
		{
			if(angka == 2 || angka == 3){
				cout << angka << " Adalah Bilangan Prima.";
			}else{
				cout << angka << " Bukan Bilangan Prima.";
			}
		}else{
			cout << angka << " Adalah Bilangan Prima.";
		}
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
