#include<iostream>
using namespace std;

#include <graphics.h>
void z()
{
    cout<<("Name : Md.Raisul Islam")<<endl;
    cout<<("Student ID : CSE2101022069")<<endl;
    cout<<("Section : 22A")<<endl;
    cout<<("Mobile Number : 01945370524")<<endl;
    cout<<("Semester : Spring-24")<<endl;
    cout<<("Department : Computer Science and Engineering")<<endl;
    cout<<("University : Sonargaon University")<<endl;
}
void r()
{
    cout<<" Welcome to Computer Graphics Project 2024 "<<endl<<endl;
    cout<<" \n======================================Menu======================================\n "<<endl<<endl;
    cout<<" Press 1 for Display Chess Board "<<endl<<endl;
    cout<<" Press 2 for Display Olympics Logo "<<endl<<endl;
    cout<<" Press 3 for Display Red Emoji "<<endl<<endl;
    cout<<" Press 4 for Display Bangladesh Flag "<<endl<<endl;
    cout<<" Press 5 for Display Cricket Field "<<endl<<endl;
    cout<<" Press 6 for Display German Flag "<<endl<<endl;
    cout<<" Press 7 for Display Green Red Flag "<<endl<<endl;
    cout<<" Press 8 for Display Different Shape "<<endl<<endl;
    cout<<" Press 9 for Display Doremon Blink "<<endl<<endl;
    cout<<" Press 10 for Display Hut "<<endl<<endl;
    cout<<" Press 11 for Display Fish "<<endl<<endl;
    cout<<" \n=========================Press 0 for exit the programme=========================\n "<<endl;
}
void a()
{
    	int r, c, x = 30, y = 30, black = 0;


       initwindow(500,500,"q");

	// Iterate over 8 rows
	for (r = 0; r < 8; r++) {

		// iterate over 8 cols
		for (c = 1; c <= 8; c++) {


			if (black == 0) {

				// set next color as white
				setcolor(WHITE);

				setfillstyle(SOLID_FILL, BLACK);


				rectangle(x, y, x + 30, y + 30);

				floodfill(x + 1, y + 1, WHITE);

				black = 1;
			}


			else {
				setcolor(WHITE);

				setfillstyle(SOLID_FILL, WHITE);

				// creating rectangle
				// with length and breadth
				// with size 30
				rectangle(x, y, x + 30, y + 30);

				floodfill(x + 1, y + 1, WHITE);

				black = 0;
			}

			x = x + 30;

			delay(30);
		}
		if (black == 0)
			black = 1;
		else
			black = 0;

		delay(30);
		x = 30;
		y = 30 + y;
	}

	getch();
	closegraph();
}
void b()
{
        initwindow(1000,1000,"q");

    	setfillstyle(SOLID_FILL, DARKGRAY);
	floodfill(50, 50, 15);

	// Create two circles in each
	// another & color Blue
	setfillstyle(SOLID_FILL, BLUE);
	circle(300, 300, 100);
	circle(300, 300, 90);
	floodfill(202, 300, 15);

	// Create two circles in each
	// another & color Yellow
	setfillstyle(SOLID_FILL, YELLOW);
	circle(400, 400, 100);
	circle(400, 400, 90);
	floodfill(322, 350, 15);
	floodfill(302, 400, 15);

	// Create two circles in each
	// another & color Black
	setfillstyle(SOLID_FILL, BLACK);
	circle(520, 300, 100);
	circle(520, 300, 90);
	floodfill(442, 350, 15);
	floodfill(422, 300, 15);

	// Create two circles in each
	// another & color Green
	setfillstyle(SOLID_FILL, GREEN);
	circle(620, 400, 100);
	circle(620, 400, 90);
	floodfill(522, 400, 15);
	floodfill(542, 350, 15);

	// Create two circles in each
	// another & color Red
	setfillstyle(SOLID_FILL, RED);
	circle(740, 300, 100);
	circle(740, 300, 90);
	floodfill(642, 300, 15);
	floodfill(662, 350, 15);

	// Hold the screen for a while
	getch();

	// Close the initialized gdriver
	closegraph();
}
void c()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw circles
    circle(200, 150, 100);
    circle(150, 130, 30);
    circle(250, 130, 30);

    // Draw ellipse
    ellipse(200, 180, 180, 360, 60, 45);

    // Set fill pattern to solid fill
    setfillstyle(SOLID_FILL, GREEN); // You can choose any color from predefined color list or use RGB value
    // Fill big circle
    floodfill(200, 150, WHITE); // Starting point for fill

    // Set fill pattern to solid fill
    setfillstyle(SOLID_FILL, YELLOW); // You can choose any color from predefined color list or use RGB value
    // Fill left small circle
    floodfill(150, 130, WHITE); // Starting point for fill
    // Fill right small circle
    floodfill(250, 130, WHITE); // Starting point for fill

    // Set fill pattern to solid fill
    setfillstyle(SOLID_FILL, RED); // You can choose any color from predefined color list or use RGB value
    // Fill ellipse
    floodfill(200, 180, WHITE); // Starting point for fill

    getch();
    closegraph();

}
void d()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw rectangle
    rectangle(50, 100, 250, 200);
    // Draw circle
    circle(140, 150, 40);
    // Draw rectangles for windows
    rectangle(40, 100, 50, 300);
    rectangle(30, 300, 60, 310);

    // Set fill pattern to solid fill
    setfillstyle(SOLID_FILL, GREEN); // You can choose any color from predefined color list or use RGB value
    // Fill rectangle
    floodfill(55, 105, WHITE); // Starting point for fill

    // Set fill pattern to solid fill
    setfillstyle(SOLID_FILL, RED); // You can choose any color from predefined color list or use RGB value
    // Fill circle
    floodfill(140, 150, WHITE); // Starting point for fill

    // Set fill pattern to solid fill
    setfillstyle(SOLID_FILL, BROWN); // You can choose any color from predefined color list or use RGB value
    // Fill left window
    floodfill(45, 105, WHITE); // Starting point for fill
    // Fill right window
    floodfill(35, 305, WHITE); // Starting point for fill

    getch();
    closegraph();
}
void e()
{
   initwindow(1000,1000,"q");
    // Ground Outline
    circle(700, 350, 300);

    // Coloring Green
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(402, 350, 15);

    // 30 Yards Outline
    ellipse(700, 350, 0, 360, 150, 200);

    // Pitch Outer Line
    rectangle(675, 265, 725, 435);

    // Pitch Inner Line
    rectangle(690, 265, 710, 435);

    // Coloring Pitch Brown
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(695, 300, 15);

    // Upper Stump Line
    rectangle(690, 265, 710, 280);
    line(680, 280, 720, 280);

    // Lower Stump Line
    rectangle(690, 435, 710, 420);
    line(680, 420, 720, 420);

    // Hold Screen For A While
    getch();

    // Close the initialized gdriver
    closegraph();
}
void f()
{
     initwindow(1000,1000,"");

    setcolor(8);

    setfillstyle(SOLID_FILL,BLACK);
    rectangle(100,100,500,200);
    floodfill(101,101,8);

    setfillstyle(SOLID_FILL,RED);
    rectangle(100,201,500,300);
    floodfill(101,202,8);

    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(100,301,500,400);
    floodfill(101,302,8);


    setlinestyle(SOLID_LINE,0,20);

    line(100,90,100,700);

    getch();
    closegraph();
}
void g()
{
   initwindow(1000,1000,"Bangladesh Flag");

// Green rectangle representing the background
setcolor(GREEN);
setfillstyle(SOLID_FILL, GREEN);
rectangle(0, 0, 1000, 1000);
floodfill(10, 10, GREEN);

// Red circle representing the circle in the middle of the flag
setcolor(RED);
setfillstyle(SOLID_FILL, RED);
circle(300, 300, 100);
floodfill(300, 300, RED);

// A thin circle around the red circle
setcolor(RED);
setlinestyle(SOLID_LINE, 0, 1);
circle(300, 300, 100);

getch();
closegraph();
}
void h()
{
    int gd = DETECT, gm;
    int poly[12]= {350, 450, 350, 410, 430, 400, 350, 350, 300, 430, 350,450};
    initgraph(&gd, &gm, "");
    circle( 100, 100, 50 );
    outtextxy(75,170,"Circle");
    rectangle(200,50,350,150);
    outtextxy(240,170,"Rectangle");
    ellipse(500,100,0,360,100,50);
    outtextxy(480,170,"Ellipse");
    line(100,250,540,250);
    outtextxy(300,260,"Line");
    sector(150,400, 30,300,100,50);
    outtextxy(120,460,"Sector");
    drawpoly(6,poly);
    outtextxy(340,460,"Polygon");
    getch();
    closegraph();
}
void i()
{
    int gd=DETECT, gm, i;

    initgraph(&gd, &gm, "");

    rectangle(10, 10, 610, 476);
    rectangle(15, 15, 605, 471);

    for(i = 0; i < 30; i++)
    {
        arc(245, 198, 335, 420, 50);
        arc(225, 125, 325, 215, 50);
        arc(225, 125, 325, 215, 60);
        arc(185, 291, 120, 220, 12);
        arc(225, 291, 300, 90, 10);
        arc(270, 291, 300, 90, 10);
        arc(225, 200, 490, 410, 60);
        arc(225, 85, 239, 303, 80);
        arc(225, 138, 180, 5, 22);
        ellipse(223, 195, 60, 120, 30, 50);
        arc(225, 215, 180, 6, 30);
        arc(225, 90, 239, 303, 80);
        arc(200, 202, 100, 202, 48);
        circle(225, 176, 9);
        circle(160, 220, 6);
        circle(287, 220, 6);
        circle(225, 120, 7);
        circle(210, 100, 15);
        circle(210, 100, 1);
        circle(240, 100, 15);
        circle(240, 100, 1);
        line(180, 240, 180, 280);
        line(260, 214, 190, 214);
        line(268, 280, 178, 280);
        line(273, 300, 175, 300);
        line(225, 280, 225, 260);
        line(270, 240, 270, 280);
        line(245, 135, 200, 135);
        line(219, 120, 190, 125);
        line(219, 120, 190, 130);
        line(219, 120, 190, 119);
        line(233, 120, 260, 124);
        line(233, 120, 260, 130);
        line(233, 120, 260, 118);

        delay(300);

        setfillstyle(SOLID_FILL, i);
        floodfill(225, 140, BLUE);
        floodfill(220, 205, WHITE);
        floodfill(250, 205, WHITE);
        floodfill(225, 180, RED);
        floodfill(200, 190, BLUE);
        floodfill(250, 190, BLUE);
    }
    getch();
    closegraph();
}
void j()
{
    int gd=DETECT, gm, i;

    initgraph(&gd, &gm, "");
    setcolor(WHITE);
    rectangle(150, 180, 250, 300);
    rectangle(250, 180, 420, 300);
    rectangle(180, 250, 220, 300);
    line(200, 100, 150, 180);
    line(200, 100, 250, 180);
    line(200, 100, 370, 100);
    line (370, 100, 420, 180); /*Fill colours*/
    setfillstyle( SOLID_FILL,BROWN);
    floodfill(152, 182, WHITE);
    floodfill(252, 182, WHITE);
    setfillstyle(SLASH_FILL,BLUE);
    floodfill(182, 252, WHITE);
    setfillstyle(HATCH_FILL, GREEN);
    floodfill(200, 105, WHITE);
    floodfill(210, 105, WHITE);
    getch();
    closegraph();
}
void k()
{
        int gd=DETECT, gm;
	initgraph(&gd, &gm, "");
	setcolor(DARKGRAY);

	setfillstyle(1,MAGENTA);
	ellipse(250,200,0,360,150,52);
	floodfill(200,200,DARKGRAY);
	setfillstyle(1,RED);

	circle(350,200,10);
	floodfill(351,200,DARKGRAY);

	setfillstyle(1,YELLOW);
	ellipse(350,200,108,250,50,45);
	floodfill(320,200,DARKGRAY);


	setfillstyle(1,GREEN);
	    line(50,150,100,200);
		line(50,150,70,200);

		line(50,250,70,200);
		line(50,250,100,200);
		floodfill(99,200,DARKGRAY);
		//pakhna
		setfillstyle(1,BLUE);
		 line(250,100,200,150);
		 line(250,100,300,150);
        line(200,150,300,150);

		floodfill(250,110,DARKGRAY);
        line(250,300,200,250);
		 line(250,300,300,250);
		 line(200,250,300,250);
		 floodfill(250,299,DARKGRAY);
		 //bubbole
		 circle(450,200,10);
		 circle(450,150,10);
		 circle(450,100,10);
getch();
	closegraph();
}

int main()
{
    r();
    z();
    int x;
    while(1)
    {
        cout<<"Enter your choice : "<<endl;
        cin>>x;
        switch(x)
        {
        case 1:
            a();
            break;
        case 2:
            b();
            break;
        case 3:
            c();
            break;
        case 4:
            d();
            break;
        case 5:
            e();
            break;
        case 6:
            f();
            break;
        case 7:
            g();
            break;
        case 8:
            h();
            break;
        case 9:
            i();
            break;
        case 10:
            j();
            break;
        case 11:
            k();
            break;
        case 0:
            exit(0);
        default :
            cout<<" ========You choice invalid number.======== "<<endl;
            cout<<" Invalid Choice. Please try again. "<<endl;
            break;
        }
    }
}
