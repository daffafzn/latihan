#include <GL/glu.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <string>
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

void displayMe() {
	membentuk_garis(x1, x2, y1, y2);
	glFlush();
}

int main(int argc, char **argv) {
	system("clear");
	cout<<"\x1B[32m           HHHHHHHHHHHHHHHHH                                                       \n       HHHHHHHHHHHHHHHHHHHHHHHHH                                                   \n     HHHHHHHHHHHHHHHHH     HHHHHHH                                                 \n   HHHHHHHHHHHHHHHHHHHH  ,HHHHH __  __   ___                       .           \n  HHHHHHHHHHHHHHHHHHHHHHHHHHH  |  |/  `.'   `.                   .'|           \n HHHHHHHHHHHHHHHHHHHHHHHHH     |   .-.  .-.   '              .| <  |           \n HHHHHHHHHHHHHHHHHHHHHHH       |  |  |  |  |  |    __      .' |_ | |           \n.HHHHHHHHHHHHHHHHHHHHH         |  |  |  |  |  | .:--.'.  .'     || | .'''-.    \n HHHHHHHHHHHHHHHHHHHHHHH       |  |  |  |  |  |/ |   | |'--.  .-'| |/.'''. |   \n HHHHHHHHHHHHHHHHHHHHHHHHHH    |  |  |  |  |  |'. __ | |   |  |  |  /    | |   \n  HHHHHHHHHHHHHHHHHHHHHHHHHHH* |__|  |__|  |__| .'.''| |   |  |  | |     | |   \n   .HHHHHHHHHHHHHHHHHHHHHHHHHHHH               / /   | |_  |  '.'| |     | |   \n     #HHHHHHHHHHHHHHHHHHHHHHHHHHH/             | .._,| '/  |   / | '.    | '.  \n        HHHHHHHHHHHHHHHHHHHHHHH                 `----- '   `'-'  '---'   '---' \n             HHHHHHHHHHHHH  	                                               \033[0m";
  		
cout<<endl;
cout<<"===================================================================================";
cout<<endl;
cout<<"=====================Membuat Garis Horizontal Bransenham===========================";
cout<<endl;
cout<<"====================================REXTOR=========================================\n";
cout<<"===================================================================================\n";
cout<<"            y\n\n            |\n            |\n            |\n            |\n            |\n            ";
cout<<"-----------  x \n";
cout<<"===================================================================================\n";
cout<<"\033[3;100;30mDengan ukuran layar 300x400\033[0m\n";
cout<<"\x1B[32mMaka maksimal nilai untuk x adalah 300\033[0m\n";
cout<<"\x1B[32mDan maksimal nilai untuk y adalah 400\033[0m\n";

cout<<"Masukkan nilai x1 : ";cin>>x1;
cout<<"Masukkan nilai x2 : ";cin>>x2;
cout<<"Masukkan nilai y1 : ";cin>>y1;
cout<<"Masukkan nilai y2 : ";cin>>y2;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
	glutCreateWindow("Made by rextor");
	Inialisasi();
	glutDisplayFunc(displayMe);
	glutMainLoop();
}