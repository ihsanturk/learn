#include <stdio.h>
#include "template.h"
#include <math.h>

/* prototype / table of code */

/* variables */
void draw();
void showkeyInfo();
void keyboard(unsigned char, int, int);
/* main */


/* ============================================================ */


/* GLOBAL VAR */
int WINDOW_WIDTH = 1366;
int WINDOW_HEIGHT  = 768;
int WIDTH = 700;
int HEIGHT = 700;

float x;
float y;

float PRECISENESS = 0.01;

float SHIFT_X = 0;
float SHIFT_Y = 0;

float SHIFT_FACTOR = 30;
float SCALE = 80;

void
draw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);

	/* coordinate plane */
	glColor3f(0.2, 0.2, 0.2);
	for (x = -HEIGHT; x <= HEIGHT; x += PRECISENESS)
		glVertex2i(0 + SHIFT_X, SCALE *  x + SHIFT_Y);
	for (x = -WIDTH; x <= WIDTH; x += PRECISENESS)
		glVertex2i(SCALE * x + SHIFT_X, 0 + SHIFT_Y);


	/* sinus graph */
	glColor3f(0.6, 0.6, 0.9);
	for (x = -WIDTH; x < WIDTH; x += PRECISENESS) {
		y = sin(x);
		glVertex2i(SCALE * x + SHIFT_X, SCALE * y + SHIFT_Y);
	}

	/* secand (1/sin) graph */
	glColor3f(0.9, 0.9, 0.6);
	for (x = -WIDTH; x < WIDTH; x += PRECISENESS) {
		y = 1/sin(x);
		glVertex2i(SCALE * x + SHIFT_X, SCALE * y + SHIFT_Y);
	}

	/* tan graph */
	glColor3f(0.2, 0.2, 0.9);
	for (x = -WIDTH; x < WIDTH; x += PRECISENESS) {
		y = tan(x);
		glVertex2i(SCALE * x + SHIFT_X, SCALE * y + SHIFT_Y);
	}

	glEnd();
	glFlush();
	glutSwapBuffers();
}

void
showkeyInfo()
{
	printf("\n");
	printf("Exit        : [q] / [esc]\n");
	printf("Speed       : + [K] - [J]\n");
	printf("Scale       : + [x] - [z]\n");
	printf("Preciseness : + [L] - [H]\n\n");

	printf("Navigation:\n");
	printf("  Left  : [h]\n");
	printf("  Down  : [j]\n");
	printf("  Up    : [k]\n");
	printf("  Right : [l]\n\n");

	printf("  Reset : [0] (Zero)\n");
}

void
keyboard(unsigned char key, int x, int y)
{
	switch(key) {
		case 27:
			exit(0);
			break;
		case 'q':
			exit(0);
			break;
		case 'h':
			SHIFT_X += SHIFT_FACTOR;
			draw();
			break;
		case 'l':
			SHIFT_X -= SHIFT_FACTOR;
			draw();
			break;
		case 'j':
			SHIFT_Y += SHIFT_FACTOR;
			draw();
			break;
		case 'k':
			SHIFT_Y -= SHIFT_FACTOR;
			draw();
			break;
		case '0':
			SHIFT_X = 0;
			SHIFT_Y = 0;
			draw();
			break;
		case 'H':
			PRECISENESS += 0.005;
			draw();
			break;
		case 'L':
			PRECISENESS -= 0.005;
			draw();
			break;
		case 'K':
			SHIFT_FACTOR += 5;
			draw();
			break;
		case 'J':
			SHIFT_FACTOR -= 5;
			draw();
			break;
		case 'z':
			SCALE *= 0.9;
			draw();
			break;
		case 'x':
			SCALE *= 1.1;
			draw();
			break;
	}
}


int
main(int argc, char** argv)
{
	showkeyInfo();
	init(argc, argv, WIDTH, HEIGHT, WINDOW_WIDTH, WINDOW_HEIGHT);

	glutDisplayFunc(draw);
	glutKeyboardFunc(keyboard);

	glutMainLoop();
}
