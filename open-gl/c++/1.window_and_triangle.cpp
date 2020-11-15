#include <GLFW/glfw3.h>

int main(void)
{
  GLFWwindow* window;
  float i = 0.01;

  /* Initialize the library */
  if (!glfwInit())
    return -1;

  /* Create a windowed mode window and its OpenGL context */
  window = glfwCreateWindow(1080, 1080, "Physics", NULL, NULL);
  if (!window)
    {
      glfwTerminate();
      return -1;
    }

  /* Make the window's context current */
  glfwMakeContextCurrent(window);

  /* Loop until the user closes the window */
  while (!glfwWindowShouldClose(window))
    {
      /* Render here */
      glClear(GL_COLOR_BUFFER_BIT);

      i = i * 1.0618;
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.5, -0.5);
      glVertex2f( i,  i);
      glVertex2f( i, 0.5);
      glEnd();

      /* Swap front and back buffers */
      glfwSwapBuffers(window);

      /* Poll for and process events */
      glfwPollEvents();
    }

  glfwTerminate();
  return 0;
}

