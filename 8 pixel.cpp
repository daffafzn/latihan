#include <iostream>
#include <math.h> 

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int pixel, convert;
		
		cout << "Masukkan Nilai Pixel : " ;
		cin >> pixel;
		
		if (pixel > 255) {
			convert = pixel - 255;
			pixel = pixel - convert;
			cout << "\nPixel Setelah Clipping : " << pixel << endl;
		}else if(pixel < 0) {
			pixel = pixel * 0;
			cout << "\nPixel Setelah Clipping : " << pixel << endl;
		}else if(pixel >= 0 && pixel <= 255) {
			cout << "\nPixel Yang Anda Masukkan : " << pixel << endl;
		}
		      	
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
