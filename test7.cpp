#include <GL/glu.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <string>
#define GLUT_DISABLE_ATEXIT_HACK
using namespace std;
void displayMe(void)
{
system("clear");
double x1;
double y1;
double x2;
double y2;
cout<<"\x1B[31m           HHHHHHHHHHHHHHHHH                                                       \n       HHHHHHHHHHHHHHHHHHHHHHHHH                                                   \n     HHHHHHHHHHHHHHHHH     HHHHHHH                                                 \n   HHHHHHHHHHHHHHHHHHHH  ,HHHHH __  __   ___                       .           \n  HHHHHHHHHHHHHHHHHHHHHHHHHHH  |  |/  `.'   `.                   .'|           \n HHHHHHHHHHHHHHHHHHHHHHHHH     |   .-.  .-.   '              .| <  |           \n HHHHHHHHHHHHHHHHHHHHHHH       |  |  |  |  |  |    __      .' |_ | |           \n.HHHHHHHHHHHHHHHHHHHHH         |  |  |  |  |  | .:--.'.  .'     || | .'''-.    \n HHHHHHHHHHHHHHHHHHHHHHH       |  |  |  |  |  |/ |   | |'--.  .-'| |/.'''. |   \n HHHHHHHHHHHHHHHHHHHHHHHHHH    |  |  |  |  |  |'. __ | |   |  |  |  /    | |   \n  HHHHHHHHHHHHHHHHHHHHHHHHHHH* |__|  |__|  |__| .'.''| |   |  |  | |     | |   \n   .HHHHHHHHHHHHHHHHHHHHHHHHHHHH               / /   | |_  |  '.'| |     | |   \n     #HHHHHHHHHHHHHHHHHHHHHHHHHHH/             | .._,| '/  |   / | '.    | '.  \n        HHHHHHHHHHHHHHHHHHHHHHH                 `----- '   `'-'  '---'   '---' \n             HHHHHHHHHHHHH  	                                               \033[0m";
  		
cout<<endl;
cout<<"===================================================================================";
cout<<endl;
cout<<"============================Membuat Garis Horizontal===============================";
cout<<endl;
cout<<"===================================================================================\n";
cout<<"            y\n            |\n            |\n            |\n            |\n            |\n            ";
cout<<"----------- x \n";
cout<<"===================================================================================\n";
cout<<"\033[3;100;30mMasukan nilai dengan Range antara 0-200\033[0m\n";
cout<<"\033[3;100;30mDengan ukuran layar 300x400\033[0m\n";
cout<<"\x1B[32mMaka maksimal nilai untuk x adalah 300\033[0m\n";
cout<<"\x1B[32mDan maksimal nilai untuk y adalah 400\033[0m\n";

cout<<"Masukkan nilai x1 : ";cin>>x1;
cout<<"Masukkan nilai x2 : ";cin>>x2;
cout<<"Masukkan nilai y1 : ";cin>>y1;
cout<<"Masukkan nilai y2 : ";cin>>y2;




int h = 400;
int w = 300;
x1 = 2*x1 / w - 1;
y1 = 2*y1 / h - 1;

x2 = 2*x2 / w - 1;
y2 = 2*y2 / h - 1;
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_LINES);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
glEnd();
glFlush();    
}

void Initialize()
{
glClearColor(0.1, 0.9, 0.1, 0.9);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
system("clear");
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
Initialize();
    glutCreateWindow("Made by Rextor");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
