// moving backword // disc2
//yara adel hassan 19100683
//bassant yasser abdelsalam 19102749
// 3d project
#include <GL/glu.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include<iostream>
using namespace std ;
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include<MMsystem.h>
#include<stdio.h>
float alphaX =-200 ; // far
float down = 10 ;
float snow =0 ;
void Keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
        case 'a': down=10 ; ;break;
        case 's' : snow = 2 ; break ;
        case 'd' : snow = 0 ; break ;
    }

    glutPostRedisplay();
}


void snowman(){


    glColor3f (1, 1, 1);              // white ball
    glPushMatrix ();
     glRotatef       (0+snow, 0,0,1);// for the key boered
       glTranslatef    (7, -5.5, -8); // last ball

       glutSolidSphere (1.0, 40, 30);
    glPopMatrix ();


      glPushMatrix ();
       glRotatef       (0+snow, 0,0,1);// middle ball
       glTranslatef    (7 ,-4, -8);
       glutSolidSphere (0.7, 40, 30);
    glPopMatrix ();

    glColor3f (1, 1, 1);
    glPushMatrix ();
     glRotatef       (0+snow, 0,0,1);// first ball
    glTranslatef    (7, -2.8,-8);
       glutSolidSphere (0.6, 40, 30);
glPopMatrix ();


    glColor3f (0, 0, 0);  //right_eye
     glPushMatrix ();
      glRotatef       (0+snow, 0,0,1);
      glTranslatef    (6.9, -2.5, -6.8);
       glutSolidSphere (0.12, 40, 30);
    glPopMatrix ();


    glColor3f (0, 0, 0);  //left_eye
     glPushMatrix ();
      glRotatef       (0+snow, 0,0,1);
      glTranslatef    (6.5, -2.5, -6.8);
       glutSolidSphere (0.12, 40, 30);
    glPopMatrix ();

     glColor3f (1, 0,0 )  ;   // the nose
     glPushMatrix ();
      glRotatef       (0+snow, 0,0,1);
      glTranslatef    (6.7, -2.8, -6.8);
       glutSolidCone (0.11, 0.5,  40, 30); // base height slices stacks
    glPopMatrix ();







}
void House1 (){

      glPushMatrix ();
         glColor3f( 0.275, 0.510, 0.70);//right middle //  light blue
       glTranslatef    (6, -1, -10);
      glutSolidCube (4); // size
      glPopMatrix ();

      glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the door
        glVertex3f(  3.9, -3 , -10  ) ;
        glVertex3f(3.9 , -3 , -9 ) ;   // x
        glVertex3f( 3.9 , -1.5 , -9 ) ;
        glVertex3f( 3.9 , -1.5, -10 ) ;

   glEnd();

    glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the LEFT  up window// beige
        glVertex3f(  3.7, 0 , -10 ) ;
        glVertex3f(3.7 , 0 , -9 ) ;
        glVertex3f( 3.7 , 0.5 ,-9 ) ;
        glVertex3f( 3.7 , 0.5, -10 ) ;

   glEnd();


    glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the right up window // beige
        glVertex3f(  3.7, 0 , -8) ;
        glVertex3f(3.7 , 0 , -7 ) ;
        glVertex3f( 3.7 , 0.5 ,-7 ) ; // to me
        glVertex3f( 3.7 , 0.5, -8 ) ;   // to me

   glEnd();


    glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the LEFT  down window// beige
        glVertex3f(  3.7, -1, -10 ) ;
        glVertex3f(3.7 , -1 , -9 ) ;
        glVertex3f( 3.7 , -0.5 ,-9 ) ;
        glVertex3f( 3.7 , -0.5, -10 ) ;

   glEnd();


    glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the right window// beige
        glVertex3f(  3.7, -1 , -8) ;
        glVertex3f(3.7 , -1 , -7 ) ;     // right down
        glVertex3f( 3.7 , -0.5 ,-7 ) ;
        glVertex3f( 3.7 , -0.5, -8 ) ;

   glEnd();




}

