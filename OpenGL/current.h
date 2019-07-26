/*
 * coordinate_plane.c
 */
#include <GL/glut.h>
#define WIDTH 1366 * 0.8
#define HEIGHT 768 * 0.8

void coordinatePlane(float, float, float);

int i = 0;
float j = 0;

#define SETUP_EXIST
void
setup()
{
	glPointSize(3.0);
	glLineWidth(3.0);
}

void
draw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	coordinatePlane(1.0, 1.0, 1.0);

	glFlush();
}

void
coordinatePlane(float r, float g, float b)
{
	glColor3f(0.2, 0.2, 0.2);
	glBegin(GL_LINES);
		glVertex2f(-WIDTH, 0);
		glVertex2f(+WIDTH, 0);
		glVertex2f(0, -HEIGHT);
		glVertex2f(0, +HEIGHT);
	glEnd();
	glColor3f(r, g, b);
}
