/*
 * coordinate_plane.h
 */
#include <GL/glut.h>
#include <stdio.h>
#define WIDTH 1366 * 0.8
#define HEIGHT 768 * 0.8

void coordinatePlane(float, float, float, float);

float SCALE = 100;

float x;
float y;

float PRECISENESS = 0.5;

#define SETUP_EXIST
void
setup()
{
	glPointSize(3.0);
	glLineWidth(3.0);
}

int key = 0;

void
draw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	coordinatePlane(SCALE , 0.3, 0.9, 0.4);

	/* test graph */
	for (x = 0; x < 10; x += PRECISENESS) {

		y = x * x;

		glBegin(GL_LINES);

		/* +x^2 */
		glVertex2f(x * SCALE, y * SCALE);
		x += PRECISENESS;
		glVertex2f(x * SCALE, y * SCALE);

		x -= PRECISENESS;

		/* -x^2 */
		glVertex2f(-x * SCALE, -y * SCALE);
		x += PRECISENESS;
		glVertex2f(-x * SCALE, -y * SCALE);

		x -= PRECISENESS;

		glEnd();
		glFlush();
	}
}


void
coordinatePlane(float scale, float r, float g, float b)
{
	float i = 0;
	glColor3f(0.2, 0.2, 0.2);

	glBegin(GL_LINES);
		glVertex2f(-WIDTH / 2, 0);
		glVertex2f(+WIDTH / 2, 0);
		glVertex2f(0, -HEIGHT / 2);
		glVertex2f(0, +HEIGHT / 2);
	glEnd();

	glPointSize(SCALE / 15);
	glColor3f(0.4, 0.4, 0.4);
	for (i = scale; i < WIDTH; i += scale) {
		glBegin(GL_POINTS);

		glVertex2f(i, 0);
		glVertex2f(-i, 0);

		glEnd();
	}

	for (i = scale; i < HEIGHT; i += scale) {
		glBegin(GL_POINTS);

		glVertex2f(0, i);
		glVertex2f(0, -i);

		glEnd();
	}

	glColor3f(r, g, b);
	glFlush();
}

#define KEYBOARD_EXIST
void
keyboard(unsigned char key, int x, int y)
{
	switch(key) {
		case 'l':
			if (PRECISENESS > 0.1) {
				PRECISENESS *= 0.95;
				draw();
			}
			break;
		case 'h':
			if (PRECISENESS < 4) {
				PRECISENESS *= 1.05;
				draw();
			}
			break;
		case 'j':
			if (SCALE > 10) {
				SCALE *= 0.8;
				draw();
			}
			break;
		case 'k':
			if (SCALE < 1000) {
				SCALE *= 1.2;
				draw();
			}
			break;
		case 'q':
			exit(0);
			break;
		case 27:
			exit(0);
			break;
	}
}
