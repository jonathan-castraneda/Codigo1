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
#include <math.h>

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
    //Variables de los puntos de la línea
    float x1 = 5, y1 = 600, x2 = 550, y2 = 5;
    int minw = 200, maxw = 400;
    float pendiente = 0;
    //Genera las lineas para visualizar los nueve campos
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    for (int i = 200; i < 600; i += 200) {
        glVertex2f(i, 0);
        glVertex2f(i, 600);
        glVertex2f(0, i);
        glVertex2f(600, i);
    }
    glEnd();
    //CODIGO para generar la linea
    pendiente = (y2 - y1) / (x2 - x1);
    //PARA X1 Y Y1
    //Arriba
    if (y1 > maxw) {
        x1 = (maxw + (pendiente * x1) - y1) / pendiente;
        y1 = maxw;
    }
    //Abajo
    if (y1 < minw) {
        x1 = (minw + (pendiente * x1) - y1) / pendiente;
        y1 = minw;
    }
    //Izquierda
    if (x1 < minw) {
        y1 = (pendiente * (minw - x1)) + y1;
        x1 = minw;
    }
    //Derecha
    if (x1 > maxw) {
        y1 = (pendiente * (maxw - x1)) + y1;
        x1 = maxw;
    }
    //PARA X2 Y Y2
    //Arriba
    if (y2 > maxw) {
        x2 = (maxw + (pendiente * x2) - y2) / pendiente;
        y2 = maxw;
    }
    //Abajo
    if (y2 < minw) {
        x2 = (minw + (pendiente * x2) - y2) / pendiente;
        y2 = minw;
    }
    //Izquierda
    if (x2 < minw) {
        y2 = (pendiente * (minw - x2)) + y2;
        x2 = minw;
    }
    //Derecha
    if (x2 > maxw) {
        y2 = (pendiente * (maxw - x2)) + y2;
        x2 = maxw;
    }
    
    
    glColor3f(1, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glEnd();

    glFlush();
}

void codigoSutherlandHodgeman() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 1);
    glRasterPos2d(0.5, 0.5);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_10, "Codigo de Sutherland Hodgeman");
    glFlush();
}