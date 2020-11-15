#include <iostream>
#include <GLFW/glfw3.h>

typedef struct {
  float x;
  float y;
} Point;

int
main(void)
{
  /* var */
  float velocity = 0.0000001;
  float size = 30;

  Point loc;
  loc.x = -1;
  loc.y = 0;

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
    glPointSize(size);

    if (loc.x >= -1 && loc.x < 1) // -1 o----------o -1
      velocity *= 1.0000618;
    else
      velocity *= -1.0;
    loc.x += velocity;

    glBegin(GL_POINTS);
      glColor3f(0.618, 0.618, 0.618);
      glVertex2f(loc.x, loc.y);
    glEnd();
    glfwSwapBuffers(window);
    glfwPollEvents();
  }
  glfwTerminate();
  return 0;
}
