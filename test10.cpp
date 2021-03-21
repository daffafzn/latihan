#include <GL/glu.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#define GLUT_DISABLE_ATEXIT_HACK
using namespace std;


float a, b, c, d; // a dan b adalah x dan y awal lalu c dan d adalah x dan y akhir 

void membentuk_pixel(GLint Koordinat_X, GLint Koordinat_Y) {
  glBegin(GL_POINTS);
  glVertex2i(Koordinat_X, Koordinat_Y);
  glEnd();
  glFlush();
}

void hahahaha(int X1, int Y1, int X2, int Y2) {
  int I; // untuk perulangan for
  float panjang; //panjang atau batas akhir
  float X, Y, Xinc, Yinc; //x dan y pembentuk piksel dan xinc dan yinc adalah increment 
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

void displayMe() { hahahaha(a, b, c, d); }

void Inialisasi() {
  glClear(GL_COLOR_BUFFER_BIT);
  glClearColor(0.0, 0.0, 0.0, 1.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0, 300, 0, 400);
}

int main(int argc, char **argv) {
  system("clear");
  cout<<"\x1B[32m           HHHHHHHHHHHHHHHHH                                                       \n       HHHHHHHHHHHHHHHHHHHHHHHHH                                                   \n     HHHHHHHHHHHHHHHHH     HHHHHHH                                                 \n   HHHHHHHHHHHHHHHHHHHH  ,HHHHH __  __   ___                       .           \n  HHHHHHHHHHHHHHHHHHHHHHHHHHH  |  |/  `.'   `.                   .'|           \n HHHHHHHHHHHHHHHHHHHHHHHHH     |   .-.  .-.   '              .| <  |           \n HHHHHHHHHHHHHHHHHHHHHHH       |  |  |  |  |  |    __      .' |_ | |           \n.HHHHHHHHHHHHHHHHHHHHH         |  |  |  |  |  | .:--.'.  .'     || | .'''-.    \n HHHHHHHHHHHHHHHHHHHHHHH       |  |  |  |  |  |/ |   | |'--.  .-'| |/.'''. |   \n HHHHHHHHHHHHHHHHHHHHHHHHHH    |  |  |  |  |  |'. __ | |   |  |  |  /    | |   \n  HHHHHHHHHHHHHHHHHHHHHHHHHHH* |__|  |__|  |__| .'.''| |   |  |  | |     | |   \n   .HHHHHHHHHHHHHHHHHHHHHHHHHHHH               / /   | |_  |  '.'| |     | |   \n     #HHHHHHHHHHHHHHHHHHHHHHHHHHH/             | .._,| '/  |   / | '.    | '.  \n        HHHHHHHHHHHHHHHHHHHHHHH                 `----- '   `'-'  '---'   '---' \n             HHHHHHHHHHHHH                                                  \033[0m";
      
cout<<endl;
cout<<"===================================================================================";
cout<<endl;
cout<<"=========================Membuat Garis Horizontal hahahaha=========================";
cout<<endl;
cout<<"====================================REXTOR=========================================\n";
cout<<"===================================================================================\n";
cout<<"            y\n\n            |\n            |\n            |\n            |\n            |\n            ";
cout<<"-----------  x \n";
cout<<"===================================================================================\n";
cout<<"\033[3;100;30mDengan ukuran layar 300x400\033[0m\n";
cout<<"\x1B[32mMaka maksimal nilai untuk x adalah 300\033[0m\n";
cout<<"\x1B[32mDan maksimal nilai untuk y adalah 400\033[0m\n";

cout<<"Masukkan nilai x1 : ";cin>>a;
cout<<"Masukkan nilai x2 : ";cin>>c;
cout<<"Masukkan nilai y1 : ";cin>>b;
cout<<"Masukkan nilai y2 : ";cin>>d;
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(400, 300);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("Made by rextor");
  Inialisasi();
  glutDisplayFunc(displayMe);
  glutMainLoop();
  return 0;
}
