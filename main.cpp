#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846



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

void init(void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,1.0,0.0,1.0,-10.0,10.0);
}

void display() {
    glClearColor(0.11f, 0.271f, 0.49f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)



    glBegin(GL_QUADS);

///full screen
    glColor3f(0.11f, 0.27f, 0.49f);
    glVertex2f(0.0f,0.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f,1.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(1.0f,1.0f);
    glColor3f(0.11f, 0.27f, 0.49f);
    glVertex2f(1.0f,0.0f);

///1
    glColor3f(0.067, 0.224f, 0.4f);
    glVertex2f(0.0f,0.55f);
    glColor3f(0.0589f, 0.141f, 0.239f);
    glVertex2f(0.0f,0.60f);
    glColor3f(0.0589f, 0.141f, 0.239f);
    glVertex2f(1.0f,0.60f);
    glColor3f(0.067f, 0.234f, 0.4f);
    glVertex2f(1.0f,0.55f);

///2
    //glColor3f(0.463f, 0.627f, 0.811f);
    glColor3f(0.251f, 0.502f, 0.788f);
    glVertex2f(0.0f,0.50f);
    glColor3f(0.067f, 0.234f, 0.4f);
    glVertex2f(0.0f,0.55f);
    glColor3f(0.067f, 0.234f, 0.4f);
    glVertex2f(1.0f,0.55f);
    glColor3f(0.251f, 0.502f, 0.788f);
    //glColor3f(0.463f, 0.627f, 0.811f);
    glVertex2f(1.0f,0.50f);

///3
     glColor3f(0.302f, 0.541f, 0.82f);
    glVertex2f(0.0f,0.45f);
    glColor3f(0.251f, 0.502f, 0.788f);
    glVertex2f(0.0f,0.50f);
    glColor3f(0.251f, 0.502f, 0.788f);
    glVertex2f(1.0f,0.50f);
    glColor3f(0.302f, 0.541f, 0.82f);
    glVertex2f(1.0f,0.45f);

///4
    glColor3f(0.443f, 0.643f, 0.871f);
    glVertex2f(0.0f,0.40f);
    glColor3f(0.302f, 0.541f, 0.82f);
    glVertex2f(0.0f,0.45f);
    glColor3f(0.302f, 0.541f, 0.82f);
    glVertex2f(1.0f,0.45f);
    glColor3f(0.443f, 0.643f, 0.871f);
    glVertex2f(1.0f,0.40f);


///5
    glColor3f(0.15f, 0.30f, 0.51f);
    glVertex2f(0.0f,0.10f);
    glColor3f(0.443f, 0.643f, 0.871f);
    glVertex2f(0.0f,0.40f);
    glColor3f(0.443f, 0.643f, 0.871f);
    glVertex2f(1.0f,0.40f);
    glColor3f(0.15f, 0.30f, 0.51f);
    glVertex2f(1.0f,0.10f);
    glEnd();





    ///CLOUDS
   ///circle 1
    int i;

	GLfloat x=0.50f; GLfloat y=0.10f; GLfloat radius =.10f;
	int triangleAmount = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

///circle 2
	int i1;

	GLfloat x1=0.65f; GLfloat y1=0.05f; GLfloat radius1 =.10f;
	int triangleAmount1 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(i1 = 0; i1 <= triangleAmount1;i1++) {
			glVertex2f( x1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)),
                        y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1)) );
		}
	glEnd();

///circle 3
	int i2;

	GLfloat x2=0.79f; GLfloat y2=0.03; GLfloat radius2 =.10f;
	int triangleAmount2 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(i2 = 0; i2 <= triangleAmount2;i2++) {
			glVertex2f( x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
                        y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2)) );
		}
	glEnd();

