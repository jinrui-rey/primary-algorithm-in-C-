/* 3N+1猜想*/
#include<iostream>
#include<cmath> 
using namespace std;
int odd(int a); 
int even(int a);

int main()
{
	int ognb;//定义原始数字 
	int stpnb,remainder;
	int i,j=0;
	cout<<"input the orginal number\n";
	cin>>ognb;//输入原始数字 
	if(ognb==1)
		cout<<"the number is not acceptable\n";
	else 
	stpnb=ognb;
	do{
	
		remainder=stpnb%2;
		if(remainder==0)
		{
			stpnb=even(stpnb);
			cout<<stpnb<<" ";
			i=i+1;
		}
		else 
		{
			stpnb=odd(stpnb);
			cout<<stpnb<<" ";
			j=j+1;
		}
	}while(stpnb!=1);
	int finstp;
	finstp=i+j;
	cout<<"\nthe final step is "<<finstp;
	return 0;
}
int even(int a )
{
	int out;
	out= a/2;
	return out;
}
int odd(int a)
{
	int out;
	out=a*3+1;
	return out;
}
