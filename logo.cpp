#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(-1.0f,0.0f);
    glVertex2f(1.0f,0.0f);

    glVertex2f(0.0f,-1.0f);
    glVertex2f(0.0f,1.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.7f,0.8f);
    glVertex2f(0.01f,-0.01f);
    glVertex2f(0.99f,-0.01f);

    glVertex2f(0.99f,-0.99f);
    glVertex2f(0.01f,-0.99f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.3f,-0.2f);
    glVertex2f(0.7f,-0.2f);
    glVertex2f(0.9f,-0.4f);
    glVertex2f(0.9f,-0.7f);
    glVertex2f(0.7f,-0.9f);
    glVertex2f(0.3f,-0.9f);
    glVertex2f(0.1f,-0.7f);
    glVertex2f(0.1f,-0.4f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.3f,-0.25f);
    glVertex2f(0.7f,-0.25f);
    glVertex2f(0.85f,-0.43f);
    glVertex2f(0.85f,-0.7f);
    glVertex2f(0.7f,-0.83f);
    glVertex2f(0.3f,-0.83f);
    glVertex2f(0.15f,-0.7f);
    glVertex2f(0.15f,-0.43f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.20f,-0.7f);
    glVertex2f(0.20f,-0.43f);
    glVertex2f(0.3f,-0.33f);
    glVertex2f(0.3f,-0.80f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.80f,-0.7f);
    glVertex2f(0.80f,-0.43f);
    glVertex2f(0.70f,-0.33f);
    glVertex2f(0.70f,-0.80f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.3f,-0.33f);
    glVertex2f(0.35f,-0.33f);
    glVertex2f(0.35f,-0.36f);
    glVertex2f(0.3f,-0.36f);
    glVertex2f(0.3f,-0.40f);
    glVertex2f(0.35f,-0.40f);
    glVertex2f(0.35f,-0.43f);


    glVertex2f(0.35f,-0.82f);
    glVertex2f(0.33f,-0.82f);
    glVertex2f(0.35f,-0.80f);
    glVertex2f(0.3f,-0.80f);


    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.5f,-0.40f);
    glVertex2f(0.80f,-0.43f);
    glVertex2f(0.70f,-0.33f);
    glVertex2f(0.70f,-0.80f);

    glEnd();











     glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
