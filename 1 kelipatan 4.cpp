#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int bil;
		
		cout << "Masukkan Bilangan Bulat Positif : ";
		cin >> bil;
		
		if (bil % 4 == 0) {
			cout << bil << " Adalah Bilangan Kelipatan 4";
		}else{
			cout << bil << " Bukan Bilangan Kelipatan 4";
		}
				
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
