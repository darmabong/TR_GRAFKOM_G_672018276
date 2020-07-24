#include<cmath>
#include<math.h>
#include<windows.h>
#include<gl/glut.h>
#include<gl/Gl.h>
#include<iostream>
#define M_PHI 3.14
void init(void);
void tampil(void);
void keyboard(unsigned char,int,int);
void ukuran(int,int);
void mouse(int button,int state,int x,int y);
void mouseMotion(int x,int y);
float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
double opintu=0;
bool mouseDown =false;

int is_depth;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1200,1100);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("TR_GRAFKOM - 672108276");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0,0.5,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_LIGHTING);
glEnable(GL_COLOR_MATERIAL);
glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);
}

void halaman(){

    //alas
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-50.0,-40.1, 30.0);
    glVertex3f(-50.0, -40.1, -100.0);
    glVertex3f(50.0, -40.1, -100.0);
    glVertex3f(50.0, -40.1, 30.0);
    glEnd();

}

void bangun1(void)
{   //1
    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex3f(-5.0,-40.1, -20.0);
    glVertex3f(-5.0, -10.1, -20.0);
    glVertex3f(0.0, -10.1, -15.0);
    glVertex3f(0.0, -40.1, -15.0);
    glEnd();

    //2
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex3f(0.0,-40.1, -15.0);
    glVertex3f(0.0, -10.1, -15.0);
    glVertex3f(25.0, -10.1, -15.0);
    glVertex3f(25.0, -40.1, -15.0);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex3f(25.0,-40.1, -15.0);
    glVertex3f(25.0, -10.1, -15.0);
    glVertex3f(30.0, -10.1, -20.0);
    glVertex3f(30.0, -40.1, -20.0);
    glEnd();

    //4
    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex3f(-5.0,-40.1, -20.0);
    glVertex3f(-5.0, -10.1, -20.0);
    glVertex3f(-5.0, -10.1, -40.0);
    glVertex3f(-5.0, -40.1, -40.0);
    glEnd();

    //5
    glBegin(GL_QUADS);
    glColor3f(1,0.5,1);
    glVertex3f(-5.0,-40.1, -40.0);
    glVertex3f(-5.0, -10.1, -40.0);
    glVertex3f(0.0, -10.1, -45.0);
    glVertex3f(0.0, -40.1, -45.0);
    glEnd();

    //6
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex3f(0.0,-40.1, -45.0);
    glVertex3f(0.0, -10.1, -45.0);
    glVertex3f(25.0, -10.1, -45.0);
    glVertex3f(25.0, -40.1, -45.0);
    glEnd();

    //7
    glBegin(GL_QUADS);
    glColor3f(1,0.5,0);
    glVertex3f(25.0,-40.1, -45.0);
    glVertex3f(25.0, -10.1, -45.0);
    glVertex3f(30.0, -10.1, -40.0);
    glVertex3f(30.0, -40.1, -40.0);
    glEnd();

    //8
    glBegin(GL_QUADS);
    glColor3f(0,0.5,1);
    glVertex3f(30.0,-40.1, -40.0);
    glVertex3f(30.0, -10.1, -40.0);
    glVertex3f(30.0, -10.1, -20.0);
    glVertex3f(30.0, -40.1, -20.0);
    glEnd();
}

