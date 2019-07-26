/*
 * build_circle.h
 */

#include <stdio.h>
#include <math.h>
#ifndef M_PI
#  define M_PI 3.14159265358979323846
#endif

/* Var */
#define WIDTH 700
#define HEIGHT 700

int x;
int y;

int i;
float j;
float k;
float speed = M_PI;
float velocity = 1e-4;
float acceleration = 1e-6;

#define SETUP_EXIST
void
setup()
{
   glPointSize(2.0);
}

void
draw()
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
      glFlush();
   }
}
