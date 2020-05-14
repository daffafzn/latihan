#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int a, b, c, suku;
		cout<<"Membuat Deret Fibonacci\n";
		cout<<"Masukkan nilai suku ke-: ";cin>>suku;
		
		cout<<"Bilangannya adalah: \n";
		a=0;b=1;
		cout<<a<<endl<<b<<endl;
		
		for(int i=3; i<=suku; i++)
		{
			c = a + b;
			a = b;
			b = c;
			
			cout<<c<<endl;
		}		
				
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
