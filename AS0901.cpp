/*张锦睿 2018302100103
几何图形 
*/	
#include <iostream>
using namespace std;
#define PI 3.1415
class CX_Shape
{
	public:
		virtual void show()=0;
		virtual float Area()=0; 
};
class Triangle:public CX_Shape
{
	protected:double h;
	public:
	Triangle(double hh=0)
		{
			h=hh;
		}	
	void show()
	{
		cout<<"图形为等腰直角三角形";
	}
	double getX()
	{
		return h;
	}
	double setX(double xx)
	{
		h=xx;
		return h;
	}
	float Area()
	{
		cout<<"面积为";
		return (h*h)/2;
	 } 
};
class Rectangle:public CX_Shape
{
	protected:double width,lenth;
	public:
	Rectangle(double xx=0,double yy=0)
	{
			lenth=xx;
			width=yy;
	}	
	double get_width()
	{
		return width;
	}
	double get_lenth()
	{
		return lenth;
	}
	double set_width(double w)
	{
		width=w;
		return width;
	}
	double set_lenth(double l)
	{
		lenth=l;
		return lenth;
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
class Circle:public CX_Shape
{
	protected:double r;
	public:
	Circle(double rr=0)
		{
			r=rr;
		}	
	void show()
	{
		cout<<"图形为圆形";
	}
	double getR()
	{
		return r;
	}
	double setR(double rr)
	{
		r=rr;
		return rr;
	}
	float Area()
	{
		cout<<"面积为";
		return PI*r*r; 
	}
};
class Cube:public CX_Shape
{
	protected:double l;
	public:
	Cube(double ll=0)
		{
			l=ll;
		}	
	double getL()
	{
		return l;
	}
	double setL(double ll)
	{
		l=ll;
		return l;
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
void showshape(CX_Shape *ps)
{
	ps->show();
}
double Cal(CX_Shape *ps)
{	
	cout<<ps->Area();	
	
}
int main()
{
	double hight;
	cout<<"input the height of Triangle";
	cin>>hight;
	Triangle tr1(tr1.setX(hight));
	showshape(&tr1);cout<<"\t";
	Cal(&tr1);
	cout<<"\n";
	double radius;
	cout<<"input the radius of Circle";
	cin>>radius;
	Circle c1(c1.setR(radius));
	showshape(&c1);cout<<"\t";
	Cal(&c1);
	cout<<"\n";
	double lenth;
	cout<<"input the lenth of Cube";
	cin>>lenth;
	Cube cu1(cu1.setL(lenth));
	showshape(&cu1);cout<<"\t";
	Cal(&cu1); 
	cout<<"\n";
	double w,l;
	cout<<"input the wide and lenth of Rectangle";
	cin>>w>>l;
	Rectangle re1(re1.set_width(w),re1.set_lenth(l));
	showshape(&re1);cout<<"\t";
	Cal(&re1);
	return 0;
}
