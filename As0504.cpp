/*
�Ž��  2018302100103	
�ж����ַ��� 
*/
#include <iostream>
#include<string.h>
using namespace std;

int main()//˳����ҵ��Ӻ���
{	
	char a[100],b[100];
	cout<<"���������ַ���"; 
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
			{cout<<"b��a�����У���һ�γ��ֵ�λ��Ϊ:"<<weizhi+1<<endl;return 0;}
			else if(j=(alen-1))
			{cout<<"b����a������"<<endl; return 0;}
		
	return 0;

}