void gift1(){

glPushMatrix ();
      glColor3f ( 1, 0, 0);     // right middle
      glTranslatef    (2, -2+down, -9.2);
      glScaled(1,1.2,1) ;
      glutSolidCube (0.5);
      glPopMatrix ();

       glPushMatrix ();  //circle 1  up left
      glColor3f ( 1, 1, 1);     //the box decoration
      glTranslatef    (2, -1.8+down, -9);
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();

      glPushMatrix ();  // circle 2 down
      glColor3f ( 1, 1, 1);//the box decoration
      glTranslatef    (1.8, -1.9+down, -9);
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();

      glPushMatrix (); // circle3  up right
      glColor3f ( 1, 1, 1);//the box decoration
      glTranslatef    (2, -2+down, -9);
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();

       glPushMatrix ();
      glColor3f ( 1, 0, 1);     // left ballon
      glTranslatef    (1.8, -1+down, -9.2);
      glScaled(0.5,1,1) ; // scaling from x to make it oval shaped
      glutSolidSphere (0.3, 30 ,40); // radius   // slices and stacks  in order to be filled not wired
      glPopMatrix ();

      glBegin(GL_LINES) ;  // thread 1 for left ballon
      glVertex3f(1.82,-1+down,-9.2);
      glVertex3f(2,-2+down,-9.2);
      glEnd();

       glPushMatrix ();
      glColor3f ( 0, 0, 0);     //right ballon
      glTranslatef    (2.1, -1+down, -9.2);
      glScaled(0.5,1,1) ;// scaling from x to make it oval shaped
      glutSolidSphere (0.3, 30 ,40); // radius   // slices and stacks  in order to be filled not wired
      glPopMatrix ();

      glBegin(GL_LINES) ;// thread 2 for right ballon
      glVertex3f(2.2,-1+down,-9.2);
      glVertex3f(1.88,-2+down,-9.2);
      glEnd();
}
void House2 (){

    glPushMatrix ();
      glColor3f ( 0.275, 0.510, 0.70);     //first right

      glTranslatef    (6, -1, 5);
      glScaled(1,1.2,1) ;
      glutSolidCube (4);
      glPopMatrix ();

glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the door
        glVertex3f(  3.5, -3 , 6  ) ;
        glVertex3f(3.5 , -3 , 7 ) ;
        glVertex3f( 3.5 , -1.5 , 7 ) ; // to me
        glVertex3f( 3.5 , -1.5, 6 ) ;   // to me

   glEnd();


   glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the right window
        glVertex3f(  3.5, 0 , 7 ) ;
        glVertex3f(3.5 , 0 , 7.5 ) ;
        glVertex3f( 3.5 , 0.5 ,7.5 ) ; // to me
        glVertex3f( 3.5 , 0.5, 7 ) ;   // to me

   glEnd();


     glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the left window
        glVertex3f(  3.5, 0 , 5 ) ;
        glVertex3f(3.5 , 0 , 5.5 ) ;
        glVertex3f( 3.5 , 0.5 ,5.5 ) ; // to me
        glVertex3f( 3.5 , 0.5, 5 ) ;   // to me

   glEnd();


    glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the right down window
        glVertex3f(  3.5, -1, 7 ) ;
        glVertex3f(3.5 , -1 , 7.5 ) ;
        glVertex3f( 3.5 , -0.5 ,7.5 ) ; // to me
        glVertex3f( 3.5 , -0.5, 7 ) ;   // to me

   glEnd();


     glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the left down window
        glVertex3f(  3.5, -1 , 5 ) ;
        glVertex3f(3.5 , -1 , 5.5 ) ;
        glVertex3f( 3.5 , -0.5 ,5.5 ) ; // to me
        glVertex3f( 3.5 , -0.5, 5 ) ;   // to me

   glEnd();





}

