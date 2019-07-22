#include <GL/glut.h>

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
   glutCreateWindow("My Draw");
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   glColor3d(1, 1, 1);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(-1000, 1000, -1000, 1000);
}
