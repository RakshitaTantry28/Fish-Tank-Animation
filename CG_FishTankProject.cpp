#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
//-----------------oxygen bubble------------
void oxygen_bubble(int i, int y){
if(y<100){
	//second bubble
	y=y*200;
	if(y>200){
		circle(100, y+110-i,5);
		}
	}
	else{
	//1st bubble
		circle(100, y+100-i, 5);
	}
}

void main(){
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");
int i, y=200;
for(i=0; i<300; i++){ //for animation
	//fish 1
	setcolor(CYAN);
	line(150+i,250,190+i,290);
	line(150+i,250,90+i,310);
	line(90+i,270,150+i,330);
	line(190+i,290,150+i,330);
	line(90+i,310,90+i,270);
	setcolor(RED);
	circle(170+i,290,3);
	//fish 2
	arc(400-i,150,50,320,30);
	line(420-i,128,450-i,160);
	line(420-i,173,450-i,130);
	line(450-i,160,450-i,130);
	setcolor(BLUE);
	circle(380-i,150,3);
	arc(380-i,150,270,90,20);
	//fish tank
	setcolor(WHITE);
	line(50,300,80,300);
	line(80,300,80,370);
	line(50,370,80,370);
	line(80,305,90,305);
	line(80,310,90,310);
	line(90,305,90,310);
	oxygen_bubble(i,y);
	y--;
	//-------------------------Fish tank body------------//
	//roof
	line(50,10,550,10);
	line(50,10,10,100);
	line(550,10,590,100);
	line(10,100,590,100);
	//tank border
	line(50,100,50,400);
	line(550,100,550,400);
	line(50,400,550,400);
	//stones
	setfillstyle(SOLID_FILL, BLUE);
	fillellipse(100, 390, 20, 10);
	ellipse(100,390,0,360,20,10);
	setfillstyle(SOLID_FILL, RED);
	fillellipse(125, 370, 25, 10);
	ellipse(125,370,0,360,25,10);
	setfillstyle(CLOSE_DOT_FILL, GREEN);
	fillellipse(150, 390, 25, 10);
	ellipse(150,390,0,360,25,10);
	setfillstyle(SOLID_FILL, YELLOW);
	fillellipse(170, 375, 15, 5);
	ellipse(170,375,0,360,15,5);
	circle(180,390,10);
	setfillstyle(SOLID_FILL, MAGENTA);
	fillellipse(200, 380, 20, 15);
	ellipse(200,380,0,360,20,15);
	circle(220,390,10);
	setfillstyle(LTSLASH_FILL, BLUE);
	fillellipse(250, 380, 20, 15);
	ellipse(250,380,0,360,20,15);
	setfillstyle(SOLID_FILL, RED);
	fillellipse(290, 390, 20, 10);
	ellipse(290,390,0,360,20,10);
	setfillstyle(SOLID_FILL, MAGENTA);
	fillellipse(315, 370, 25, 10);
	ellipse(315,370,0,360,25,10);
	setfillstyle(BKSLASH_FILL, CYAN);
	fillellipse(340, 390, 25, 10);
	ellipse(340,390,0,360,25,10);
	setfillstyle(SOLID_FILL, BROWN);
	fillellipse(360, 375, 15, 5);
	ellipse(360,375,0,360,15,5);
	circle(370,390,10);
	setfillstyle(LINE_FILL, GREEN);
	fillellipse(390, 380, 20, 15);
	ellipse(390,380,0,360,20,15);
	circle(410,390,10);
	setfillstyle(SLASH_FILL, RED);
	fillellipse(440, 380, 20, 15);
	ellipse(440,380,0,360,20,15);
	setfillstyle(SOLID_FILL, YELLOW);
	fillellipse(480, 390, 20, 10);
	ellipse(480,390,0,360,20,10);
	setfillstyle(HATCH_FILL, BLUE);
	fillellipse(505, 370, 25, 10);
	ellipse(505,370,0,360,25,10);
	setfillstyle(XHATCH_FILL, RED);
	fillellipse(530,390,25,10);
	ellipse(530,390,0,360,25,10);
	delay(80);
	cleardevice();
}
getch();
closegraph();
}

