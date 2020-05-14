#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int a, b, c, x;
	
		cout << "Pengurutan 3 Bilangan Dari Yang Terkecil\n\n";	
		cout << "Masukkan Bilangan Pertama = ";
		cin >> a;
		
		cout << "Masukkan Bilangan Kedua = ";
		cin >> b;
		
		cout << "Masukkan Bilangan Ketiga = ";
		cin >> c;
		
		if(a < b && a < c) {
			if(b < c) {
				cout << a << "  " << b << "  " << c << endl;
			}else{
				cout << a << "  " << c << "  " << b << endl;
			}
		}else if(b < a && b < c) {
			if(a < c) {
				cout << b << "  " << a << "  " << c << endl;
			}else{
				cout << b << "  " << c << "  " << a << endl;
			}
		}else{
			if(a < b) {
				cout << c << "  " << a << "  " << b << endl;
			}else{
				cout << c << "  " << b << "  " << a << endl;
			}
		}
       	
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