///circle 4
	int i3;

	GLfloat x3=0.90f; GLfloat y3=0.00f; GLfloat radius3 =.10f;
	int triangleAmount3 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(i3 = 0; i3 <= triangleAmount3;i3++) {
			glVertex2f( x3 + (radius3 * cos(i3 *  twicePi3 / triangleAmount3)),
                        y3 + (radius3 * sin(i3 * twicePi2 / triangleAmount3)) );
		}
	glEnd();

	///circle 5
	int i4;

	GLfloat x4=0.35f; GLfloat y4=0.05f; GLfloat radius4 =.10f;
	int triangleAmount4 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

    glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle
		for(i4 = 0; i4 <= triangleAmount4;i4++) {
			glVertex2f( x4 + (radius4 * cos(i4 *  twicePi4 / triangleAmount4)),
                        y4 + (radius4 * sin(i4 * twicePi4 / triangleAmount4)) );
		}
	glEnd();


	///circle 6
	int i5;

	GLfloat x5=0.21; GLfloat y5=0.03f; GLfloat radius5 =.10f;
	int triangleAmount5 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(i5 = 0; i5 <= triangleAmount5;i5++) {
			glVertex2f( x5 + (radius5 * cos(i5 *  twicePi5 / triangleAmount5)),
                        y5 + (radius5 * sin(i5 * twicePi5 / triangleAmount5)) );
		}
	glEnd();

    ///circle 7
	int i6;

	GLfloat x6=0.10f; GLfloat y6=0.00f; GLfloat radius6 =.10f;
	int triangleAmount6 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle
		for(i6 = 0; i6 <= triangleAmount6;i6++) {
			glVertex2f( x6 + (radius6 * cos(i6 *  twicePi6 / triangleAmount6)),
                        y6 + (radius6 * sin(i6 * twicePi6 / triangleAmount6)) );
		}
	glEnd();

    ///circle 8
	int i7;

	GLfloat x7=0.50f; GLfloat y7=0.00f; GLfloat radius7 =.10f;
	int triangleAmount7 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x7, y7); // center of circle
		for(i7 = 0; i7 <= triangleAmount7;i7++) {
			glVertex2f( x7 + (radius7 * cos(i7 *  twicePi7 / triangleAmount7)),
                        y7 + (radius7 * sin(i7 * twicePi7 / triangleAmount7)) );
		}
	glEnd();


	///try 1st part


	 ///circle 9
	int i8;

	GLfloat x8= 0.97f; GLfloat y8=0.650f; GLfloat radius8 =.05f;
	int triangleAmount8 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x8, y8); // center of circle
		for(i8 = 0; i8 <= triangleAmount8;i8++) {
			glVertex2f( x8 + (radius8 * cos(i8 *  twicePi8 / triangleAmount8)),
                        y8 + (radius8 * sin(i8 * twicePi8 / triangleAmount8)) );
		}
	glEnd();


	 ///circle 10
	int i9;

	GLfloat x9=0.90f; GLfloat y9=0.60f; GLfloat radius9 =.05f;
	int triangleAmount9 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9, y9); // center of circle
		for(i9 = 0; i9 <= triangleAmount9;i9++) {
			glVertex2f( x9 + (radius9 * cos(i9 *  twicePi9 / triangleAmount9)),
                        y9 + (radius9 * sin(i9 * twicePi9 / triangleAmount9)) );
		}
	glEnd();



	///circle 11
	int i10;

	GLfloat x10=0.85f; GLfloat y10=0.55f; GLfloat radius10 =.05f;
	int triangleAmount10 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi10 = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10, y10); // center of circle
		for(i10 = 0; i10 <= triangleAmount10;i10++) {
			glVertex2f( x10 + (radius10 * cos(i10 *  twicePi10 / triangleAmount10)),
                        y10 + (radius10 * sin(i10 * twicePi10 / triangleAmount10)) );
		}
	glEnd();

	///circle 12
    int i11;

	GLfloat x11=0.95f; GLfloat y11=0.55f; GLfloat radius11 =.10f;
	int triangleAmount11 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x11, y11); // center of circle
		for(i11 = 0; i11 <= triangleAmount11;i11++) {
			glVertex2f( x11 + (radius11 * cos(i11 *  twicePi11 / triangleAmount11)),
                        y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11)) );
		}
	glEnd();

	///circle 13
	int i12;

	GLfloat x12=0.83f; GLfloat y12=0.50f; GLfloat radius12 =.10f;
	int triangleAmount12 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x12, y12); // center of circle
		for(i12 = 0; i12 <= triangleAmount12;i12++) {
			glVertex2f( x12 + (radius12 * cos(i12 *  twicePi12 / triangleAmount12)),
                        y12 + (radius12 * sin(i12 * twicePi12 / triangleAmount12)) );
		}
	glEnd();

	///circle 14
	int i13;

	GLfloat x13=0.70f; GLfloat y13=0.43f; GLfloat radius13 =.10f;
	int triangleAmount13 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi13 = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x13, y13); // center of circle
		for(i13 = 0; i13<= triangleAmount13;i13++) {
			glVertex2f( x13 + (radius13 * cos(i13 *  twicePi13 / triangleAmount13)),
                        y13 + (radius13 * sin(i13 * twicePi13 / triangleAmount13)) );
		}
	glEnd();

	///circle 15
	int i14;

	GLfloat x14=0.63f; GLfloat y14=0.30f; GLfloat radius14 =.10f;
	int triangleAmount14 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;

	glColor3f(0.859f, 0.91f, 0.969f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x14, y14); // center of circle
		for(i14 = 0; i14 <= triangleAmount14;i14++) {
			glVertex2f( x14 + (radius14* cos(i14 *  twicePi14 / triangleAmount14)),
                        y14 + (radius14* sin(i14 * twicePi14 / triangleAmount14)) );
		}
	glEnd();



	///2nd part
	 ///circle 16
	int i15;

	GLfloat x15=0.98f; GLfloat y15=0.61f; GLfloat radius15 =.05;
	int triangleAmount15 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi15 = 2.0f * PI;

	glColor3f(0.812f, 0.89f, 0.98f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x15, y15); // center of circle
		for(i15 = 0; i15 <= triangleAmount15; i15++) {
			glVertex2f( x15 + (radius15 * cos(i15 *  twicePi15 / triangleAmount15)),
                        y15 + (radius15 * sin(i15 * twicePi15 / triangleAmount15)) );
		}
	glEnd();

	 /*
	 ///circle 12
	int i11;

	GLfloat x11=0.95f; GLfloat y11=0.50f; GLfloat radius11 =.10f;
	int triangleAmount11 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glColor3f(0.815f, 0.90f, 0.99f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x11, y11); // center of circle
		for(i11 = 0; i11 <= triangleAmount11;i11++) {
			glVertex2f( x11+ (radius11 * cos(i11 *  twicePi11 / triangleAmount11)),
                        y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11)) );
		}
	glEnd();
	*/

	///circle 17
	int i16;

	GLfloat x16=0.85f; GLfloat y16=0.45f; GLfloat radius16 =.10f;
	int triangleAmount16 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi16 = 2.0f * PI;

	glColor3f(0.815f, 0.905f, 0.99f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x16, y16); // center of circle
		for(i16 = 0; i16 <= triangleAmount16;i16++) {
			glVertex2f( x16 + (radius16 * cos(i16 *  twicePi16 / triangleAmount16)),
                        y16 + (radius16 * sin(i16 * twicePi16 / triangleAmount16)) );
		}
	glEnd();

	///circle 18

	int i17;

	GLfloat x17=0.80f; GLfloat y17=0.35f; GLfloat radius17 =.15f;
	int triangleAmount17 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi17 = 2.0f * PI;

	glColor3f(0.815f, 0.905f, 0.99f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x17, y17); // center of circle
		for(i17 = 0; i17 <= triangleAmount17; i17++) {
			glVertex2f( x17 + (radius17 * cos(i17 *  twicePi17 / triangleAmount17)),
                        y17 + (radius17 * sin(i17 * twicePi17 / triangleAmount17)) );
		}
	glEnd();

	///circle 19

	int i18;

	GLfloat x18=0.65f; GLfloat y18=0.25f; GLfloat radius18 =.10f;
	int triangleAmount18 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi18 = 2.0f * PI;

	glColor3f(0.815f, 0.905f, 0.99f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x18, y18); // center of circle
		for(i18 = 0; i18 <= triangleAmount18; i18++) {
			glVertex2f( x18 + (radius18 * cos(i18 *  twicePi18/ triangleAmount18)),
                        y18 + (radius18 * sin(i18 * twicePi18 / triangleAmount18)) );
		}
	glEnd();




	///circle 20

	int i19;
	GLfloat x19=0.95f; GLfloat y19=0.28f; GLfloat radius19 =.15f;
	int triangleAmount19 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19 = 2.0f * PI;

	glColor3f(0.815f, 0.905f, 0.99f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x19, y19); // center of circle
		for(i19 = 0; i19 <= triangleAmount19; i19++) {
			glVertex2f( x19 + (radius19 * cos(i19 *  twicePi19 / triangleAmount19)),
                        y19 + (radius19 * sin(i19 * twicePi19 / triangleAmount19)) );
		}
	glEnd();


	 ///circle 21
	int i20;

	GLfloat x20=0.95f; GLfloat y20=0.48f; GLfloat radius20 =.10f;
	int triangleAmount20 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi20 = 2.0f * PI;

	glColor3f(0.815f, 0.90f, 0.99f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x20, y20); // center of circle
		for(i20 = 0; i20 <= triangleAmount20;i20++) {
			glVertex2f( x20+ (radius20 * cos(i20 *  twicePi20 / triangleAmount20)),
                        y20 + (radius20 * sin(i20 * twicePi20 / triangleAmount20)) );
		}
	glEnd();

	///eyes
	int i21;

	GLfloat x21=0.8f; GLfloat y21=0.45f; GLfloat radius21 =.01f;
	int triangleAmount21 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi21 = 2.0f * PI;

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x21, y21); // center of circle
		for(i21 = 0; i21 <= triangleAmount21;i21++) {
			glVertex2f( x21 + (radius21 * cos(i21 *  twicePi21/ triangleAmount21)),
                        y21 + (radius21 * sin(i21 * twicePi21 / triangleAmount21)) );
		}
	glEnd();

	int i22;

	GLfloat x22=0.85f; GLfloat y22=0.45f; GLfloat radius22 =.01f;
	int triangleAmount22 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi22 = 2.0f * PI;

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x22, y22); // center of circle
		for(i22 = 0; i22 <= triangleAmount22;i22++) {
			glVertex2f( x22 + (radius22 * cos(i22 *  twicePi22/ triangleAmount22)),
                        y22 + (radius22 * sin(i22 * twicePi22 / triangleAmount22)) );
		}
	glEnd();

