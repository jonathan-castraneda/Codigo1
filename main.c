/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: jcast
 *
 * Created on 26 de abril de 2023, 04:56 PM
 */

#include "codigos.h"
#include <stdio.h>
#include <stdlib.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include<GL/freeglut.h>

/*
 * 
 */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Codigos");
    glClearColor(1,1,1, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(0,600,0,600);
    glutDisplayFunc(codigoCohenSutherland);
    glutMainLoop();
    
    
    return (EXIT_SUCCESS);
}

