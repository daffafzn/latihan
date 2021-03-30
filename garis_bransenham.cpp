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
int x1, y1, x2, y2; //nilai awal berdasarkan koordinat x dan y

void Inialisasi() {
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 300, 0, 400);
}

void membentuk_piksel(int x, int y) {
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}

void membentuk_garis(int x1, int x2, int y1, int y2) {
	int dx, dy, i, e; //dx hasil dari pengurangan x dan dy adalah hasil pengurangan y
	int incx, incy, inc1, inc2; //inc adalah increment
	int x,y; //pembentuk pixel

	dx = x2-x1;
	dy = y2-y1;

	if (dx < 0) dx = -dx;
	if (dy < 0) dy = -dy;
	incx = 1;
	if (x2 < x1) incx = -1;
	incy = 1;
	if (y2 < y1) incy = -1;
	x = x1; y = y1;
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

void Tampilkan() {
	membentuk_garis(x1, x2, y1, y2);
	glFlush();
}

int main(int argc, char **argv) {
	system("clear");
  cout<<"\x1B[91m                         __                \n_______   ____ ___  ____/  |_  ___________ \n\\_  __ \\_/ __ \\   \\/  /\\   __\\/  _ \\_  __ \\\n |  | \\/\\  ___/ >    <  |  | (  <_> )  | \\/\n |__|    \\____> __/\\__\\ |__|  \\____/|__|\033[0m\n";
 cout<<endl;
 std::cout << "" << std::flush;
    for (int x=1;x<2  ;x++) {
        sleep(1);
        std::cout << "\x1B[91mDefeating me" << std::flush;
        sleep(1);
        std::cout << " \b like that" << std::flush;
        sleep(1);
        std::cout << " \b has no" << std::flush;
        sleep(1);
        std::cout << " \b " << std::flush;
        
        sleep(1);
        std::cout << " \b meaning\033[0m" << std::flush;
sleep(1);
    }   
cout<<endl;
system("clear");
cout<<"\x1B[91m                         __                \n_______   ____ ___  ____/  |_  ___________ \n\\_  __ \\_/ __ \\   \\/  /\\   __\\/  _ \\_  __ \\\n |  | \\/\\  ___/ >    <  |  | (  <_> )  | \\/\n |__|    \\____> __/\\__\\ |__|  \\____/|__|\033[0m\n";
 cout<<endl;

cout<<"\x1B[32m===================================================================================";

cout<<endl;
cout<<"=============================Membuat Garis Primitive===============================";
cout<<endl;
cout<<"==============================Algoritma Bransenham=================================\n";
cout<<"===================================================================================\n";
cout<<"            y\n\n            |\n            |\n            |\n            |\n            |\n            ";
cout<<"-----------  x \n";
cout<<"===================================================================================\033[0m\n";
cout<<"\x1B[35m[-";

cout<<"]\033[0m\x1B[32mDengan ukuran layar 300x400\033[0m\n";
cout<<"\x1B[33m[-]\033[0m\x1B[32mMaka maksimal nilai untuk x adalah 300\033[0m\n";
cout<<"\x1B[34m[-]\033[0m\x1B[32mDan maksimal nilai untuk y adalah 400\033[0m\n";

cout<<"\033[3;100;30mMasukkan nilai x1\033[0m >> ";cin>>x1;
cout<<"\033[3;100;30mMasukkan nilai x2\033[0m >> ";cin>>x2;
cout<<"\033[3;100;30mMasukkan nilai y1\033[0m >> ";cin>>y1;
cout<<"\033[3;100;30mMasukkan nilai y2\033[0m >> ";cin>>y2;


	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
	glutCreateWindow("Made by rextor");
	Inialisasi();
	glutDisplayFunc(Tampilkan);
	glutMainLoop();
}