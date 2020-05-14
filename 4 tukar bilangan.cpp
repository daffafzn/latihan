#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int x, y, z;
		
		cout << "Masukkan Bilangan Bulat x : ";
		cin >> x;
		cout << "Masukkan Bilangan Bulat y : ";
		cin >> y;
		cout << "Masukkan Bilangan Bulat z : ";
		cin >> z;
		
		cout << "\nSebelum Ditukar = " << x << y << z << endl;
		cout << "\nSesudah Ditukar = " << y << z << x << endl;
				
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
		
	}while(opsi == 'n' || opsi == 'N');
}
