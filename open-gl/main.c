#include "current.h"
#define WINDOW_WIDTH 1366
#define WINDOW_HEIGHT 768
#ifndef FPS
#	define FPS 30
#endif
#ifndef WIDTH
#	define WIDTH 1366 - 100
#endif
#ifndef HEIGHT
#	define HEIGHT 768 - 100
#endif

void init(int argc, char** argv, int width, int height, int window_width, int window_height);

int
main(int argc, char** argv)
{
	init(argc, argv, WIDTH, HEIGHT, WINDOW_WIDTH, WINDOW_HEIGHT);

	#ifdef SHOWINFO_EXIST
		showInfo();
	#endif

	#ifdef SETUP_EXIST
		setup();
	#endif

	glutDisplayFunc(draw);

	#ifdef KEYBOARD_EXIST
		glutKeyboardFunc(keyboard);
	#endif

	glutMainLoop();
}

void
init(int argc,
	  char** argv,
	  int width,
	  int height,
	  int window_width,
	  int window_height)
{
	glutInit(&argc, argv);
	glutInitWindowSize(width, height);
	glutInitWindowPosition(window_width / 2 - width / 2,
								  window_height / 2 - height / 2);
	glutCreateWindow("MyDraw");
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glColor3d(1, 1, 1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-WIDTH / 2, WIDTH / 2, -HEIGHT / 2, HEIGHT / 2);
}
