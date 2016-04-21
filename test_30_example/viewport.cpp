#include <GL/glut.h>

void display(void)
{
    glViewport(30,30,100,100);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glVertex2f(-1.0,-1.0);
    glVertex2f(-1.0,1.0);

    glVertex2f(-1.0,1.0);
    glVertex2f(1.0,1.0);

    glVertex2f(1.0,1.0);
    glVertex2f(1.0,-1.0);

    glVertex2f(1.0,-1.0);
    glVertex2f(-1.0,-1.0);
    glEnd();
    glViewport(50,50,200,200);
    glBegin(GL_LINES);
    glVertex2f(-1.0,-1.0);
    glVertex2f(-1.0,1.0);

    glVertex2f(-1.0,1.0);
    glVertex2f(1.0,1.0);

    glVertex2f(1.0,1.0);
    glVertex2f(1.0,-1.0);

    glVertex2f(1.0,-1.0);
    glVertex2f(-1.0,-1.0);
    glEnd();
    glFlush();

    return;
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(300, 300);
    glutCreateWindow("OpenGL 3D View");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