void bangunatas1(void)
{   //1
    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex3f(-5.0,-10.1, -20.0);
    glVertex3f(-5.0, 10.1, -20.0);
    glVertex3f(0.0, 10.1, -15.0);
    glVertex3f(0.0, -10.1, -15.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex3f(-5.0,10.1, -20.0);
    glVertex3f(-5.0, 12.1, -20.0);
    glVertex3f(0.0, 12.1, -15.0);
    glVertex3f(0.0, 10.1, -15.0);
    glEnd();

    //2
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex3f(0.0,-10.1, -15.0);
    glVertex3f(0.0, 10.1, -15.0);
    glVertex3f(25.0, 10.1, -15.0);
    glVertex3f(25.0, -10.1, -15.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex3f(0.0,10.1, -15.0);
    glVertex3f(0.0, 12.1, -15.0);
    glVertex3f(25.0, 12.1, -15.0);
    glVertex3f(25.0, 10.1, -15.0);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex3f(25.0,-10.1, -15.0);
    glVertex3f(25.0, 10.1, -15.0);
    glVertex3f(30.0, 10.1, -20.0);
    glVertex3f(30.0, -10.1, -20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex3f(25.0,10.1, -15.0);
    glVertex3f(25.0, 12.1, -15.0);
    glVertex3f(30.0, 12.1, -20.0);
    glVertex3f(30.0, 10.1, -20.0);
    glEnd();

    //4
    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex3f(-5.0,-10.1, -20.0);
    glVertex3f(-5.0, 10.1, -20.0);
    glVertex3f(-5.0, 10.1, -40.0);
    glVertex3f(-5.0, -10.1, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex3f(-5.0,10.1, -20.0);
    glVertex3f(-5.0, 12.1, -20.0);
    glVertex3f(-5.0, 12.1, -30.0);
    glVertex3f(-5.0, 10.1, -30.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex3f(-5.0,10.1, -40.0);
    glVertex3f(-5.0, 20.1, -40.0);
    glVertex3f(-5.0, 20.1, -30.0);
    glVertex3f(-5.0, 10.1, -30.0);
    glEnd();

    //5
    glBegin(GL_QUADS);
    glColor3f(1,0.5,1);
    glVertex3f(-5.0,-10.1, -40.0);
    glVertex3f(-5.0, 10.1, -40.0);
    glVertex3f(0.0, 10.1, -45.0);
    glVertex3f(0.0, -10.1, -45.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0.5,1);
    glVertex3f(-5.0,10.1, -40.0);
    glVertex3f(-5.0, 20.1, -40.0);
    glVertex3f(0.0, 20.1, -45.0);
    glVertex3f(0.0, 10.1, -45.0);
    glEnd();

    //6
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex3f(0.0,-10.1, -45.0);
    glVertex3f(0.0, 10.1, -45.0);
    glVertex3f(25.0, 10.1, -45.0);
    glVertex3f(25.0, -10.1, -45.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex3f(-5.0,10.1, -30.0);
    glVertex3f(-5.0, 20.1, -30.0);
    glVertex3f(30.0, 20.1, -30.0);
    glVertex3f(30.0, 10.1, -30.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex3f(0.0,10.1, -45.0);
    glVertex3f(0.0,20.1, -45.0);
    glVertex3f(25.0,20.1, -45.0);
    glVertex3f(25.0,10.1, -45.0);
    glEnd();

    //7
    glBegin(GL_QUADS);
    glColor3f(1,0.5,0);
    glVertex3f(25.0,-10.1, -45.0);
    glVertex3f(25.0, 10.1, -45.0);
    glVertex3f(30.0, 10.1, -40.0);
    glVertex3f(30.0, -10.1, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0.5,0);
    glVertex3f(25.0,10.1, -45.0);
    glVertex3f(25.0, 20.1, -45.0);
    glVertex3f(30.0, 20.1, -40.0);
    glVertex3f(30.0, 10.1, -40.0);
    glEnd();

    //8
    glBegin(GL_QUADS);
    glColor3f(0,0.5,1);
    glVertex3f(30.0,-10.1, -40.0);
    glVertex3f(30.0, 10.1, -40.0);
    glVertex3f(30.0, 10.1, -20.0);
    glVertex3f(30.0, -10.1, -20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0.5,1);
    glVertex3f(30.0,10.1, -30.0);
    glVertex3f(30.0, 12.1, -30.0);
    glVertex3f(30.0, 12.1, -20.0);
    glVertex3f(30.0, 10.1, -20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0.5,1);
    glVertex3f(30.0,10.1, -40.0);
    glVertex3f(30.0, 20.1, -40.0);
    glVertex3f(30.0, 20.1, -30.0);
    glVertex3f(30.0, 10.1, -30.0);
    glEnd();
}

void bangun2 (void){

    //9
    glBegin(GL_QUADS);
    glColor3f(0.5,0,1);
    glVertex3f(5.0,-40.1, -45.0);
    glVertex3f(5.0, -10.1, -45.0);
    glVertex3f(5.0, -10.1, -55.0);
    glVertex3f(5.0, -40.1, -55.0);
    glEnd();

    //10
    glBegin(GL_QUADS);
    glColor3f(0.5,1,1);
    glVertex3f(20.0,-40.1, -45.0);
    glVertex3f(20.0, -10.1, -45.0);
    glVertex3f(20.0, -10.1, -55.0);
    glVertex3f(20.0, -40.1, -55.0);
    glEnd();
}

void bangunatas2 (void){

    //9
    glBegin(GL_QUADS);
    glColor3f(0.5,0,1);
    glVertex3f(5.0,-10.1, -45.0);
    glVertex3f(5.0, 10.1, -45.0);
    glVertex3f(5.0, 10.1, -55.0);
    glVertex3f(5.0, -10.1, -55.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0,1);
    glVertex3f(5.0,10.1, -45.0);
    glVertex3f(5.0, 20.1, -45.0);
    glVertex3f(5.0, 20.1, -55.0);
    glVertex3f(5.0, 10.1, -55.0);
    glEnd();

    //10
    glBegin(GL_QUADS);
    glColor3f(0.5,1,1);
    glVertex3f(20.0,-10.1, -45.0);
    glVertex3f(20.0, 10.1, -45.0);
    glVertex3f(20.0, 10.1, -55.0);
    glVertex3f(20.0, -10.1, -55.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,1,1);
    glVertex3f(20.0,10.1, -45.0);
    glVertex3f(20.0, 20.1, -45.0);
    glVertex3f(20.0, 20.1, -55.0);
    glVertex3f(20.0, 10.1, -55.0);
    glEnd();
}

void bangun3 (void){
    //11
    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex3f(-25.0,-40.1, -55.0);
    glVertex3f(-25.0, -10.1, -55.0);
    glVertex3f(20.0, -10.1, -55.0);
    glVertex3f(20.0, -40.1, -55.0);
    glEnd();

    //12
    glBegin(GL_QUADS);
    glColor3f(1,0.5,1);
    glVertex3f(-25.0,-40.1, -55.0);
    glVertex3f(-25.0, -10.1, -55.0);
    glVertex3f(-30.0, -10.1, -60.0);
    glVertex3f(-30.0, -40.1, -60.0);
    glEnd();

    //13
    glBegin(GL_QUADS);
    glColor3f(0.5,0,0);
    glVertex3f(-30.0,-40.1, -60.0);
    glVertex3f(-30.0, -10.1, -60.0);
    glVertex3f(-30.0, -10.1, -70.0);
    glVertex3f(-30.0, -40.1, -70.0);
    glEnd();

    //14
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-30.0,-40.1, -70.0);
    glVertex3f(-30.0, -10.1, -70.0);
    glVertex3f(20.0, -10.1, -70.0);
    glVertex3f(20.0, -40.1, -70.0);
    glEnd();

    //15
    glBegin(GL_QUADS);
    glColor3f(0,0,0.5);
    glVertex3f(20.0,-40.1,-55.0);
    glVertex3f(20.0, -10.1,-55.0);
    glVertex3f(20.0, -10.1,-70.0);
    glVertex3f(20.0, -40.1,-70.0);
    glEnd();
}

void bangunatas3 (void){
    //11
    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex3f(-25.0,-10.1, -55.0);
    glVertex3f(-25.0, 30.1, -55.0);
    glVertex3f(20.0, 30.1, -55.0);
    glVertex3f(20.0, -10.1, -55.0);
    glEnd();

    //12
    glBegin(GL_QUADS);
    glColor3f(1,0.5,1);
    glVertex3f(-25.0,-10.1, -55.0);
    glVertex3f(-25.0, 30.1, -55.0);
    glVertex3f(-30.0, 30.1, -60.0);
    glVertex3f(-30.0, -10.1, -60.0);
    glEnd();

    //13
    glBegin(GL_QUADS);
    glColor3f(0.5,0,0);
    glVertex3f(-30.0,-10.1, -60.0);
    glVertex3f(-30.0, 30.1, -60.0);
    glVertex3f(-30.0, 30.1, -70.0);
    glVertex3f(-30.0, -10.1, -70.0);
    glEnd();

    //14
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-30.0,-10.1, -70.0);
    glVertex3f(-30.0, 30.1, -70.0);
    glVertex3f(20.0, 30.1, -70.0);
    glVertex3f(20.0, -10.1, -70.0);
    glEnd();

    //15
    glBegin(GL_QUADS);
    glColor3f(0,0,0.5);
    glVertex3f(20.0,-10.1,-55.0);
    glVertex3f(20.0, 30.1,-55.0);
    glVertex3f(20.0, 30.1,-70.0);
    glVertex3f(20.0, -10.1,-70.0);
    glEnd();
}

void lantai1(void){
    //1
    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex3f(-5.0,-40.1,-20.0);
    glVertex3f(-0.0, -40.1,-15.0);
    glVertex3f(25.0, -40.1,-15.0);
    glVertex3f(30.0, -40.1,-20.0);
    glEnd();

    //2
    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex3f(-5.0,-40.1,-40.0);
    glVertex3f(-0.0, -40.1,-45.0);
    glVertex3f(25.0, -40.1,-45.0);
    glVertex3f(30.0, -40.1,-40.0);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex3f(-5.0,-40.1,-40.0);
    glVertex3f(-5.0, -40.1,-20.0);
    glVertex3f(30.0, -40.1,-20.0);
    glVertex3f(30.0, -40.1,-40.0);
    glEnd();
}
void lantaiatas1(void){
    //1
    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex3f(-5.0,-10.1,-20.0);
    glVertex3f(-0.0, -10.1,-15.0);
    glVertex3f(25.0, -10.1,-15.0);
    glVertex3f(30.0, -10.1,-20.0);
    glEnd();

    //2
    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex3f(-5.0,-10.1,-40.0);
    glVertex3f(-0.0, -10.1,-45.0);
    glVertex3f(25.0, -10.1,-45.0);
    glVertex3f(30.0, -10.1,-40.0);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex3f(-5.0,-10.1,-40.0);
    glVertex3f(-5.0, -10.1,-20.0);
    glVertex3f(30.0, -10.1,-20.0);
    glVertex3f(30.0, -10.1,-40.0);
    glEnd();

}
void lantai2 (void){
    //4
    glBegin(GL_QUADS);
    glColor3f(0.5,0,1);
    glVertex3f(5.0,-40.1, -45.0);
    glVertex3f(5.0, -40.1, -45.0);
    glVertex3f(5.0, -40.1, -55.0);
    glVertex3f(5.0, -40.1, -55.0);
    glEnd();
}

void lantaiatas2 (void){
    //4
    glBegin(GL_QUADS);
    glColor3f(0.5,0,1);
    glVertex3f(5.0,-40.1, -55.0);
    glVertex3f(5.0, -40.1, -45.0);
    glVertex3f(20.0, -40.1, -45.0);
    glVertex3f(20.0, -40.1, -55.0);
    glEnd();
}

void lantai3(void){
    //5
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-25.0,-40.1, -70.0);
    glVertex3f(-25.0, -40.1, -55.0);
    glVertex3f(20.0, -40.1, -55.0);
    glVertex3f(20.0, -40.1, -70.0);
    glEnd();

    //6
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-30.0,-40.1, -70.0);
    glVertex3f(-30.0, -40.1, -60.0);
    glVertex3f(-25.0, -40.1, -55.0);
    glVertex3f(-25.0, -40.1, -70.0);
    glEnd();

}

void lantaiatas3(void){
    //5
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-25.0,-10.1, -70.0);
    glVertex3f(-25.0, -10.1, -55.0);
    glVertex3f(20.0, -10.1, -55.0);
    glVertex3f(20.0, -10.1, -70.0);
    glEnd();

    //6
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-30.0,-10.1, -70.0);
    glVertex3f(-30.0, -10.1, -60.0);
    glVertex3f(-25.0, -10.1, -55.0);
    glVertex3f(-25.0, -10.1, -70.0);
    glEnd();

}
void atapatas(void){
    //1
    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex3f(-5.0,10.1,-20.0);
    glVertex3f(-0.0, 10.1,-15.0);
    glVertex3f(25.0, 10.1,-15.0);
    glVertex3f(30.0, 10.1,-20.0);
    glEnd();


    //2
    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex3f(-5.0,10.1,-40.0);
    glVertex3f(-0.0, 10.1,-45.0);
    glVertex3f(25.0, 10.1,-45.0);
    glVertex3f(30.0, 10.1,-40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex3f(-5.0,20.1,-40.0);
    glVertex3f(-0.0, 20.1,-45.0);
    glVertex3f(25.0, 20.1,-45.0);
    glVertex3f(30.0, 20.1,-40.0);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex3f(-5.0,10.1,-40.0);
    glVertex3f(-5.0, 10.1,-20.0);
    glVertex3f(30.0, 10.1,-20.0);
    glVertex3f(30.0, 10.1,-40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex3f(-5.0,20.1,-40.0);
    glVertex3f(-5.0, 20.1,-30.0);
    glVertex3f(30.0, 20.1,-30.0);
    glVertex3f(30.0, 20.1,-40.0);
    glEnd();
}
void atapatas1 (void){
    //4
    glBegin(GL_QUADS);
    glColor3f(0.5,0,1);
    glVertex3f(5.0,10.1, -55.0);
    glVertex3f(5.0, 10.1, -45.0);
    glVertex3f(20.0, 10.1, -45.0);
    glVertex3f(20.0, 10.1, -55.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0,1);
    glVertex3f(5.0,20.1, -55.0);
    glVertex3f(5.0, 20.1, -45.0);
    glVertex3f(20.0, 20.1, -45.0);
    glVertex3f(20.0, 20.1, -55.0);
    glEnd();
}
void atapatas2(void){
    //5
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-25.0,30.1, -70.0);
    glVertex3f(-25.0,30.1, -55.0);
    glVertex3f(20.0, 30.1, -55.0);
    glVertex3f(20.0, 30.1, -70.0);
    glEnd();

    //6
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-30.0,30.1, -70.0);
    glVertex3f(-30.0, 30.1, -60.0);
    glVertex3f(-25.0, 30.1, -55.0);
    glVertex3f(-25.0, 30.1, -70.0);
    glEnd();

}
void jendela(){
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(0.0, 7.1, -14.9);
    glVertex3f(0.0, 6.1, -14.9);
    glVertex3f(25.0, 6.1, -14.9);
    glVertex3f(25.0, 7.1, -14.9);
    glEnd();
}
void jendela1()
{
    glPushMatrix();
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();
    glTranslated(0,-2,0);
    jendela();

    glPopMatrix();
    glEnd();
}
void jendelaa()
{
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-5.0, 7.1, -19.9);
    glVertex3f(-5.0, 6.1, -19.9);
    glVertex3f(0.0, 6.1, -14.9);
    glVertex3f(0.0, 7.1, -14.9);
    glEnd();
}

