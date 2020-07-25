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
void lingkaran (float TITIK_LAYAR_X,float TITIK_LAYAR_Y,
               float LEBAR_X, float LEBAR_Y, float JUMLAH_SUDUT, float ROTASI)
{
    GLfloat derajat =360.0f /JUMLAH_SUDUT *M_PI /100.0f;
    glBegin(GL_TRIANGLE_FAN);
        GLfloat sudut = 0.0f - ROTASI;
        for (int k=0; k< JUMLAH_SUDUT;++k)
        {
            glVertex2f(TITIK_LAYAR_X + (LEBAR_X* cos(sudut)), TITIK_LAYAR_Y+ (LEBAR_Y *sin(sudut)));
            sudut += derajat;
        }
    glEnd();
}

void halaman(){

    glColor3f(1.0,0.9,0.5);
    lingkaran(-50, 50, 5, 5, 500, 20);
    //alas
    glBegin(GL_QUADS);
    glColor3f(0,0.5,0);
    glVertex3f(-50.0,-40.1, 30.0);
    glVertex3f(-50.0, -40.1, -100.0);
    glVertex3f(50.0, -40.1, -100.0);
    glVertex3f(50.0, -40.1, 30.0);
    glEnd();

    //rumput1
    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-45,-39);
    glVertex2d(-43,-39);
    glVertex2d(-41,-36);
    glVertex2d(-47,-36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-45,-36);
    glVertex2d(-44,-36);
    glVertex2d(-46,-30);
    glVertex2d(-47,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-44,-36);
    glVertex2d(-43,-36);
    glVertex2d(-43,-30);
    glVertex2d(-44,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-43,-36);
    glVertex2d(-42,-36);
    glVertex2d(-41,-30);
    glVertex2d(-42,-30);
    glEnd();

    //rumput2
    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-35,-39);
    glVertex2d(-33,-39);
    glVertex2d(-31,-36);
    glVertex2d(-37,-36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-35,-36);
    glVertex2d(-34,-36);
    glVertex2d(-36,-30);
    glVertex2d(-37,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-34,-36);
    glVertex2d(-33,-36);
    glVertex2d(-33,-30);
    glVertex2d(-34,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-33,-36);
    glVertex2d(-32,-36);
    glVertex2d(-31,-30);
    glVertex2d(-32,-30);
    glEnd();

    //rumput3
    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-25,-39);
    glVertex2d(-23,-39);
    glVertex2d(-21,-36);
    glVertex2d(-27,-36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-25,-36);
    glVertex2d(-24,-36);
    glVertex2d(-26,-30);
    glVertex2d(-27,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-24,-36);
    glVertex2d(-23,-36);
    glVertex2d(-23,-30);
    glVertex2d(-24,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-23,-36);
    glVertex2d(-22,-36);
    glVertex2d(-21,-30);
    glVertex2d(-22,-30);
    glEnd();

    //rumput4
    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-15,-39);
    glVertex2d(-13,-39);
    glVertex2d(-11,-36);
    glVertex2d(-17,-36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-15,-36);
    glVertex2d(-14,-36);
    glVertex2d(-16,-30);
    glVertex2d(-17,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-14,-36);
    glVertex2d(-13,-36);
    glVertex2d(-13,-30);
    glVertex2d(-14,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-13,-36);
    glVertex2d(-12,-36);
    glVertex2d(-11,-30);
    glVertex2d(-12,-30);
    glEnd();

    //rumput5
    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-5,-39);
    glVertex2d(-3,-39);
    glVertex2d(-1,-36);
    glVertex2d(-7,-36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-5,-36);
    glVertex2d(-4,-36);
    glVertex2d(-6,-30);
    glVertex2d(-7,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-4,-36);
    glVertex2d(-3,-36);
    glVertex2d(-3,-30);
    glVertex2d(-4,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(-3,-36);
    glVertex2d(-2,-36);
    glVertex2d(-1,-30);
    glVertex2d(-2,-30);
    glEnd();

    //rumput6
    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(25,-39);
    glVertex2d(23,-39);
    glVertex2d(21,-36);
    glVertex2d(27,-36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(25,-36);
    glVertex2d(24,-36);
    glVertex2d(26,-30);
    glVertex2d(27,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(24,-36);
    glVertex2d(23,-36);
    glVertex2d(23,-30);
    glVertex2d(24,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(23,-36);
    glVertex2d(22,-36);
    glVertex2d(21,-30);
    glVertex2d(22,-30);
    glEnd();

    //rumput7
    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(35,-39);
    glVertex2d(33,-39);
    glVertex2d(31,-36);
    glVertex2d(37,-36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(35,-36);
    glVertex2d(34,-36);
    glVertex2d(36,-30);
    glVertex2d(37,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(34,-36);
    glVertex2d(33,-36);
    glVertex2d(33,-30);
    glVertex2d(34,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(33,-36);
    glVertex2d(32,-36);
    glVertex2d(31,-30);
    glVertex2d(32,-30);
    glEnd();

    //rumput8
    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(45,-39);
    glVertex2d(43,-39);
    glVertex2d(41,-36);
    glVertex2d(47,-36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(45,-36);
    glVertex2d(44,-36);
    glVertex2d(46,-30);
    glVertex2d(47,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(44,-36);
    glVertex2d(43,-36);
    glVertex2d(43,-30);
    glVertex2d(44,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,1,0);
    glVertex2d(43,-36);
    glVertex2d(42,-36);
    glVertex2d(41,-30);
    glVertex2d(42,-30);
    glEnd();
}

void bangun1(void)
{   //1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-5.0,-40.1, -20.0);
    glVertex3f(-5.0, -10.1, -20.0);
    glVertex3f(0.0, -10.1, -15.0);
    glVertex3f(0.0, -40.1, -15.0);
    glEnd();

    //2
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(0.0,-40.1, -15.0);
    glVertex3f(0.0, -10.1, -15.0);
    glVertex3f(25.0, -10.1, -15.0);
    glVertex3f(25.0, -40.1, -15.0);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(25.0,-40.1, -15.0);
    glVertex3f(25.0, -10.1, -15.0);
    glVertex3f(30.0, -10.1, -20.0);
    glVertex3f(30.0, -40.1, -20.0);
    glEnd();

    //4
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-5.0,-40.1, -20.0);
    glVertex3f(-5.0, -10.1, -20.0);
    glVertex3f(-5.0, -10.1, -40.0);
    glVertex3f(-5.0, -40.1, -40.0);
    glEnd();

    //5
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-5.0,-40.1, -40.0);
    glVertex3f(-5.0, -10.1, -40.0);
    glVertex3f(0.0, -10.1, -45.0);
    glVertex3f(0.0, -40.1, -45.0);
    glEnd();

    //6
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(0.0,-40.1, -45.0);
    glVertex3f(0.0, -10.1, -45.0);
    glVertex3f(25.0, -10.1, -45.0);
    glVertex3f(25.0, -40.1, -45.0);
    glEnd();

    //7
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(25.0,-40.1, -45.0);
    glVertex3f(25.0, -10.1, -45.0);
    glVertex3f(30.0, -10.1, -40.0);
    glVertex3f(30.0, -40.1, -40.0);
    glEnd();

    //8
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(30.0,-40.1, -40.0);
    glVertex3f(30.0, -10.1, -40.0);
    glVertex3f(30.0, -10.1, -20.0);
    glVertex3f(30.0, -40.1, -20.0);
    glEnd();
}
void pintu ()
{
    glBegin(GL_QUADS);
    glColor4f(1.0, 0.0, 0.0, 0.0);
    glVertex3f(8.0,-30.1, -14.9);
    glVertex3f(8.0, -40.1, -14.9);
    glVertex3f(18.0, -40.1, -14.9);
    glVertex3f(18.0, -30.1, -14.9);
    glEnd();
}

void bangunatas1(void)
{   //1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-5.0,-10.1, -20.0);
    glVertex3f(-5.0, 10.1, -20.0);
    glVertex3f(0.0, 10.1, -15.0);
    glVertex3f(0.0, -10.1, -15.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-5.0,10.1, -20.0);
    glVertex3f(-5.0, 12.1, -20.0);
    glVertex3f(0.0, 12.1, -15.0);
    glVertex3f(0.0, 10.1, -15.0);
    glEnd();

    //2
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(0.0,-10.1, -15.0);
    glVertex3f(0.0, 10.1, -15.0);
    glVertex3f(25.0, 10.1, -15.0);
    glVertex3f(25.0, -10.1, -15.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(0.0,10.1, -15.0);
    glVertex3f(0.0, 12.1, -15.0);
    glVertex3f(25.0, 12.1, -15.0);
    glVertex3f(25.0, 10.1, -15.0);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(25.0,-10.1, -15.0);
    glVertex3f(25.0, 10.1, -15.0);
    glVertex3f(30.0, 10.1, -20.0);
    glVertex3f(30.0, -10.1, -20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(25.0,10.1, -15.0);
    glVertex3f(25.0, 12.1, -15.0);
    glVertex3f(30.0, 12.1, -20.0);
    glVertex3f(30.0, 10.1, -20.0);
    glEnd();

    //4
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-5.0,-10.1, -20.0);
    glVertex3f(-5.0, 10.1, -20.0);
    glVertex3f(-5.0, 10.1, -40.0);
    glVertex3f(-5.0, -10.1, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-5.0,10.1, -20.0);
    glVertex3f(-5.0, 12.1, -20.0);
    glVertex3f(-5.0, 12.1, -30.0);
    glVertex3f(-5.0, 10.1, -30.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-5.0,10.1, -40.0);
    glVertex3f(-5.0, 20.1, -40.0);
    glVertex3f(-5.0, 20.1, -30.0);
    glVertex3f(-5.0, 10.1, -30.0);
    glEnd();

    //5
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-5.0,-10.1, -40.0);
    glVertex3f(-5.0, 10.1, -40.0);
    glVertex3f(0.0, 10.1, -45.0);
    glVertex3f(0.0, -10.1, -45.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-5.0,10.1, -40.0);
    glVertex3f(-5.0, 20.1, -40.0);
    glVertex3f(0.0, 20.1, -45.0);
    glVertex3f(0.0, 10.1, -45.0);
    glEnd();

    //6
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(0.0,-10.1, -45.0);
    glVertex3f(0.0, 10.1, -45.0);
    glVertex3f(25.0, 10.1, -45.0);
    glVertex3f(25.0, -10.1, -45.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.75, 0.7, 0.75);
    glVertex3f(-5.0,10.1, -30.0);
    glVertex3f(-5.0, 20.1, -30.0);
    glVertex3f(30.0, 20.1, -30.0);
    glVertex3f(30.0, 10.1, -30.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(0.0,10.1, -45.0);
    glVertex3f(0.0,20.1, -45.0);
    glVertex3f(25.0,20.1, -45.0);
    glVertex3f(25.0,10.1, -45.0);
    glEnd();

    //7
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(25.0,-10.1, -45.0);
    glVertex3f(25.0, 10.1, -45.0);
    glVertex3f(30.0, 10.1, -40.0);
    glVertex3f(30.0, -10.1, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(25.0,10.1, -45.0);
    glVertex3f(25.0, 20.1, -45.0);
    glVertex3f(30.0, 20.1, -40.0);
    glVertex3f(30.0, 10.1, -40.0);
    glEnd();

    //8
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(30.0,-10.1, -40.0);
    glVertex3f(30.0, 10.1, -40.0);
    glVertex3f(30.0, 10.1, -20.0);
    glVertex3f(30.0, -10.1, -20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(30.0,10.1, -30.0);
    glVertex3f(30.0, 12.1, -30.0);
    glVertex3f(30.0, 12.1, -20.0);
    glVertex3f(30.0, 10.1, -20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(30.0,10.1, -40.0);
    glVertex3f(30.0, 20.1, -40.0);
    glVertex3f(30.0, 20.1, -30.0);
    glVertex3f(30.0, 10.1, -30.0);
    glEnd();
}

void bangun2 (void){

    //9
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(5.0,-40.1, -45.0);
    glVertex3f(5.0, -10.1, -45.0);
    glVertex3f(5.0, -10.1, -55.0);
    glVertex3f(5.0, -40.1, -55.0);
    glEnd();

    //10
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(20.0,-40.1, -45.0);
    glVertex3f(20.0, -10.1, -45.0);
    glVertex3f(20.0, -10.1, -55.0);
    glVertex3f(20.0, -40.1, -55.0);
    glEnd();
}

void bangunatas2 (void){

    //9
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(5.0,-10.1, -45.0);
    glVertex3f(5.0, 10.1, -45.0);
    glVertex3f(5.0, 10.1, -55.0);
    glVertex3f(5.0, -10.1, -55.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(5.0,10.1, -45.0);
    glVertex3f(5.0, 20.1, -45.0);
    glVertex3f(5.0, 20.1, -55.0);
    glVertex3f(5.0, 10.1, -55.0);
    glEnd();

    //10
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(20.0,-10.1, -45.0);
    glVertex3f(20.0, 10.1, -45.0);
    glVertex3f(20.0, 10.1, -55.0);
    glVertex3f(20.0, -10.1, -55.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(20.0,10.1, -45.0);
    glVertex3f(20.0, 20.1, -45.0);
    glVertex3f(20.0, 20.1, -55.0);
    glVertex3f(20.0, 10.1, -55.0);
    glEnd();
}

void bangun3 (void){
    //11
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-25.0,-40.1, -55.0);
    glVertex3f(-25.0, -10.1, -55.0);
    glVertex3f(20.0, -10.1, -55.0);
    glVertex3f(20.0, -40.1, -55.0);
    glEnd();

    //12
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-25.0,-40.1, -55.0);
    glVertex3f(-25.0, -10.1, -55.0);
    glVertex3f(-30.0, -10.1, -60.0);
    glVertex3f(-30.0, -40.1, -60.0);
    glEnd();

    //13
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-30.0,-40.1, -60.0);
    glVertex3f(-30.0, -10.1, -60.0);
    glVertex3f(-30.0, -10.1, -70.0);
    glVertex3f(-30.0, -40.1, -70.0);
    glEnd();

    //14
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-30.0,-40.1, -70.0);
    glVertex3f(-30.0, -10.1, -70.0);
    glVertex3f(20.0, -10.1, -70.0);
    glVertex3f(20.0, -40.1, -70.0);
    glEnd();

    //15
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(20.0,-40.1,-55.0);
    glVertex3f(20.0, -10.1,-55.0);
    glVertex3f(20.0, -10.1,-70.0);
    glVertex3f(20.0, -40.1,-70.0);
    glEnd();
}

void bangunatas3 (void){
    //11
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-25.0,-10.1, -55.0);
    glVertex3f(-25.0, 30.1, -55.0);
    glVertex3f(20.0, 30.1, -55.0);
    glVertex3f(20.0, -10.1, -55.0);
    glEnd();

    //12
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-25.0,-10.1, -55.0);
    glVertex3f(-25.0, 30.1, -55.0);
    glVertex3f(-30.0, 30.1, -60.0);
    glVertex3f(-30.0, -10.1, -60.0);
    glEnd();

    //13
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-30.0,-10.1, -60.0);
    glVertex3f(-30.0, 30.1, -60.0);
    glVertex3f(-30.0, 30.1, -70.0);
    glVertex3f(-30.0, -10.1, -70.0);
    glEnd();

    //14
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-30.0,-10.1, -70.0);
    glVertex3f(-30.0, 30.1, -70.0);
    glVertex3f(20.0, 30.1, -70.0);
    glVertex3f(20.0, -10.1, -70.0);
    glEnd();

    //15
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
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
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-5.0,10.1,-20.0);
    glVertex3f(-0.0, 10.1,-15.0);
    glVertex3f(25.0, 10.1,-15.0);
    glVertex3f(30.0, 10.1,-20.0);
    glEnd();


    //2
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-5.0,10.1,-40.0);
    glVertex3f(-0.0, 10.1,-45.0);
    glVertex3f(25.0, 10.1,-45.0);
    glVertex3f(30.0, 10.1,-40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-5.0,20.1,-40.0);
    glVertex3f(-0.0, 20.1,-45.0);
    glVertex3f(25.0, 20.1,-45.0);
    glVertex3f(30.0, 20.1,-40.0);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-5.0,10.1,-40.0);
    glVertex3f(-5.0, 10.1,-20.0);
    glVertex3f(30.0, 10.1,-20.0);
    glVertex3f(30.0, 10.1,-40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-5.0,20.1,-40.0);
    glVertex3f(-5.0, 20.1,-30.0);
    glVertex3f(30.0, 20.1,-30.0);
    glVertex3f(30.0, 20.1,-40.0);
    glEnd();
}
void atapatas1 (void){
    //4
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(5.0,10.1, -55.0);
    glVertex3f(5.0, 10.1, -45.0);
    glVertex3f(20.0, 10.1, -45.0);
    glVertex3f(20.0, 10.1, -55.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(5.0,20.1, -55.0);
    glVertex3f(5.0, 20.1, -45.0);
    glVertex3f(20.0, 20.1, -45.0);
    glVertex3f(20.0, 20.1, -55.0);
    glEnd();
}
void atapatas2(void){
    //5
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-25.0,30.1, -70.0);
    glVertex3f(-25.0,30.1, -55.0);
    glVertex3f(20.0, 30.1, -55.0);
    glVertex3f(20.0, 30.1, -70.0);
    glEnd();

    //6
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-30.0,30.1, -70.0);
    glVertex3f(-30.0, 30.1, -60.0);
    glVertex3f(-25.0, 30.1, -55.0);
    glVertex3f(-25.0, 30.1, -70.0);
    glEnd();

}
void jendela(){
    glBegin(GL_QUADS);
    glColor3f( 0.0, 0.0, 1.0);
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
    glColor3f( 1.0, 0.0, 0.0);
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
    glColor3f( 1.0, 0.0, 0.0);
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
    glColor3f(  0.75, 0.75, 0.75);
    glVertex3f(-5.1, 17.1, -39.9);
    glVertex3f(-5.1, -40.1, -39.9);
    glVertex3f(-5.1, -40.1, -37.9);
    glVertex3f(-5.1, 17.1, -37.9);
    glEnd();
}
void jndl_panjang_garis()
{
    glBegin(GL_QUADS);
    glColor3f(  0.7, 0.7, 0.7);
    glVertex3f(-5.2, 17.1, -39.9);
    glVertex3f(-5.2, -40.1, -39.9);
    glVertex3f(-5.2, -40.1, -39.5);
    glVertex3f(-5.2, 17.1, -39.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f( 0.7, 0.7, 0.7);
    glVertex3f(-5.2, 17.1, -37.9);
    glVertex3f(-5.2, -40.1, -37.9);
    glVertex3f(-5.2, -40.1, -37.5);
    glVertex3f(-5.2, 17.1, -37.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f( 0.7, 0.7, 0.7);
    glVertex3f(-5.2, 17.1, -39.9);
    glVertex3f(-5.2, 16.1, -39.9);
    glVertex3f(-5.2, 16.1, -37.9);
    glVertex3f(-5.2, 17.1, -37.9);
    glEnd();
}
void jndl3()
{
    glBegin(GL_QUADS);
    glColor3f(1,0.5,0);
    glVertex3f(-25.0, 30.1, -54.9);
    glVertex3f(-25.0, 25.1, -54.9);
    glVertex3f(5.0, 25.1, -54.9);
    glVertex3f(5.0, 30.1, -54.9);
    glEnd();
}

void jendl3_atas()
{
    glBegin(GL_QUADS);
    glColor3f(1,0.5,0);
    glVertex3f(-25.0, 30.1, -54.9);
    glVertex3f(-25.0, 25.1, -54.9);
    glVertex3f(20.0, 25.1, -54.9);
    glVertex3f(20.0, 30.1, -54.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0.5,0);
    glVertex3f(-25.0, 24.1, -54.9);
    glVertex3f(-25.0, 23.1, -54.9);
    glVertex3f(20.0, 23.1, -54.9);
    glVertex3f(20.0, 24.1, -54.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0.5,0);
    glVertex3f(-25.0, 22.1, -54.9);
    glVertex3f(-25.0, 21.1, -54.9);
    glVertex3f(20.0, 21.1, -54.9);
    glVertex3f(20.0, 22.1, -54.9);
    glEnd();
}
void jndl33()
{
    glBegin(GL_QUADS);
    glColor3f(1,0.5,0);
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
    glColor3f(1,0.5,0);
    glVertex3f(-27.0,-40.1, -56.5);
    glVertex3f(-27.0, -10.1, -56.5);
    glVertex3f(-29.0, -10.1, -59.0);
    glVertex3f(-29.0, -40.1, -59.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0.5,0);
    glVertex3f(-27.0,-5.1, -56.5);
    glVertex3f(-27.0, 0.1, -56.5);
    glVertex3f(-29.0, 0.1, -59.0);
    glVertex3f(-29.0, -5.1, -59.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0.5,0);
    glVertex3f(-27.0,5.1, -56.5);
    glVertex3f(-27.0, 10.1, -56.5);
    glVertex3f(-29.0, 10.1, -59.0);
    glVertex3f(-29.0, 5.1, -59.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0.5,0);
    glVertex3f(-27.0,15.1, -56.5);
    glVertex3f(-27.0, 20.1, -56.5);
    glVertex3f(-29.0, 20.1, -59.0);
    glVertex3f(-29.0, 15.1, -59.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0.5,0);
    glVertex3f(-27.0,25.1, -56.5);
    glVertex3f(-27.0, 30.1, -56.5);
    glVertex3f(-29.0, 30.1, -59.0);
    glVertex3f(-29.0, 25.1, -59.0);
    glEnd();
}
void tiang_bendera()
{   //tiang bendera
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-35.1,-5.9, -25.0);
    glVertex3f(-35.1, -40.9, -25.0);
    glVertex3f(-33.1, -40.9, -25.0);
    glVertex3f(-33.1, -5.9, -25.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-35.1,-5.9, -25.0);
    glVertex3f(-35.1, -40.9, -25.0);
    glVertex3f(-35.1, -40.9, -28.0);
    glVertex3f(-35.1, -5.9, -28.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-33.1,-5.9, -25.0);
    glVertex3f(-33.1, -40.9, -25.0);
    glVertex3f(-33.1, -40.9, -28.0);
    glVertex3f(-33.1, -5.9, -28.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-35.1,-5.9, -28.0);
    glVertex3f(-35.1, -40.9, -28.0);
    glVertex3f(-33.1, -40.9, -28.0);
    glVertex3f(-33.1, -5.9, -28.0);
    glEnd();

    //bendera
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex3f(-35.1,-5.9, -27.0);
    glVertex3f(-35.1, -8.9, -27.0);
    glVertex3f(-25.1, -8.9, -27.0);
    glVertex3f(-25.1, -5.9, -27.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-35.1,-8.9, -27.0);
    glVertex3f(-35.1, -11.9, -27.0);
    glVertex3f(-25.1, -11.9, -27.0);
    glVertex3f(-25.1, -8.9, -27.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex3f(-35.1,-11.9, -27.0);
    glVertex3f(-35.1, -14.9, -27.0);
    glVertex3f(-25.1, -14.9, -27.0);
    glVertex3f(-25.1, -11.9, -27.0);
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
    glColor3f(0,0,0);
    glVertex3f(7.1,-40.0, -15.5);
    glVertex3f(7.1, -40.0, 10.5);
    glVertex3f(18.1, -40.0, 10.0);
    glVertex3f(18.1, -40.0, -15.0);
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
    glColor3f(0,0,0);
    glVertex3f(-50.1,-40.0, 8.0);
    glVertex3f(-50.1, -40.0, 25.5);
    glVertex3f(50.1, -40.0, 25.5);
    glVertex3f(50.1, -40.0, 8.0);
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
void kursi1()
{
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(5.1,-6.0, -30.0);
    glVertex3f(5.1, -10.0, -30.0);
    glVertex3f(5.5, -10.0, -30.0);
    glVertex3f(5.5, -6.0, -30.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(5.1,-6.0, -30.5);
    glVertex3f(5.1, -10.0, -30.5);
    glVertex3f(5.5, -10.0, -30.5);
    glVertex3f(5.5, -6.0, -30.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(5.1,-6.0, -30.0);
    glVertex3f(5.1, -10.0, -30.0);
    glVertex3f(5.1, -10.0, -30.5);
    glVertex3f(5.1, -6.0, -30.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(5.5,-6.0, -30.0);
    glVertex3f(5.5, -10.0, -30.0);
    glVertex3f(5.5, -10.0, -30.5);
    glVertex3f(5.5, -6.0, -30.5);
    glEnd();
}
void kursi()
{
    glPushMatrix();
    kursi1();
    glTranslated(-2,0,0);
    kursi1();
    glTranslated(0,0,-2);
    kursi1();
    glTranslated(2,0,0);
    kursi1();

    glPopMatrix();
    glEnd();
}

void dudukan()
{
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(3.1, -6.0, -32.5);
    glVertex3f(3.1, -6.0, -30.0);
    glVertex3f(5.5, -6.0, -30.0);
    glVertex3f(5.5, -6.0, -32.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(3.1, -2.0, -32.5);
    glVertex3f(3.1, -6.0, -32.5);
    glVertex3f(5.5, -6.0, -32.5);
    glVertex3f(5.5, -2.0, -32.5);
    glEnd();

    //meja
    glBegin(GL_QUADS);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    glVertex3f(1.1, -4.0, -28.0);
    glVertex3f(1.1, -4.0, -24.5);
    glVertex3f(7.5, -4.0, -24.5);
    glVertex3f(7.5, -4.0, -28.0);
    glEnd();
}

void meja1 ()
{
    glBegin(GL_QUADS);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    glVertex3f(7.1, -4.0, -27.5);
    glVertex3f(7.1, -10.0, -27.5);
    glVertex3f(7.5, -10.0, -27.5);
    glVertex3f(7.5, -4.0, -27.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    glVertex3f(7.1, -4.0, -27.5);
    glVertex3f(7.1, -10.0, -27.5);
    glVertex3f(7.1, -10.0, -28.0);
    glVertex3f(7.1, -4.0, -28.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    glVertex3f(7.5, -4.0, -27.5);
    glVertex3f(7.5, -10.0, -27.5);
    glVertex3f(7.5, -10.0, -28.0);
    glVertex3f(7.5, -4.0, -28.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    glVertex3f(7.1, -4.0, -28.0);
    glVertex3f(7.1, -10.0, -28.0);
    glVertex3f(7.5, -10.0, -28.0);
    glVertex3f(7.5, -4.0, -28.0);
    glEnd();
}
void meja ()
{
    glPushMatrix();
    meja1();
    glTranslated(-6,0,0);
    meja1();
    glTranslated(0,0,3);
    meja1();
    glTranslated(6,0,0);
    meja1();

    glPopMatrix();
    glEnd();
}
void tampil(void)
{
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);
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
    tiang_bendera();
    pintu();
    kursi();
    dudukan();
    meja();
    jndl_panjang_garis();
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
        glLoadIdentity();
        gluLookAt(0.0f,0.0f,3.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f);
        glRotatef(xrot,1.0f,0.0f,0.0f);
        glRotatef(yrot,0.0f,1.0f,0.0f);
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
