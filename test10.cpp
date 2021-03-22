#include <GL/glu.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <unistd.h>
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

void displayMe() { hahahaha(a, b, c, d); }

void Inialisasi() {
  glClear(GL_COLOR_BUFFER_BIT);
  glClearColor(0.0, 0.0, 0.0, 1.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0, 300, 0, 400);
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
cout<<"==================================Algoritma DDA====================================\n";
cout<<"===================================================================================\n";
cout<<"            y\n\n            |\n            |\n            |\n            |\n            |\n            ";
cout<<"-----------  x \n";
cout<<"===================================================================================\033[0m\n";
cout<<"\x1B[35m[-";

cout<<"]\033[0m\x1B[32mDengan ukuran layar 300x400\033[0m\n";
cout<<"\x1B[33m[-]\033[0m\x1B[32mMaka maksimal nilai untuk x adalah 300\033[0m\n";
cout<<"\x1B[34m[-]\033[0m\x1B[32mDan maksimal nilai untuk y adalah 400\033[0m\n";

cout<<"\033[3;100;30mMasukkan nilai x1\033[0m >> ";cin>>a;
cout<<"\033[3;100;30mMasukkan nilai x2\033[0m >> ";cin>>c;
cout<<"\033[3;100;30mMasukkan nilai y1\033[0m >> ";cin>>b;
cout<<"\033[3;100;30mMasukkan nilai y2\033[0m >> ";cin>>d;
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