void jendela_kiri()
{
    glPushMatrix();
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();
    glTranslated(0,-2,0);
    jendelaa();

    glPopMatrix();
    glEnd();

}
void jendelaaa()
{
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(25.0, 7.1, -14.9);
    glVertex3f(25.0, 6.1, -14.9);
    glVertex3f(30.0, 6.1, -19.9);
    glVertex3f(30.0, 7.1, -19.9);
    glEnd();
}

void jendela_kanan()
{
    glPushMatrix();
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();
    glTranslated(0,-2,0);
    jendelaaa();

    glPopMatrix();
    glEnd();
}
void jndl_panjang()
{
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-5.1, 17.1, -39.9);
    glVertex3f(-5.1, -40.1, -39.9);
    glVertex3f(-5.1, -40.1, -37.9);
    glVertex3f(-5.1, 17.1, -37.9);
    glEnd();
}
void jndl3()
{
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-25.0, 30.1, -54.9);
    glVertex3f(-25.0, 25.1, -54.9);
    glVertex3f(5.0, 25.1, -54.9);
    glVertex3f(5.0, 30.1, -54.9);
    glEnd();
}

void jendl3_atas()
{
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-25.0, 30.1, -54.9);
    glVertex3f(-25.0, 25.1, -54.9);
    glVertex3f(20.0, 25.1, -54.9);
    glVertex3f(20.0, 30.1, -54.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-25.0, 24.1, -54.9);
    glVertex3f(-25.0, 23.1, -54.9);
    glVertex3f(20.0, 23.1, -54.9);
    glVertex3f(20.0, 24.1, -54.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-25.0, 22.1, -54.9);
    glVertex3f(-25.0, 21.1, -54.9);
    glVertex3f(20.0, 21.1, -54.9);
    glVertex3f(20.0, 22.1, -54.9);
    glEnd();
}
void jndl33()
{
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-25.0, 24.1, -54.9);
    glVertex3f(-25.0, 23.1, -54.9);
    glVertex3f(5.0, 23.1, -54.9);
    glVertex3f(5.0, 24.1, -54.9);
    glEnd();
}
void jndl3_kcl()
{
    glPushMatrix();
    jndl33();
    glTranslated(0,-2,0);
    jndl33();
    glTranslated(0,-13,0);
    jndl33();
    glTranslated(0,-2,0);
    jndl33();
    glTranslated(0,-13,0);
    jndl33();
    glTranslated(0,-2,0);
    jndl33();
    glTranslated(0,-13,0);
    jndl33();
    glTranslated(0,-2,0);
    jndl33();
    glTranslated(0,-13,0);
    jndl33();
    glTranslated(0,-2,0);
    jndl33();

    glPopMatrix();
    glEnd();
}
void jendela3 ()
{
    glPushMatrix();
    jndl3();
    glTranslated(0,-15,0);
    jndl3();
    glTranslated(0,-15,0);
    jndl3();
    glTranslated(0,-15,0);
    jndl3();
    glTranslated(0,-15,0);
    jndl3();

    glPopMatrix();
    glEnd();
}