void gift2(){
    glPushMatrix ();
      glColor3f ( 1, 1, 0);     //first right
      glTranslatef    (2, -2+down, 5);
      glScaled(1,1.2,1) ;
      glutSolidCube (0.5);
      glPopMatrix ();

       glPushMatrix (); // circle 1 up left
      glColor3f ( 1, 1, 1);     //the box decoration
      glTranslatef    (2.1, -1.8+down, 5.2);
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();

      glPushMatrix ();
      glColor3f ( 1, 1, 1);// circle 2 down
      glTranslatef    (1.9, -1.9+down, 5.2);//the box decoration
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();

      glPushMatrix ();
      glColor3f ( 1, 1, 1);
      glTranslatef    (2, -2.1+down, 5.2);// circle3  up right
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();

       glPushMatrix ();
      glColor3f ( 1, 0, 1);     // left ballon
      glTranslatef    (1.8, -1+down, 5.2);
      glScaled(0.5,1,1) ;
      glutSolidSphere (0.3, 30 ,40);
      glPopMatrix ();

      glBegin(GL_LINES) ;   // left thread
      glVertex3f(1.82,-1+down,5.2);
      glVertex3f(2,-2+down,5.2);
      glEnd();

       glPushMatrix ();
      glColor3f ( 0, 0, 0);     //right ballon
      glTranslatef    (2.1, -1+down, 5.2);
      glScaled(0.5,1,1) ;
      glutSolidSphere (0.3, 30 ,40);
      glPopMatrix ();

      glBegin(GL_LINES) ; // right thread
      glVertex3f(2.2,-1+down,5.2);
      glVertex3f(1.88,-2+down,5.2);
      glEnd();
}
void House3 (){

      glPushMatrix ();
       glColor3f ( 0.275, 0.510, 0.70);  //middle left
       glTranslatef    (-6, -1, -10);
      glutSolidCube (4);
      glPopMatrix ();

        glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the door // beige
       glRotated(40,0,1,0) ;
        glVertex3f( -3.93, -3 , -9) ;
        glVertex3f( -3.93 , -3 , -10) ;
        glVertex3f( -3.93 , -1.5 , -10 ) ;
        glVertex3f( -3.93 , -1.5, -9) ;

   glEnd();


   glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the right down window
        glVertex3f( -3.99, -1 , -10.5 ) ;
        glVertex3f( -3.99 , -1 , -11.5 ) ;
        glVertex3f( -3.99 , -0.5 ,-11.5 ) ;
        glVertex3f( -3.99 , -0.5, -10.5 ) ;

   glEnd();


    glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the left down window
        glVertex3f( -3.99, -1 , -8.5 ) ;
        glVertex3f( -3.99 , -1 , -9.5 ) ;
        glVertex3f( -3.99 , -0.5 ,-9.5 ) ;
        glVertex3f( -3.99 , -0.5, -8.5 ) ;

   glEnd();


   glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the right up window
        glVertex3f( -3.99, 0 , -10.5 ) ;
        glVertex3f( -3.99 , 0 , -11.5 ) ;
        glVertex3f( -3.99 , 0.5 ,-11.5 ) ;
        glVertex3f( -3.99 , 0.5, -10.5 ) ;

   glEnd();


    glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the left up window
        glVertex3f( -3.99, 0 , -8.5 ) ;
        glVertex3f( -3.99 , 0 , -9.5 ) ;
        glVertex3f( -3.99 , 0.5 ,-9.5 ) ;
        glVertex3f( -3.99 , 0.5, -8.5 ) ;

   glEnd();
}

void gift3(){


      glPushMatrix ();
      glColor3f ( 1, 1, 0);     //  middle left
      glTranslatef    (-2, -2+down, -9.2);
      glScaled(1,1.2,1) ;
      glutSolidCube (0.5);
      glPopMatrix ();

       glPushMatrix ();
      glColor3f ( 1, 1, 1);     //the box decoration
      glTranslatef    (-2, -1.8+down, -9);// circle 1 up left
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();

      glPushMatrix ();
      glColor3f ( 1, 1, 1);// circle 2 down
      glTranslatef    (-1.8, -1.9+down, -9);//the box decoration
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();

      glPushMatrix ();
      glColor3f ( 1, 1, 1);
      glTranslatef    (-2, -2+down, -9);// circle3  up right
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();

       glPushMatrix ();
      glColor3f ( 1, 0, 1);     // left ballon
      glTranslatef    (-1.8, -1+down, -9.2);
      glScaled(0.5,1,1) ;
      glutSolidSphere (0.3, 30 ,40);
      glPopMatrix ();

      glBegin(GL_LINES) ;
      glVertex3f(-1.82,-1+down,-9.2);
      glVertex3f(-2,-2+down,-9.2);// left thread
      glEnd();

       glPushMatrix ();
      glColor3f ( 0, 0, 0);     //right ballon
      glTranslatef    (-2.1, -1+down, -9.2);
      glScaled(0.5,1,1) ;
      glutSolidSphere (0.3, 30 ,40);
      glPopMatrix ();

      glBegin(GL_LINES) ;   // right thread
      glVertex3f(-2.2,-1+down,-9.2);
      glVertex3f(-1.88,-2+down,-9.2);
      glEnd();
}
void House4 (){

    glPushMatrix ();
       glColor3f(0.275, 0.510, 0.70);// first left
      glTranslatef    (-6, -1, 5);
      glutSolidCube (4);
      glPopMatrix ();

    glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the door
       glRotated(40,0,1,0) ;
        glVertex3f( -3.93, -3 , 5.5) ;
        glVertex3f( -3.93 , -3 , 4.5) ;
        glVertex3f( -3.93 , -1.5 , 4.5 ) ;
        glVertex3f( -3.93 , -1.5, 5.5) ;

   glEnd();


   glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the right down window
        glVertex3f( -3.99, -1 , 4 ) ;
        glVertex3f( -3.99 , -1 , 3.5 ) ;
        glVertex3f( -3.99 , -0.5 ,3.5 ) ;
        glVertex3f( -3.99 , -0.5, 4 ) ;

   glEnd();


    glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the left down window
        glVertex3f( -3.99, -1 , 6 ) ;
        glVertex3f( -3.99 , -1 , 5.5 ) ;
        glVertex3f( -3.99 , -0.5 ,5.5 ) ;
        glVertex3f( -3.99 , -0.5, 6 ) ;

   glEnd();


  glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the left up window
        glVertex3f( -3.99, 0 , 6 ) ;
        glVertex3f( -3.99 , 0 , 5.5 ) ;
        glVertex3f( -3.99 , 0.5 ,5.5 ) ;
        glVertex3f( -3.99 , 0.5, 6 ) ;

   glEnd();


     glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the right up window
        glVertex3f( -3.99, 0 , 4 ) ;
        glVertex3f( -3.99 , 0 , 3.5 ) ;
        glVertex3f( -3.99 , 0.5 ,3.5 ) ;
        glVertex3f( -3.99 , 0.5, 4 ) ;

   glEnd();

}

