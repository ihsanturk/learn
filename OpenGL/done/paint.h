/*
 * paint.h
 */

/* prototype / table of code */
/* vars */
void setup();
void draw();
/* main */
void showKeyInfo();
void keyboard(unsigned char, int, int);


/* GLOBAL VAR */
int WINDOW_WIDTH = 1366;
int WINDOW_HEIGHT  = 768;
int WIDTH = 700;
int HEIGHT = 700;

float PRECISENESS = 0.01;

void
draw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
}


void
showKeyInfo()
{

}

void
keyboard(unsigned char key, int x, int y)
{

}

int
main()
{
	showkeyInfo();
	init(argc, argv, WIDTH, HEIGHT, WINDOW_WIDTH, WINDOW_HEIGHT);

	glutDisplayFunc(draw);
	glutKeyboardFunc(keyboard);

	glutMainLoop();
}

