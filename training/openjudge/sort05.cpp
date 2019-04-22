#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
struct student
{
	int xuehao;
	int fengshu;
}; 

bool cmp(student a,student b)
{
	if(a.fengshu != b.fengshu)
	{
		return a.fengshu>b.fengshu;
	}
	else
	{
		return a.xuehao<b.xuehao;
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	student a[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d%d",&a[i].xuehao,&a[i].fengshu);
	}
	sort(a,a+n,cmp);
	
	int x;
	x = floor(m*1.5);
	int temp = a[x-1].fengshu;
	cout<<temp<<' ';
	int sum=0;
	for(int i=0; i<n; i++)
	{
		if(a[i].fengshu>=temp)
		{
			sum++;
		}
	}
	cout<<sum<<endl;
	for(int i=0; i<n; i++)
	{
		if(a[i].fengshu>=temp)
		{
			printf("%d %d\n",a[i].xuehao, a[i].fengshu);
		}
	}
	
	return 0;	
}
