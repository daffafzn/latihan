// basis library c
#include <GL/glu.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <unistd.h>
#define GLUT_DISABLE_ATEXIT_HACK
using namespace std;
// Library untuk transformasi
#include <stdio.h>
#include <math.h>
#include <time.h>

// inialisasi ukuran layar
#define maxWD 640
#define maxHT 480

// kecepatan rotasi
#define kecTheta 0.05
int px, py, tx, ty;
float a, b, c, d;
int sx, sy;
int x1, y4, x2, y2;

void membentuk_pixel(GLint Koordinat_X, GLint Koordinat_Y) {
  glBegin(GL_POINTS);
  glVertex2i(Koordinat_X, Koordinat_Y);
  glEnd();
  glFlush();
}

void hahahaha(int X1, int Y1, int X2, int Y2) {
  int I; // untuk perulangan for
  float panjang; //delta y
  float X, Y, Xinc, Yinc; //x dan y pembentuk piksel dan xinc dan yinc adalah increment hasil 
  panjang = abs(X2 - X1);
  if (abs(Y2 - Y1) > panjang)
    panjang = abs(Y2 - Y1);
  Xinc = (X2 - X1) / (panjang);
  Yinc = (Y2 - Y1) / (panjang);
  X = X1;
  Y = Y1;
  for (I = 0; I < panjang; I++) {
    membentuk_pixel((X + 0.5), (Y + 0.5));
    X = X + Xinc;
    Y = Y + Yinc;
  }
}



void membentuk_piksel(int x, int y) {
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}

void membentuk_garis(int x1, int x2, int y4, int y2) {
	int dx, dy, i, e; //dx hasil dari pengurangan x dan dy adalah hasil pengurangan y
	int incx, incy, inc1, inc2; //inc adalah increment
	int x,y; //pembentuk pixel

	dx = x2-x1;
	dy = y2-y4;

	if (dx < 0) dx = -dx;
	if (dy < 0) dy = -dy;
	incx = 1;
	if (x2 < x1) incx = -1;
	incy = 1;
	if (y2 < y4) incy = -1;
	x = x1; y = y4;
	if (dx > dy) {
		membentuk_piksel(x, y);
		e = 2 * dy-dx;
		inc1 = 2*(dy-dx);
		inc2 = 2*dy;
		for (i=0; i<dx; i++) {
			if (e >= 0) {
				y += incy;
				e += inc1;
			}
			else
				e += inc2;
			x += incx;
			membentuk_piksel(x, y);
		}

	} else {
		membentuk_piksel(x, y);
		e = 2*dx-dy;
		inc1 = 2*(dx-dy);
		inc2 = 2*dx;
		for (i=0; i<dy; i++) {
			if (e >= 0) {
				x += incx;
				e += inc1;
			}
			else
				e += inc2;
			y += incy;
			membentuk_piksel(x, y);
		}
	}
}
// membuat perlambatan atau delay
void delay(unsigned int mseconds)
{
	clock_t hasil = mseconds + clock();
	while (hasil > clock())
		;
}

// inialisasi layar awal
void inialisasi(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, maxWD, 0.0, maxHT);
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

// menggambar titik
void menggambarTitik(int x, int y)
{
	glPointSize(7.0);
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}

void Rotasi(int px, int py, int cx, int cy)
{
	float theta = 0.0;
	while (1) {
		glClear(GL_COLOR_BUFFER_BIT);
		int xf, yf;

		
		theta = theta + kecTheta;

		
		if (theta >= (2.0 * 3.14159))
			theta = theta - (2.0 * 3.14159);

		
		xf = cx + (int)((float)(px - cx) * cos(theta))
			- ((float)(py - cy) * sin(theta));
		yf = cy + (int)((float)(px - cx) * sin(theta))
			+ ((float)(py - cy) * cos(theta));

		// menggambar titik yang berada di tengah
		menggambarTitik(cx, cy);

		// menggambar titik yang berotasi
		menggambarTitik(xf, yf);
		glFlush();
		// membuat perlambatan
		delay(16000);
	}
}

// fungsi translasi
void titikTranslasi(int px, int py, int tx, int ty)
{
	int fx = px, fy = py;
	while (1) {
		glClear(GL_COLOR_BUFFER_BIT);

		// update
		px = px + tx;
		py = py + ty;

		// mengecek jika overflow tidak melebihi ukuran layar
		if (px > maxWD || px < 0 || py > maxHT || py < 0) {
			px = fx;
			py = fy;
		}

		menggambarTitik(px, py); // menggambar titik

		glFlush();
		// membuat delay
		delay(15000);
	}
}

void Skalasi(int px, int py, int sx, int sy)
{
	int fx, fy;
	while (1) {
		glClear(GL_COLOR_BUFFER_BIT);

		// update
		fx = px * sx;
		fy = py * sy;

		menggambarTitik(fx, fy); // menggambar titik

		glFlush();
		// membuat delay
		delay(500);

		glClear(GL_COLOR_BUFFER_BIT);

		// update titik kedua
		fx = px;
		fy = py;

		// menggambar titik
		menggambarTitik(fx, fy);
		glFlush();
		// membuat delay
		delay(500);
	}
}