void gift4(){


      glPushMatrix ();
      glColor3f ( 1, 0, 0);     //first left
      glTranslatef    (-2, -2+down, 5);
      glScaled(1,1.2,1) ;
      glutSolidCube (0.5);
      glPopMatrix ();


       glPushMatrix ();
      glColor3f ( 1, 1, 1);     //the box decoration
      glTranslatef    (-2.1, -1.8+down, 5.2);//// circle 1 up left
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();

      glPushMatrix ();
      glColor3f ( 1, 1, 1);
      glTranslatef    (-1.9, -1.9+down, 5.2); // circle down
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();

      glPushMatrix ();
      glColor3f ( 1, 1, 1);
      glTranslatef    (-2, -2.1+down, 5.2);//circle up right
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();


       glPushMatrix ();
      glColor3f ( 1, 0, 1);     // left ballon
      glTranslatef    (-1.8, -1+down, 5.2);
      glScaled(0.5,1,1) ;
      glutSolidSphere (0.3, 30 ,40);
      glPopMatrix ();

      glBegin(GL_LINES) ;
      glVertex3f(-1.82,-1+down,5.2); // left thread
      glVertex3f(-2,-2+down,5.2);
      glEnd();

       glPushMatrix ();
      glColor3f ( 0, 0, 0);     //right ballon
      glTranslatef    (-2.1, -1+down, 5.2);
      glScaled(0.5,1,1) ;
      glutSolidSphere (0.3, 30 ,40);
      glPopMatrix ();

      glBegin(GL_LINES) ; // right thread
      glVertex3f(-2.2,-1+down,5.2);
      glVertex3f(-1.88,-2+down,5.2);
      glEnd();
}
void House5() {

     glPushMatrix ();
        glColor3f (0.275, 0.510, 0.70);  //last right
      glTranslatef    (6, -1, -24);
      glutSolidCube (4);
      glPopMatrix ();

          glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the door
        glVertex3f( 3.9, -3 , -24  ) ;
        glVertex3f(3.9 , -3 , -23 ) ;
        glVertex3f( 3.9 , -1.5 , -23 ) ;
        glVertex3f( 3.9 , -1.5, -24 ) ;

   glEnd();

    glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the right up window
        glVertex3f(  3.9, 0 , -23.5 ) ;
        glVertex3f(3.9 , 0 , -23 ) ;
        glVertex3f( 3.9 , 0.5 ,-23 ) ;
        glVertex3f( 3.9 , 0.5, -23.5) ;

   glEnd();


    glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the left up window
        glVertex3f(  3.9, 0 , -25.5) ;
        glVertex3f(3.9 , 0 , -25 ) ;
        glVertex3f( 3.9 , 0.5 ,-25 ) ;
        glVertex3f( 3.9 , 0.5, -25.5 ) ;

   glEnd();





}

