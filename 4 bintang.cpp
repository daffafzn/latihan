#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{	
		system("cls");
		int n, i=1, s;
		
		cout << "Masukkan Tinggi Bintang : ";
		cin >> n;
		
		while(i<=n){
			for(s=1; s<=i; s++){
				cout << "*";
				if(s==i){
					cout << endl;
				}
			}
			i++;
		}
		n=n-1;
		while(n>=1){
			for(s=n; s>=1; s--){
				cout << "*";
				if(s==1){
					cout << endl;
				}
			}
		 	n--;
		}
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
