#include "template.h"
#include <stdio.h>
#include <math.h>
#ifndef M_PI
#  define M_PI 3.14159265358979323846
#endif

/* var */
int WINDOW_WIDTH = 1366;
int WINDOW_HEIGHT  = 768;

int WIDTH = 700;
int HEIGHT = 700;

int x;
int y;

int i;
float j;
float k;
float speed = M_PI;
float velocity = 1e-4;
float acceleration = 1e-6;

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
   /* main loop */
   while (speed > 0.001) {
      glClear(GL_COLOR_BUFFER_BIT);
      glBegin(GL_POINTS);

      speed -= velocity;
      velocity += acceleration;

      /* coordinate plane */
      glColor3f(0.2, 0.2, 0.2);
      for (i = -HEIGHT; i < HEIGHT; i += 1) {
         glVertex2i(i, 0);
         glVertex2i(0, i);
      }

      /* circle */
      glColor3f(0.9, 0.9, 0.9);
      for (j = 0; j < 2 * M_PI; j += speed) {
         x = cos(j) * 250;
         y = sin(j) * 250;
         glVertex2i(x, y);
      }

      glEnd();
      /* printf("Done"); */
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
