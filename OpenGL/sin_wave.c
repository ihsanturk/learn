#include "template.h"
#include <stdio.h>
#include <math.h>

/* var */
int WINDOW_WIDTH = 1366;
int WINDOW_HEIGHT  = 768;

int WIDTH = 700;
int HEIGHT = 700;

void
setup()
{
	glutInitWindowSize(WIDTH, HEIGHT);
	glClearColor(0.0, 0.0, 0.0, 1.0); /* r,g,b,a */
	glPointSize(2.0);
}

/* ============================================================ */

void
show()
{
	float x;
	float i;
	int scale = 200;

	while (1) {
		i -= 5;
		glClear(GL_COLOR_BUFFER_BIT);
		glBegin(GL_POINTS);

		/* graph */
		glColor3f(0.9, 0.9, 0.9);
		for (x = -WIDTH; x < WIDTH; x += 0.01)
			glVertex2i(scale * x + i, scale * sin(x));

		glEnd();
		glFlush();
	}
}

/* ============================================================ */

int
main(int argc, char** argv)
{
	init(argc, argv, WIDTH, HEIGHT, WINDOW_WIDTH, WINDOW_HEIGHT);
	setup();
	glutDisplayFunc(show);
	glutMainLoop();
}