void House6() {
     glPushMatrix ();
    glColor3f (0.275, 0.510, 0.70);  // far house left
      glTranslatef    (-6, -1, -24);
      glutSolidCube (4);
      glPopMatrix ();

        glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the door
       glRotated(40,0,1,0) ;
        glVertex3f( -3.93, -3 ,-23) ;
        glVertex3f( -3.93 , -3 , -24) ;
        glVertex3f( -3.93 , -1.5 , -24) ;
        glVertex3f( -3.93 , -1.5, -23) ;

   glEnd();


   glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the right down window
        glVertex3f( -3.99, -1 , -24.5 ) ;
        glVertex3f( -3.99 , -1 , -25.5 ) ;
        glVertex3f( -3.99 , -0.5 ,-25.5 ) ;
        glVertex3f( -3.99 , -0.5, -24.5) ;

   glEnd();


    glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the left down window
        glVertex3f( -3.99, -1 , -22.5 ) ;
        glVertex3f( -3.99 , -1 , -23.5 ) ;
        glVertex3f( -3.99 , -0.5 ,-23.5 ) ;
        glVertex3f( -3.99 , -0.5, -22.5 ) ;

   glEnd();


  glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the left up window
        glVertex3f( -3.99, 0 , -22.5) ;
        glVertex3f( -3.99 , 0 , -23.5 ) ;
        glVertex3f( -3.99 , 0.5 ,-23.5 ) ;
        glVertex3f( -3.99 , 0.5, -22.5 ) ;

   glEnd();


     glBegin(GL_POLYGON);
       glColor3f(1.000, 0.855, 0.725);   // the right up window
        glVertex3f( -3.99, 0 , -24.5 ) ;
        glVertex3f( -3.99 , 0 , -25.5 ) ;
        glVertex3f( -3.99 , 0.5 ,-25.5 ) ;
        glVertex3f( -3.99 , 0.5, -24.5 ) ;

   glEnd();



}
float x = -10;
void cloud (){

    /////////////////////////////// right down  first
  glPushMatrix ();
    glColor3f (1, 1, 1);
      glTranslatef    (4+x, 2.4, 5);
      glScaled(3,1,1) ;


      glutSolidSphere(0.2 ,30,40) ;
      glPopMatrix ();

       glPushMatrix ();
    glColor3f (1, 1, 1);
      glTranslatef    (3.4+x, 2.4, 5);
      glScaled(3,1,1) ;
      glutSolidSphere(0.2 ,30,40) ;
      glPopMatrix ();


    glPushMatrix ();
    glColor3f (1, 1, 1);
      glTranslatef    (3.6+x, 2.6, 5);
       glScaled(3,1,1) ;
      glutSolidSphere(0.2 ,30,40) ;
      glPopMatrix ();
/////////////////////////////// right  up cloud  // second
  glPushMatrix ();
    glColor3f (1, 1, 1);
      glTranslatef    (2+x, 3, 5);
      glScaled(3,1,1) ;
      glutSolidSphere(0.2 ,30,40) ;
      glPopMatrix ();

       glPushMatrix ();
    glColor3f (1, 1, 1);
      glTranslatef    (1.4+x, 3, 5);
      glScaled(3,1,1) ;
      glutSolidSphere(0.2 ,30,40) ;
      glPopMatrix ();


    glPushMatrix ();
    glColor3f (1, 1, 1);
      glTranslatef    (1.6+x, 3.2, 5);
       glScaled(3,1,1) ;
      glutSolidSphere(0.2 ,30,40) ;
      glPopMatrix ();
///////////////////////////////////////////////// middle cloud // third
     glPushMatrix ();
    glColor3f (1, 1, 1);
      glTranslatef    (-1+x, 3, 5);
      glScaled(3,1,1) ;
      glutSolidSphere(0.2 ,30,40) ;
      glPopMatrix ();

       glPushMatrix ();
    glColor3f (1, 1, 1);
      glTranslatef    (-1.6+x, 3, 5);
      glScaled(3,1,1) ;
      glutSolidSphere(0.2 ,30,40) ;
      glPopMatrix ();


    glPushMatrix ();
    glColor3f (1, 1, 1);
      glTranslatef    (-1.5+x, 3.2, 5);
       glScaled(3,1,1) ;
      glutSolidSphere(0.2 ,30,40) ;
      glPopMatrix ();
///////////////////////////////////////////////////// left cloud  // fouth and last


 glPushMatrix ();
    glColor3f (1, 1, 1);
      glTranslatef    (-4+x, 3, 5);
      glScaled(3,1,1) ;
      glutSolidSphere(0.2 ,30,40) ;
      glPopMatrix ();

       glPushMatrix ();
    glColor3f (1, 1, 1);
      glTranslatef    (-4.6+x, 3, 5);
      glScaled(3,1,1) ;
      glutSolidSphere(0.2 ,30,40) ;
      glPopMatrix ();


    glPushMatrix ();
    glColor3f (1, 1, 1);
      glTranslatef    (-4.5+x, 3.2, 5);
       glScaled(3,1,1) ;
      glutSolidSphere(0.2 ,30,40) ;
      glPopMatrix ();


}

