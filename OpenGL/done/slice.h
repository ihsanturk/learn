 /*
  * slice.h
  */
#include <GL/glut.h>
#define WIDTH 300
#define HEIGHT 300

void slice(int, int);

int line = 0;

void
draw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);
	slice(3, 3);
}

void
slice(int horizontal, int vertical)
{
	float partition = 0.0f;
	glBegin(GL_LINES);

	for (line = 1; line < horizontal; line++) {
		partition = WIDTH / horizontal;
		glVertex2f(-WIDTH, -WIDTH / 2 + partition * line);
		glVertex2f(+WIDTH, -WIDTH / 2 + partition * line);
	}
	for (line = 1; line < vertical; line++) {
		partition = HEIGHT / vertical;
		glVertex2f(-WIDTH / 2 + partition * line, -HEIGHT);
		glVertex2f(-WIDTH / 2 + partition * line, +HEIGHT);
	}

	glEnd();
	glFlush();
}
