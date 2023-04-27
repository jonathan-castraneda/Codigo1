/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   codigo1.c
 * Author: jcast
 *
 * Created on 26 de abril de 2023, 05:38 PM
 */

#include "codigos.h"
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/freeglut.h>

void codigoLinea() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 1);
    glRasterPos2d(0.5, 0.5);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_10, "Codigo de Lineas");
    glFlush();
}

void codigoCirculo() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 1);
    glRasterPos2d(0.5, 0.5);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_10, "Codigo de Circulos");
    glFlush();
}

void codigoCohenSutherland() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 1);
    glRasterPos2d(0.5, 0.5);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_10, "Codigo de Cohen Sutherland");
    glFlush();
}

void codigoSutherlandHodgeman() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 1);
    glRasterPos2d(0.5, 0.5);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_10, "Codigo de Sutherland Hodgeman");
    glFlush();
}