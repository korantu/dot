#include <stdio.h>

#include <GL/glfw.h>

/*
Testing ground for GLFW.
 */

int main(){
  printf("As simple as possible, but not simpler.\n");

  if( ! glfwInit() ) {
    printf("GLFW init failed.");
    glfwTerminate();
    return 0;
  }
  
  if( ! glfwOpenWindow(300,300,
		       0,0,0,0,0,0,
		       GLFW_WINDOW)){
    printf("Failed to open window.");
    glfwTerminate();
    return 1;
  }
  

  while( glfwGetKey( GLFW_KEY_ESC ) != GLFW_PRESS ){
    glfwSleep(0.1);
    glfwSwapBuffers();
  }

  glfwCloseWindow();

  glfwTerminate();

  return 0;
}
