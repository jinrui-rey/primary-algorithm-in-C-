#include <iostream>
using namespace std;
#define PI 3.1415
class CX_Shape
{
	public:
		virtual void show()=0;
		virtual float Area()=0; 
};
class Point:public CX_Shape
{
	protected :
		double x,y;
	public:
	Point(double xx=0,double yy=0)
	{
		x=xx;y=yy;
	}
	void show()
	{
		cout<<"This is a point";
	}
	float Area()
	{
		return 0;
	}
};
class Triangle:public Point
{
	protected:double h;
	public:
	Triangle(double xx=0,double yy=0,double hh=0):Point(x,y)
		{
			h=hh;
		}	
	void show()
	{
		cout<<"图形为三角形";
	}
	float Area()
	{
		cout<<"面积为";
		return (h*h)/2;
	 } 
};
class Retangle:public Point
{
	protected:double width,lenth;
	public:
	Retangle(double a=0, double b=0, double xx=0,double yy=0):Point(x,y)
		{
			lenth=xx;
			width=yy;
		}	
	void show()
	{
		cout<<"图形为矩形";
	}
	float Area()
	{
		cout<<"面积为";
		return lenth*width;
	}
};
class Circle:public Point
{
	protected:double r;
	public:
	Circle(double xx=0, double yy=0, double rr=0):Point(x,y)
		{
			r=rr;
		}	
	void show()
	{
		cout<<"图形为圆形";
	}
	float Area()
	{
		cout<<"面积为";
		return PI*r*r; 
	}
};
class Cube:public Point
{
	protected:double l;
	public:
	Cube(double xx, double yy, double ll=0):Point(x,y)
		{
			l=ll;
		}	
	void show()
	{
		cout<<"图形为正方形";
	}
	float Area()
	{
		cout<<"面积为";
		return l*l;
	}
};
void showshape(CX_Shape &ps)
{
	ps.show();
}
double Cal(CX_Shape &ps)
{
	cout<<ps.Area();
}
int main()
{
	Point o(0,0);
	showshape(o);cout<<"\t";
	Cal(o);
	cout<<"\n";
	Triangle tr1(0,0,4);
	showshape(tr1);cout<<"\t";
	Cal(tr1);
	cout<<"\n";
	Circle c1(0,0,4);
	showshape(c1);cout<<"\t";
	Cal(c1);
	cout<<"\n";
	Cube cu1(0,0,2);
	showshape(cu1);cout<<"\t";
	Cal(cu1); 
	cout<<"\n";
	Retangle re1(0,0,2,1);
	showshape(re1);cout<<"\t";
	Cal(re1);
	return 0;
}
