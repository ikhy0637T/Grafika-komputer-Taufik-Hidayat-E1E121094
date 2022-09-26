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

void poligon (void)
{
glClear(GL_COLOR_BUFFER_BIT);
//Gambar segitiga sama sisi berwarna biru
glColor3f(1,0,1);
glBegin(GL_TRIANGLES);
glVertex2f(-0.4,-0.9);
glVertex2f(0.4,-0.9);
glVertex2f(0.0,-0.1);
glEnd();
glFlush();
glutSwapBuffers();
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
glutDisplayFunc(poligon);//memanggil fungsi display atau untuk membuat objek primitif.
glutMainLoop();//menandakan pemrosesan glut terjadi.
}
