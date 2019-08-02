/*
 * preciseness_of_graph.h
 */
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#define WIDTH 1366 * 0.8
#define HEIGHT 768 * 0.8
#define FPS 30

void coordinatePlane(float, float, float);
void tangent(float);

int i = 0;
float x = 0;
float y = 0;
int SCALE = 10;
float PRECISENESS;

#define SETUP_EXIST
void
setup()
{
	glPointSize(4.0);
	glLineWidth(4.0);
}

void
draw()
{
	printf("\rPRECISENESS: 0.00000");
	for (PRECISENESS = 2; PRECISENESS >= 1e-2; PRECISENESS -= 1e-3) {
		glClear(GL_COLOR_BUFFER_BIT);

		coordinatePlane(0.4, 0.6, 0.4);
		tangent(PRECISENESS);

		printf("\b\b\b\b\b\b\b%.5f", PRECISENESS);
		glFlush();
	}
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

void
tangent(float preciseness)
{
	for (x = -WIDTH; x < +WIDTH; x += preciseness) {
		glBegin(GL_LINES);
			glVertex2f(SCALE * (x - preciseness), SCALE * tan(x - preciseness));
			glVertex2f(SCALE * (x + preciseness), SCALE * tan(x + preciseness));
		glEnd();
	}
}