void tampilkanTranslasi() {

		titikTranslasi(px, py, tx, ty);
	glFlush();
}

void tampilkanRotasi() {
Rotasi(px, py, maxWD / 2, maxHT / 2);
	glFlush();

}
void tampilkanSkalasi() {

		Skalasi(px, py, sx, sy);
	glFlush();
}

void tampilkanDDA() {

	hahahaha(a, b, c, d);

}

void tampilkanBransenham() {
membentuk_garis(x1, x2, y4, y2);
	glFlush();
}

		
int main(int argc, char** argv)
{
	

	system("clear");
	int pil;
  cout<<"\x1B[91m                         __                \n_______   ____ ___  ____/  |_  ___________ \n\\_  __ \\_/ __ \\   \\/  /\\   __\\/  _ \\_  __ \\\n |  | \\/\\  ___/ >    <  |  | (  <_> )  | \\/\n |__|    \\____> __/\\__\\ |__|  \\____/|__|\033[0m\n";
 cout<<endl;
 std::cout << "" << std::flush;
    for (int x=1;x<2  ;x++) {
        sleep(1);
        std::cout << "\x1B[91mDefeating me" << std::flush;
        
        std::cout << " \b like that" << std::flush;
        
        std::cout << " \b has no" << std::flush;
        sleep(1);
        std::cout << " \b " << std::flush;
        
        sleep(1);
        std::cout << " \bmeaning\033[0m" << std::flush;
sleep(1);
    }   
cout<<endl;
char opsi;
	do
	{
system("clear");
cout<<"\x1B[91m                         __                \n_______   ____ ___  ____/  |_  ___________ \n\\_  __ \\_/ __ \\   \\/  /\\   __\\/  _ \\_  __ \\\n |  | \\/\\  ___/ >    <  |  | (  <_> )  | \\/\n |__|    \\____> __/\\__\\ |__|  \\____/|__|\033[0m\n";
 cout<<endl;

cout<<"\x1B[95m===================================================================================";

cout<<endl;
cout<<"====================================GRAFIKOM=======================================";
cout<<endl;
cout<<"===================================================================================\n";
cout<<"            y\n\n            |\n            |\n            |\n            |\n            |\n            ";
cout<<"-----------  x \n";
cout<<"===================================================================================\n";
cout<<"======================================  Menu  =====================================\n";

cout<<"===================================================================================\n";	

printf("|[1] Membuat Garis Primitive"
		"\n|[2] Transformasi Objek 2 Dimensi"
		"\n|[3] Keluar"
		"\n===================================================================================\033[0m");
	printf("\033[3;100;30m\n\nMasukkan Pilihan x1\033[0m >> ");
	scanf("%d", &pil);

	switch (pil) {
	case 1:
int pil3;
	system("clear");
	
cout<<"\x1B[91m                         __                \n_______   ____ ___  ____/  |_  ___________ \n\\_  __ \\_/ __ \\   \\/  /\\   __\\/  _ \\_  __ \\\n |  | \\/\\  ___/ >    <  |  | (  <_> )  | \\/\n |__|    \\____> __/\\__\\ |__|  \\____/|__|\033[0m\n";
 cout<<endl;

cout<<"\x1B[95m===================================================================================";

cout<<endl;
cout<<"====================================GRAFIKOM=======================================";
cout<<endl;
cout<<"===================================================================================\n";
cout<<"            y\n\n            |\n            |\n            |\n            |\n            |\n            ";
cout<<"-----------  x \n";
cout<<"===================================================================================\n";

cout<<"=============================== Membuat Garis Primitive ===========================\n";
	
cout<<"===================================================================================\n";
	printf("|[1] Algoritma DDA"
		"\n|[2] Algoritma Bransenham"
		"\n|[3] Kembali"
		"\n===================================================================================\033[0m");
	printf("\033[3;100;30m\n\nMasukkan Pilihan x1\033[0m >> ");
	scanf("%d", &pil3);
switch (pil3) {
	case 1:
cout<<"\x1B[95m===================================================================================\n";
cout<<"==================================Algoritma DDA====================================\n";
cout<<"===================================================================================\033[0m\n";
	cout<<"\033[3;100;30mMasukkan nilai x1\033[0m >> ";cin>>a;
cout<<"\033[3;100;30mMasukkan nilai x1\033[0m >> ";cin>>c;
cout<<"\033[3;100;30mMasukkan nilai y1\033[0m >> ";cin>>b;
cout<<"\033[3;100;30mMasukkan nilai y2\033[0m >> ";cin>>d;
glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(maxWD, maxHT);
	glutInitWindowPosition(700, 100);
	glutCreateWindow("Udah mau bulan puasa maafin ya");
	glutDisplayFunc(tampilkanDDA);
	inialisasi();
	glutMainLoop();
	break;
	case 2:

cout<<"\x1B[95m===================================================================================\n";
cout<<"==============================Algoritma Bransenham=================================\n";
cout<<"===================================================================================\033[0m\n";
cout<<"\033[3;100;30mMasukkan nilai x1\033[0m >> ";cin>>x1;
cout<<"\033[3;100;30mMasukkan nilai x2\033[0m >> ";cin>>x2;
cout<<"\033[3;100;30mMasukkan nilai y4\033[0m >> ";cin>>y4;
cout<<"\033[3;100;30mMasukkan nilai y2\033[0m >> ";cin>>y2;
glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(maxWD, maxHT);
	glutInitWindowPosition(700, 100);
	glutCreateWindow("Udah mau bulan puasa maafin ya");
	glutDisplayFunc(tampilkanBransenham);
	inialisasi();
	glutMainLoop();
	break;
	case 3:
	opsi = 'N';
	break;
	}
	break;
	case 2:
	


		
	int pil2;
	system("clear");
cout<<"\x1B[91m                         __                \n_______   ____ ___  ____/  |_  ___________ \n\\_  __ \\_/ __ \\   \\/  /\\   __\\/  _ \\_  __ \\\n |  | \\/\\  ___/ >    <  |  | (  <_> )  | \\/\n |__|    \\____> __/\\__\\ |__|  \\____/|__|\033[0m\n";
 cout<<endl;

cout<<"\x1B[95m===================================================================================";

cout<<endl;
cout<<"====================================GRAFIKOM=======================================";
cout<<endl;
cout<<"===================================================================================\n";
cout<<"            y\n\n            |\n            |\n            |\n            |\n            |\n            ";
cout<<"-----------  x \n";
cout<<"===================================================================================\n";

cout<<"============================ Transformasi Objek 2 Dimensi =========================\n";
	
cout<<"===================================================================================\n";
	printf("|[1] Translasi"
		"\n|[2] Rotasi"
		"\n|[3] Skalasi\n|[4] Kembali\n===================================================================================\033[0m");
	printf("\033[3;100;30m\n\nMasukkan Pilihan x1\033[0m >> ");
	scanf("%d", &pil2);
	switch (pil2) {
	case 1:
cout<<"\x1B[95m===================================================================================\n";
cout<<"==================================  Translasi  ====================================\n";
cout<<"===================================================================================\033[0m\n";
	cout<<"\033[3;100;30mMasukkan nilai px\033[0m >> ";cin>>px;
cout<<"\033[3;100;30mMasukkan nilai py\033[0m >> ";cin>>py;
cout<<"\033[3;100;30mMasukkan nilai tx\033[0m >> ";cin>>tx;
cout<<"\033[3;100;30mMasukkan nilai ty\033[0m >> ";cin>>ty;
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(maxWD, maxHT);
	glutInitWindowPosition(700, 100);
	glutCreateWindow("Udah mau bulan puasa maafin ya");
	glutDisplayFunc(tampilkanTranslasi);
	inialisasi();
	glutMainLoop();
		break;
	case 2:
cout<<"\x1B[95m===================================================================================\n";
cout<<"==================================  Rotasi  =======================================\n";
cout<<"===================================================================================\033[0m\n";
cout<<"\033[3;100;30mMasukkan nilai px\033[0m >> ";cin>>px;
cout<<"\033[3;100;30mMasukkan nilai py\033[0m >> ";cin>>py;
glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(maxWD, maxHT);
	glutInitWindowPosition(700, 100);
	glutCreateWindow("Udah mau bulan puasa maafin ya");
	glutDisplayFunc(tampilkanRotasi);
	inialisasi();
	glutMainLoop();
		break;
	case 3:
cout<<"\x1B[95m===================================================================================\n";
cout<<"===================================  Skalasi  =====================================\n";
cout<<"===================================================================================\033[0m\n";
	cout<<"\033[3;100;30mMasukkan nilai px\033[0m >> ";cin>>px;
cout<<"\033[3;100;30mMasukkan nilai py\033[0m >> ";cin>>py;
cout<<"\033[3;100;30mMasukkan nilai sx\033[0m >> ";cin>>sx;
cout<<"\033[3;100;30mMasukkan nilai sy\033[0m >> ";cin>>sy;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(maxWD, maxHT);
	glutInitWindowPosition(700, 100);
	glutCreateWindow("Udah mau bulan puasa maafin ya");
	glutDisplayFunc(tampilkanSkalasi);
	inialisasi();
	glutMainLoop();
		break;
	case 4:
	opsi = 'N';
	break;
	}
	break;
	case 3:
	cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n "<<endl<<">>";
	cin >> opsi;
	break;

	}

}while(opsi == 'n' || opsi == 'N');


	
	
}
