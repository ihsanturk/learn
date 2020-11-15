/*
 * understanding_view_angles.h
 */
#include <GL/glut.h>
#include <math.h>
#ifndef M_PI
#  define M_PI 3.14159265358979323846
#endif

#define WIDTH 400
#define HEIGHT 400
#define FPS 30

float i = 0;
float j = 0;
float SCALE = 1;

#define SETUP_EXIST
void
setup()
{
	glPointSize(2.0f);
}

void
draw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	for (i = 0.3; i < 1; i += 0.0001) {
		glBegin(GL_POINTS);

		for (j = 0; j < 2 * M_PI; j += 0.1)
			glVertex2f(SCALE * cos(j), SCALE * sin(j));

		glEnd();

		gluOrtho2D(-i, i, -i, i);
		i += 0.001;
		glFlush();
	}
}

#define KEYBOARD_EXIST
void
keyboard(unsigned char key, int x, int y)
{
	switch(key) {
		case 'q':
			exit(0);
			break;
	}
}