void The_road (){

glBegin(GL_POLYGON);
      glColor3f(0.1f, 0.1f, 0.1f);  // road
        glVertex3f( 20 , -7 , -1000 ) ;
        glVertex3f( -20 , -7 , -1000 ) ;
          glVertex3f( -20 , -7 , 100) ;
        glVertex3f( 20 , -7 , 100 ) ;

   glEnd();

   glBegin(GL_POLYGON);
      glColor3f(1, 1, 1);            // the left snow on the road
        glVertex3f(-8 , -6.99 , -100 ) ;
        glVertex3f( -20 , -6.99 , -100 ) ;
          glVertex3f( -20 , -6.99 , 100) ;
        glVertex3f( -8 , -6.99 , 100 ) ;

   glEnd();

   glBegin(GL_POLYGON);
      glColor3f(1, 1, 1);            // the right snow on the road
        glVertex3f(20 , -6.99 , -100 ) ;
        glVertex3f( 6 , -6.99 , -100 ) ;
          glVertex3f(6 , -6.99 , 100) ;
        glVertex3f(  20, -6.99 , 100 ) ;

   glEnd();


    glBegin(GL_POLYGON);
      glColor3f(1.0f, 1.0f, 1.0f);  // first line on road
        glVertex3f( 0.5 , -6.99 , -20 ) ;
        glVertex3f( -0.5 , -6.99 , -20 ) ;
          glVertex3f( -0.5, -6.99 , 100) ;
        glVertex3f( 0.5 , -6.99 , 100 ) ;

   glEnd();

     glBegin(GL_POLYGON);

      glColor3f(1.0f, 1.0f, 1.0f); // second line on road
        glVertex3f( 1 , -6.99 , -100  ) ;
        glVertex3f( -0.5 , -6.99 , -100 ) ;
          glVertex3f( -0.5, -6.99 , -50 ) ;
        glVertex3f( 1 , -6.99 ,  -50 ) ;

   glEnd();


      glPushMatrix ();
         glColor3f(0, 0, 0);//right pavment
       glTranslatef    (4.5, -5, -10);
       glScaled(1,1,-110) ;
      glutSolidCube (1);
      glPopMatrix ();


       glPushMatrix ();
         glColor3f(0,0,0);//left pavment
       glTranslatef    (-5, -5, -10);
       glScaled(1,1,-110) ;
      glutSolidCube (1);
      glPopMatrix ();





}


void tree2 (){
                            // right  near

      glPushMatrix ();
      glColor3f(0.0f, 0.2f, 0.0f);//Forest Green
      glTranslatef    (5,-1.5, -8);  // first
      glRotated(270 ,1,0,0) ;
      glutSolidCone(1 ,1 ,30 ,60) ;
      glPopMatrix ();



      glPushMatrix ();
       glColor3f(0.0f, 0.2f, 0.0f);//Forest Green
      glTranslatef    (5,-2, -8);  // middle
      glRotated(270 ,1,0,0) ;
      glutSolidCone(1 ,1 ,30 ,60) ;
      glPopMatrix ();



      glPushMatrix ();
        glColor3f(0.0f, 0.2f, 0.0f);//Forest Green
      glTranslatef    (5,-2.5, -8);  // down
      glRotated(270 ,1,0,0) ;
      glutSolidCone(1 ,1 ,30 ,60) ;
      glPopMatrix ();



      glPushMatrix ();
      glColor3f(0.0f, 0.2f, 0.0f);//Forest Green
      glTranslatef    (5,-3, -8);  //  last
      glRotated(270 ,1,0,0) ;
      glutSolidCone(1 ,1 ,30 ,60) ;
      glPopMatrix ();





}
void tree (){

                     // left tree
      glPushMatrix ();
      glColor3f(0.0f, 0.2f, 0.0f);//Forest Green
      glTranslatef    (-5,-1, -1);  // first
      glRotated(270 ,1,0,0) ;
      glutSolidCone(1 ,1 ,30 ,60) ;
      glPopMatrix ();



      glPushMatrix ();
       glColor3f(0.0f, 0.2f, 0.0f);//Forest Green
      glTranslatef    (-5,-1.5, -1);  // second
      glRotated(270 ,1,0,0) ;
      glutSolidCone(1 ,1 ,30 ,60) ;
      glPopMatrix ();



      glPushMatrix ();
        glColor3f(0.0f, 0.2f, 0.0f);//Forest Green
      glTranslatef    (-5,-2, -1);  // middle
      glRotated(270 ,1,0,0) ;
      glutSolidCone(1 ,1 ,30 ,60) ;
      glPopMatrix ();



      glPushMatrix ();
      glColor3f(0.0f, 0.2f, 0.0f);//Forest Green
      glTranslatef    (-5,-2.5, -1);  // last
      glRotated(270 ,1,0,0) ;
      glutSolidCone(1 ,1 ,30 ,60) ;
      glPopMatrix ();





}