void jendela_samping3()
{
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-27.0,-40.1, -56.5);
    glVertex3f(-27.0, -10.1, -56.5);
    glVertex3f(-29.0, -10.1, -59.0);
    glVertex3f(-29.0, -40.1, -59.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-27.0,-5.1, -56.5);
    glVertex3f(-27.0, 0.1, -56.5);
    glVertex3f(-29.0, 0.1, -59.0);
    glVertex3f(-29.0, -5.1, -59.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-27.0,5.1, -56.5);
    glVertex3f(-27.0, 10.1, -56.5);
    glVertex3f(-29.0, 10.1, -59.0);
    glVertex3f(-29.0, 5.1, -59.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-27.0,15.1, -56.5);
    glVertex3f(-27.0, 20.1, -56.5);
    glVertex3f(-29.0, 20.1, -59.0);
    glVertex3f(-29.0, 15.1, -59.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-27.0,25.1, -56.5);
    glVertex3f(-27.0, 30.1, -56.5);
    glVertex3f(-29.0, 30.1, -59.0);
    glVertex3f(-29.0, 25.1, -59.0);
    glEnd();
}
void jalanraya()
{
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(5.1,-39.9, -15.5);
    glVertex3f(5.1, -39.9, 10.5);
    glVertex3f(7.1, -39.9, 10.0);
    glVertex3f(7.1, -39.9, -15.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(18.1,-39.9, -15.5);
    glVertex3f(18.1, -39.9, 10.5);
    glVertex3f(20.1, -39.9, 10.0);
    glVertex3f(20.1, -39.9, -15.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(12.1,-39.9, -10.0);
    glVertex3f(12.1, -39.9, -5.0);
    glVertex3f(13.1, -39.9, -5.0);
    glVertex3f(13.1, -39.9, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(12.1,-39.9, 0.0);
    glVertex3f(12.1, -39.9, 5.0);
    glVertex3f(13.1, -39.9, 5.0);
    glVertex3f(13.1, -39.9, 0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-50.1,-39.9, 8.0);
    glVertex3f(-50.1, -39.9, 10.5);
    glVertex3f(5.1, -39.9, 10.0);
    glVertex3f(5.1, -39.9, 8.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(20.1,-39.9, 8.0);
    glVertex3f(20.1, -39.9, 10.5);
    glVertex3f(50.1, -39.9, 10.0);
    glVertex3f(50.1, -39.9, 8.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-50.1,-39.9, 27.0);
    glVertex3f(-50.1, -39.9, 25.5);
    glVertex3f(50.1, -39.9, 25.0);
    glVertex3f(50.1, -39.9, 27.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-40.1,-39.9, 17.0);
    glVertex3f(-40.1, -39.9, 18.0);
    glVertex3f(-30.1, -39.9, 18.0);
    glVertex3f(-30.1, -39.9, 17.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-20.1,-39.9, 17.0);
    glVertex3f(-20.1, -39.9, 18.0);
    glVertex3f(-10.1, -39.9, 18.0);
    glVertex3f(-10.1, -39.9, 17.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(0.1,-39.9, 17.0);
    glVertex3f(0.1, -39.9, 18.0);
    glVertex3f(10.1, -39.9, 18.0);
    glVertex3f(10.1, -39.9, 17.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(20.1,-39.9, 17.0);
    glVertex3f(20.1, -39.9, 18.0);
    glVertex3f(30.1, -39.9, 18.0);
    glVertex3f(30.1, -39.9, 17.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(40.1,-39.9, 17.0);
    glVertex3f(40.1, -39.9, 18.0);
    glVertex3f(50.1, -39.9, 18.0);
    glVertex3f(50.1, -39.9, 17.0);
    glEnd();


}
void tampil(void)
{
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);
     glLoadIdentity();
    gluLookAt(0.0f,0.0f,3.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f);
    glRotatef(xrot,1.0f,0.0f,0.0f);
    glRotatef(yrot,0.0f,1.0f,0.0f);
    halaman();
    bangun1();
    bangun2();
    bangun3();
    lantaiatas1();
    lantai1();
    lantai2();
    lantai3();
    bangunatas1();
    bangunatas2();
    bangunatas3();
    lantaiatas2();
    lantaiatas3();
    atapatas();
    atapatas1();
    atapatas2();
    jendela1();
    jendela_kiri();
    jendela_kanan();
    jndl_panjang();
    jendela3();
    jndl3_kcl();
    jendl3_atas();
    jendela_samping3();
    jalanraya();
    glPushMatrix();
    glPopMatrix();

    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 3.0);
        break;
    case 'd':
    case 'D':
        glTranslatef(3.0, 0.0, 0.0);
        break;
    case 's':
    case 'S':
        glTranslatef(0.0,0.0, -3.0);
        break;
    case 'a':
    case 'A':
        glTranslatef(-3.0, 0.0, 0.0);
        break;
    case '7':
        glTranslatef(0.0, 3.0, 0.0);
        break;
    case '9':
        glTranslatef(0.0, -3.0, 0.0);
        break;
    case '2':
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case '8':
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
    case '6':
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
    case '4':
        glRotatef(-2.0, 0.0, 1.0, 0.0);
        break;
    case '1':
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
    case '3':
        glRotatef(-2.0, 0.0, 0.0, 1.0);
        break;
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

void idle()
{
  if (!mouseDown)
  {
      xrot +=0.3f;
      yrot +=0.4f;
  }
   glutPostRedisplay();
}

void mouse(int button,int state,int x,int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x-yrot;
        ydiff = -y+xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x,int y)
{
    if (mouseDown)
    {
        yrot = x-xdiff;
        xrot = y+ydiff;

        glutPostRedisplay();
    }
}

void ukuran(int lebar,int tinggi)
{
    if(tinggi==0) tinggi=1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(40.0,lebar / tinggi, 3.0,400.0);
    glTranslated(0.0,-5.0,-150.0);
    glMatrixMode(GL_MODELVIEW);
}
