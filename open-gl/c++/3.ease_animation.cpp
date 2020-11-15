#include <iostream>
#include <GLFW/glfw3.h>
#include <math.h>

typedef struct {
	float x;
	float y;
} Point;

int
main(void)
{
	/* var */
	float velocity = 0.000001;
	float acceleration = 0.000618;
	float size = 40;

	Point loc;
	loc.x = (float)-0.999;
	loc.y = 0;

	float previousDistance = fabs(loc.x);

	GLFWwindow* window;


	/* window */
	if (!glfwInit()) return -1;
	window = glfwCreateWindow(1920, 1080, "Physics", NULL, NULL);
	if (!window) {
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);


	/* loop */
	while (!glfwWindowShouldClose(window)) {
		glClear(GL_COLOR_BUFFER_BIT);


		if (previousDistance < fabs(loc.x))
			velocity *= 1 + acceleration;
		else
			velocity *= 1 - acceleration;

		if (loc.x == -1 || loc.x == 1)
			velocity *= -1.0;


		loc.x += velocity;
		previousDistance = fabs(loc.x) / 2;

		glPointSize(size);
		glBegin(GL_POINTS);
			glColor3f(0.618, 0.618, 0.618);
			glVertex2f(loc.x, loc.y);
		glEnd();

		glPointSize(size / 5);
		glBegin(GL_POINTS);
			glColor3f(0.618, 0.618, 0.618);
			glVertex2f(0, 0);
		glEnd();

		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	glfwTerminate();
	return 0;
}
