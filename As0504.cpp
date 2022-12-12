/*
张锦睿  2018302100103	
判断子字符串 
*/
#include <iostream>
#include<string.h>
using namespace std;

int main()//顺序查找的子函数
{	
	char a[100],b[100];
	cout<<"输入两组字符串"; 
	cin.getline(a,100);
	cin.getline(b,100);//cin>>a;
	int blen=strlen(b);
	int alen=strlen(a);
	int i=0,j,n,weizhi;
		for(j=0;j<alen;j++)
		{
			i=0;
			if(b[i]==a[j])
			{
				weizhi=j,n=j;
				for(;n<(weizhi+blen-1);n++,i++)
				{
					if(b[i]==a[n])	
						continue;
					else break;
				}
			}
		}
			if((n+1)==(weizhi+blen))
			{cout<<"b是a的子列，第一次出现的位置为:"<<weizhi+1<<endl;return 0;}
			else if(j=(alen-1))
			{cout<<"b不是a的子列"<<endl; return 0;}
		
	return 0;

}
