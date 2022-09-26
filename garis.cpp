/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void garis() {
glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
glClear (GL_COLOR_BUFFER_BIT);

glPushMatrix ();
glColor3f(0.3,0.6,0.7);
glBegin(GL_LINES);
//glTranslatef(-10.0f, 0.0f, -20.0f);
//glLineWidth(0.0f);

//horizontal
glVertex3f( 0.5f, 0.0f, 0.0f);
glVertex3f( -1.0f, 0.0f, 1.5f);
glEnd();                               // akhir kode untuk menggambar
glFlush();                             // memastikan bahwa kode dieksekusi
}





main(int argc, char** argv) {
glutInit(&argc,argv); //menginisialisasi glut dan memproses commendline yang disertakn (jika ada) ..harus dipanggil pertama kali
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);//menentukan jenis buffer dan atau model pewarnaan
glutInitWindowSize(500,500);//ukuran window
glutInitWindowPosition(0,0);//posisi window ..default (kiri,atas)
glutCreateWindow("GARIS");//identitas window
glClearColor(0.0,0.0,0.0,0.0); //memberi background window
glMatrixMode(GL_PROJECTION);//memberikan nilai matriks atau inisialisasi matriks.
glOrtho(-10,10,1.0,1.0,-1.0,1.0);
glutDisplayFunc(garis);//memanggil fungsi display atau untuk membuat objek primitif.
glutMainLoop();//menandakan pemrosesan glut terjadi.
}