void tree3 (){
                                   // right far

      glPushMatrix ();
      glColor3f(0.0f, 0.2f, 0.0f);//Forest Green
      glTranslatef    (4.7,-1, -14);  // first
      glRotated(270 ,1,0,0) ;
      glutSolidCone(1 ,1 ,30 ,60) ;
      glPopMatrix ();



      glPushMatrix ();
       glColor3f(0.0f, 0.2f, 0.0f);//Forest Green
      glTranslatef    (4.7,-1.5, -14);  // second
      glRotated(270 ,1,0,0) ;
      glutSolidCone(1 ,1 ,30 ,60) ;
      glPopMatrix ();



      glPushMatrix ();
        glColor3f(0.0f, 0.2f, 0.0f);//Forest Green
      glTranslatef    (4.7,-2, -14);  // middle
      glRotated(270 ,1,0,0) ;
      glutSolidCone(1 ,1 ,30 ,60) ;
      glPopMatrix ();



      glPushMatrix ();
      glColor3f(0.0f, 0.2f, 0.0f);//Forest Green
      glTranslatef    (4.7,-2.5, -14);  // last
      glRotated(270 ,1,0,0) ;
      glutSolidCone(1 ,1 ,30 ,60) ;
      glPopMatrix ();





}


 void stars(){

      glPushMatrix ();
      glColor3f (1, 1, 1);
      glTranslatef    (-4,3.5, 4);  // left up
      glScalef( 0.03, 0.03, 0.03);
      glutSolidOctahedron() ;
      glPopMatrix ();


      glPushMatrix ();
      glColor3f (1, 1, 1);
      glTranslatef    (2,3.5, 5);
      glScalef( 0.03, 0.03, 0.03);
      glutSolidOctahedron() ;
      glPopMatrix ();


      glPushMatrix ();
      glColor3f (1, 1, 1);
      glTranslatef    (3,3, 2);
      glScalef( 0.03, 0.03, 0.03);
      glutSolidOctahedron() ;
      glPopMatrix ();

      glPushMatrix ();
      glColor3f (1, 1, 1);
      glTranslatef    (0,2, 5);
      glScalef( 0.03, 0.03, 0.03);
      glutSolidOctahedron() ;
      glPopMatrix ();



      glPushMatrix ();
      glColor3f (1, 1, 1);
      glTranslatef    (-6,3.5, 1);  // left down
      glScalef( 0.03, 0.03, 0.03);
      glutSolidOctahedron() ;
      glPopMatrix ();


      glPushMatrix ();
      glColor3f (1, 1, 1);
      glTranslatef    (-1,3.5, 6);
      glScalef( 0.03, 0.03, 0.03);
      glutSolidOctahedron() ;
      glPopMatrix ();


      glPushMatrix ();
      glColor3f (1, 1, 1);
      glTranslatef    (-2,3, 5);
      glScalef( 0.03, 0.03, 0.03);
      glutSolidOctahedron() ;
      glPopMatrix ();

 }

 void The_moon() {

      glPushMatrix ();
      glColor3f (1, 1, 1);
      glTranslatef    (0,4, 3);
      glScalef( 0.3, 0.3, 0.3);
      glutSolidSphere(1,30,30) ;
      glPopMatrix ();

  }
