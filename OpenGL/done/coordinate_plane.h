/*
 * coordinate_plane.h
 */
#include <GL/glut.h>
#include <stdio.h>
#define WIDTH 1366 * 0.8
#define HEIGHT 768 * 0.8

void coordinatePlane(float, float, float, float);
void updateInfo();

int i = 0;
float j = 0;
float SCALE = 200;

float x;
float y;
float r = 1;


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
	coordinatePlane(SCALE , 0.7, 1.0, 0.7);

	glBegin(GL_POINTS);
	glVertex2f(1 * SCALE, 0);
	glEnd();
	glFlush();
}


void
coordinatePlane(float scale, float r, float g, float b)
{
	glColor3f(0.2, 0.2, 0.2);

	glBegin(GL_LINES);
		glVertex2f(-WIDTH / 2, 0);
		glVertex2f(+WIDTH / 2, 0);
		glVertex2f(0, -HEIGHT / 2);
		glVertex2f(0, +HEIGHT / 2);
	glEnd();

	glPointSize(SCALE / 22);
	glColor3f(0.4, 0.4, 0.4);
	for (i = 0; i < WIDTH; i += scale) {
		glBegin(GL_POINTS);

		glVertex2f(i, 0);
		glVertex2f(-i, 0);

		glEnd();
	}

	for (i = 0; i < HEIGHT; i += scale) {
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
		case 'j':
			if (SCALE > 70)
				SCALE -= 5;

			updateInfo();
			draw();
			break;
		case 'k':
			if (SCALE < 300)
				SCALE += 5;

			updateInfo();
			draw();
			break;
		case 'q':
			exit(0);
			break;
		case 27:
			exit(0);
			break;
	}
}

void
updateInfo()
{
	printf("\rSCALE = %f", SCALE);
}
