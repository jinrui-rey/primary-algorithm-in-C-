/*’≈ΩıÓ£  2018302100103
ªÊ÷∆Õº–Œ 
*/ 
#include <graphice.h>
#include <conio.h>
#include <windows.h>
class ZhCircle
{
	private:int x,y,r;
	public:
		ZhCircle(int xx,int yy, int rr)
		{
			x=xx;y=yy;r=rr;
		}
		void setPos (int xx,int yy)
		{
			x=xx;y=yy;
		}
		void getR(int rr)
		{
			r=rr;
		}
		void draw()
		{
			circle(x,y,r);
		}
 } ;
 int main()
 {
 	int graph(640,490)
 	ZhCircle c(200,200,50)
 	for(int i=0;i<20;i++)
 	{
 		cleardevice();
 		c.setPos(200+i*5,200);
 		c.setR(50+i*5);
 		c.draw();
 		sleep(200);
	 }
 }
