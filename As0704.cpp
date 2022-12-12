#include <iostream>
#include <conio.h>
using namespace std;
class Circle
{
	int x,y,r;
public:
	Circle()
	{
		x=0;y=0;r=0;
	}
	void setcenter(int X,int Y)
	{
		x=X;y=Y;
	}
	void setr(int R)
	{
		r=R;
	}
	void drawcircle()
	{
		circle(x,y,r);
	}
};
class rrectangle
{
private:
	int left,top,right,bottom;
public:
	rrectangle()
	{
		left=0;top=0;right=0;bottom=0;
	}
	void setcoord(int l,int t,int r,int b)
	{
		left=l;top=t;right=r;bottom=b;
	}
	void drawrectangle()
	{
		rectangle(left,top,right,bottom);
	}
};
int main()
{
	initgraph(640,480);
	Circle c1,c2,c3,c4;
	setcolor(BLUE);
	c1.setcenter(100,500);
	c1.setr(100);
	c1.drawcircle();
	setcolor(LIGHTCYAN);
	c2.setcenter(300,300);
	c2.setr(150);
	c2.drawcircle();
	setcolor(LIGHTGRAY);
	c3.setcenter(400,100);
	c3.setr(50);
	c3.drawcircle();
	_getch();
	initgraph(640,480);
	BeginBatchDraw();
	for(int i=50; i<600; i++)
	{
		setcolor(MAGENTA);
		c4.setcenter(i,300);
		c4.setr(100);
		c4.drawcircle();
		FlushBatchDraw();
		Sleep(10);
		cleardevice();
	}
	EndBatchDraw();
	_getch();
	rrectangle r1;
	setcolor(CYAN);
	r1.setcoord(50,150,250,350);
	r1.drawrectangle();
	_getch();
	closegraph();
}
