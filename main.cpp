//// Final Project
//// Name: William Fulton
//// NetID: wf119

#include <vector>

#include <string>

#include <cstdlib>

#include <iostream>

#include <fstream>

#include <GL/glew.h>

#include <GLFW/glfw3.h>

#include <GLUT/glut.h>

using namespace std;






void renderShape(void)
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_CLEAR_BUFFER);
    
    
// Yellow 1
    glBegin(GL_TRIANGLES);
    {
        
        glColor3f(1.0, 1.0, 0.0); // left
        glVertex2f(-0.2, .3);
        
        glColor3f(1.0, 1.0, 0.0); // right
        glVertex2f(-0.2, -.2);
        
        glColor3f(1.0, 1.0, 1.0); // middle
        glVertex2f(.2, .3);
        
    }
    
// Yellow 2
    glBegin(GL_TRIANGLES);
    {
        
        glColor3f(1.0, 1.0, 0.0); // left
        glVertex2f(-0.2, -.2);
        
        glColor3f(1.0, 1.0, 0.0); // right
        glVertex2f(0.2, -.2);
        
        glColor3f(1.0, 1.0, 1.0); // middle
        glVertex2f(.2, .3 );
        
    }
    glEnd();
    
    
// Blue 1
    glBegin(GL_TRIANGLES);
    {
        
        glColor3f(1.0, 1.0, 1.0); // left
        glVertex2f(0.2, .3);
        
        glColor3f(0.0, 1.0, 1.0); // right
        glVertex2f(.3, .425);
        
        glColor3f(0.0, 1.0, 1.0); // middle
        glVertex2f(.2, -.2);
        
    }
    glEnd();
    
// Blue 2
    glBegin(GL_TRIANGLES);
    {
        
        glColor3f(0.0, 1.0, 1.0); // left
        glVertex2f(0.2, -.2);
        
        glColor3f(0.0, 0.0, 0.1); // right
        glVertex2f(0.3, 0);
        
        glColor3f(0.0, 1.0, 1.0); // middle
        glVertex2f(.3, .425 );
        
    }
    glEnd();
    
    
    
    
// Red 1
    glBegin(GL_TRIANGLES);
    {
        
        glColor3f(1.0, 0.0, 0.0); // left
        glVertex2f(-0.2, .3);
        
        glColor3f(0.1, 0.0, 0.0); // right
        glVertex2f(-.1, .425);
        
        glColor3f(1.0, 0.0, 0.0); // middle
        glVertex2f(.3, .424 );
        
    }
    glEnd();
// Red 2
    glBegin(GL_TRIANGLES);
    {
        
        glColor3f(1.0, 0.0, 0.0); // left
        glVertex2f(-0.2, .3);
        
        glColor3f(1.0, 1.0, 1.0); // right
        glVertex2f(.2, .3);
        
        glColor3f(1.0, 0.0, 0.0); // middle
        glVertex2f(.3, .425 );
        
    }
    glEnd();
    
    
    
    
    
// Line (Yellow/Red)
    glBegin(GL_LINES);
    {
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-.2, .3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(.2, .3);
        
        

    }
    
    glEnd();
    
// Line (Yellow/Blue)
    glBegin(GL_LINES);
    {
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(.2, .3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(.3, .425);
        
        
        
    }
    
    glEnd();
// Line (Red/Blue)
    
    glBegin(GL_LINES);
    {
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(.2, .3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(.2, -.2);
        
        
        
    }
    
    glEnd();
    
    
    
    
// - - - - - - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - - - -

    
    
// Top Middle
    glBegin(GL_TRIANGLES);
    {
        
        glColor3f(0.2, .75, 0.0); // Top lower left
        glVertex2f(-0.8, 0.0);
        
        glColor3f(.7, 1.0, .7); // Top middle
        glVertex2f(-0.7, .8);
        
        glColor3f(0.0, 0.4, 0.0); // Top lower right
        glVertex2f(-.6, .0);
        
    }
    glEnd();
    
// Top Right
    glBegin(GL_TRIANGLES);
    {
        
        glColor3f(.5, .8, .5); // Right top middle
        glVertex2f(-0.7, 0.8);
        
        glColor3f(0.05, .3, 0.0); // Right lower left
        glVertex2f(-0.6, .0);
        
        glColor3f(0.2, .5, 0.0); // Right lower right
        glVertex2f(-.525, .0);
        
    }
    glEnd();
    
// Top Left
    glBegin(GL_TRIANGLES);
    {
        
        glColor3f(.7, 1.0, .7); // Left top middle
        glVertex2f(-0.7, 0.8);
        
        glColor3f(0.2, .55, 0.0); // Left bottom right
        glVertex2f(-0.8, .0);
        
        glColor3f(.6, 1, .6); // Left bottom left
        glVertex2f(-.875, .0);
        
    }
    glEnd();
    
    
// Bottom Middle
    glBegin(GL_TRIANGLES);
    {
        
        glColor3f(0.2, .6, 0.0); // bottom left
        glVertex2f(-0.8, 0.0);
        
        glColor3f(.5, .8, .5); // middle top
        glVertex2f(-0.7, -.8);
        
        glColor3f(0.0, .4, 0.0); // bottom right
        glVertex2f(-.6, .0);
        
    }
    glEnd();
    
    
// Bottom Right
    glBegin(GL_TRIANGLES);
    {
        
        glColor3f(.3, .6, .3); // right top
        glVertex2f(-0.7, -0.8);
        
        glColor3f(0.03, .1, 0.0); // right bottom left
        glVertex2f(-0.6, .0);
        
        glColor3f(0.0, .5, 0.0); // right bottom right
        glVertex2f(-.525, .0);
        
    }
    glEnd();
    
    
// Bottom Left
    glBegin(GL_TRIANGLES);
    {
        
        glColor3f(.5, .8, .5); // left top
        glVertex2f(-0.7, -0.8);
        
        glColor3f(0.0, .3, 0.0); // left bottom right
        glVertex2f(-0.8, .0);
        
        glColor3f(.3, .8, .3); // left bottom left
        glVertex2f(-.875, .0);
        
    }
    glEnd();

 
    
    
    
    
// - - - - - - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - - - -
    


    
    
}


int main()
{

    GLFWwindow *window;
    
    if(!glfwInit())
    {
        return -1;
    }
    // Determine size and title of window
    window = glfwCreateWindow(1024, 600, "Final Project", NULL, NULL);
    if(!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    // Make window
    glfwMakeContextCurrent(window);
    
    while (!glfwWindowShouldClose(window))
    {
        // Call rendering function

        renderShape();

        
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    exit(EXIT_SUCCESS);
    
    return 0;
    
    
    
}