///retina
	int i23;

	GLfloat x23=0.8f; GLfloat y23=0.447f; GLfloat radius23 =.002f;
	int triangleAmount23 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi23 = 2.0f * PI;

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x23, y23); // center of circle
		for(i23 = 0; i23 <= triangleAmount23;i23++) {
			glVertex2f( x23 + (radius23 * cos(i23 *  twicePi23/ triangleAmount23)),
                        y23 + (radius23 * sin(i23 * twicePi23 / triangleAmount23)) );
		}
	glEnd();

	int i24;

	GLfloat x24=0.85f; GLfloat y24=0.447f; GLfloat radius24 =.002f;
	int triangleAmount24 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi24 = 2.0f * PI;

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x24, y24); // center of circle
		for(i24 = 0; i24 <= triangleAmount24;i24++) {
			glVertex2f( x24 + (radius24 * cos(i24 *  twicePi24/ triangleAmount24)),
                        y24 + (radius24 * sin(i24 * twicePi24 / triangleAmount24)) );
		}
	glEnd();

	///mouth
	int i25;

	GLfloat x25=0.825; GLfloat y25=0.42f; GLfloat radius25 =.004f;
	int triangleAmount25 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi25 = 2.0f * PI;

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x25, y25); // center of circle
		for(i25 = 0; i25 <= triangleAmount25;i25++) {
			glVertex2f( x25 + (radius25 * cos(i25 *  twicePi25/ triangleAmount25)),
                        y25 + (radius25 * sin(i25 * twicePi25 / triangleAmount25)) );
		}
	glEnd();





    glPointSize(2);
    glBegin(GL_POINTS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.10f, 0.90f);
    glVertex2f(0.25f, 0.75f);
    glVertex2f(0.35f, 0.99f);
    glVertex2f(0.50f, 0.80f);
    glVertex2f(0.90f, 0.90f);
    glVertex2f(0.77f, 0.77f);
    glVertex2f(0.67f, 0.95f);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.825f, 0.44f);

    glEnd();





















     glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1400, 800); // Set the window's initial width & height
    glutInitWindowPosition(0, 0);  // Set the window's initial position according to the monitor
    glutCreateWindow("The Project: Rocket"); // Create a window with the given title

    init();

    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