int angle = 1 ;
float rotat = 0 ;
void thecar (){

      glPushMatrix ();  // main part red
      glColor3f (1, 0, 0);
      glTranslatef    (0,-4, 0+alphaX);
      glutSolidCube(4) ;
      glPopMatrix ();


      glColor3f (0.5, 0.5, 0.5);              // wheel 1 frontal right
    glPushMatrix ();
       glTranslatef    (2, -6, -2+alphaX);
       glutSolidSphere (0.7, 40, 30);
    glPopMatrix ();


    glColor3f (0.5, 0.5, 0.5);              // wheel  2 frontal left
    glPushMatrix ();
       glTranslatef    (-2, -6, -2+alphaX);
       glutSolidSphere (0.7, 40, 30);
    glPopMatrix ();

     glColor3f (0.5,0.5,0.5);              // wheel 3 back right
    glPushMatrix ();
       glTranslatef    (2, -6, 1+alphaX);
       glutSolidSphere (0.7, 40, 30);
    glPopMatrix ();

    glColor3f (0.5, 0.5, 0.5);              // wheel  4 back left
    glPushMatrix ();
       glTranslatef    (-2, -6, 1+alphaX);
       glutSolidSphere (0.7, 40, 30);
    glPopMatrix ();



  glBegin(GL_POLYGON); // back window of the car
    glColor3f(0.5,0.5,0.5);
     glVertex3f(1.2,-3,4+alphaX) ;
    glVertex3f(1.2,-2,4+alphaX) ;
    glVertex3f(-1.2,-2,4+alphaX) ;
    glVertex3f(-1.2,-3,4+alphaX) ;

    glEnd();

    glPushMatrix ();
      glColor3f ( 1, 1, 0);     //car lamp 1
      glTranslatef    (1,-5, 5+alphaX);
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();

      glPushMatrix ();  // car lamp 2
      glColor3f ( 1, 1, 0);//yellow
      glTranslatef    (-1,-5, 5+alphaX);
      glutSolidSphere (0.08, 30 ,40);
      glPopMatrix ();

       //frontal part of the car

         glColor3f (1, 0, 0);    //red sphere
    glPushMatrix ();
       glTranslatef    (0,-4, 3+alphaX);;
       glutSolidSphere (2.0, 80, 30);
    glPopMatrix ();








}

//------------------------------  reshapeFunc  ---------------------------------

void reshapeFunc (int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective (40, (GLdouble)w / (GLdouble)h, 0.1, 1000.0);    ///
    glMatrixMode(GL_MODELVIEW);
}

//------------------------------  display   -------------------------------
int zRotated=0;
int yRotated = 0 ;
void display (void)
{
     glClear        (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
     glLoadIdentity ();
     glTranslatef    (0.0, 0.0, -15.0);
     The_road () ;
     House1() ;
     House2() ;
     House3() ;
     House4() ;
     House5() ;
     House6() ;
     snowman() ;
     stars() ;
     The_moon() ;
     tree() ;
     tree2() ;
     tree3() ;
     thecar();
     gift1();
     gift2();
     gift3();
     gift4();
     cloud() ;
     glutSwapBuffers();
}

//--------------------------------  idleFunc  ----------------------------------

void idleFunc (void)
{
    zRotated += 1;
    glutPostRedisplay();
}

void texture (void){

const GLfloat light_ambient[]  = { 0.7f, 0.7F, 0.7f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 9.0f, 20.0f, 0.5f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);


}
void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);
    // clouds animation
    x+=0.01;
    if(x>20){
      x = -10;
    }
// gifts animation
  if(down>0){
        down-=0.05 ;

    }
 // car animation
    alphaX+=0.3 ;
    if(alphaX > 20){
        alphaX  = -200 ;

    }

}

//----------------------------------  main  ------------------------------------

int main (int argc, char **argv)
{
    glutInit               (&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DOUBLE);  /// GLUT_DOUBLE for smooth shapes   GLUT_DOUBLE depth and height for shapes
    glutInitWindowPosition(200,0);
    glutInitWindowSize(1200,800);
    glutCreateWindow       ("19102749_19100683");

   // glutKeyboardFunc(Keyboard) ;
    glClearColor (1.0, 1.0, 1.0, 0.0);

    glutDisplayFunc (display);
    glutReshapeFunc (reshapeFunc);
    glutIdleFunc    (idleFunc);

    glClearColor(0.0f, 0.1f, 0.2f , 0.0f);
    texture();
    glutTimerFunc(0,timer,0);
   glutKeyboardFunc(Keyboard) ;
     sndPlaySound("C:\\Users\\fast\\Downloads\\test\\2.wav",  SND_ASYNC) ;
    glutMainLoop();
}
