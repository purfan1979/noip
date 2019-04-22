#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
struct student
{
	int sum;
	int yu;
	int shu;
	int ying;
	int xuehao;
}; 

bool cmp(student a,student b)
{
	if(a.sum != b.sum)
	{
		return a.sum>b.sum;
	}
	else if(a.yu != b.yu)
	{
		return a.yu>b.yu;
	}
	else
	{
		return a.xuehao<b.xuehao;
	}
}
int main()
{
	int n;
	cin>>n;
	student a[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d%d%d",&a[i].yu,&a[i].shu,&a[i].ying);
		a[i].sum = a[i].yu+a[i].shu+a[i].ying;
		a[i].xuehao = i+1;
	}
	sort(a,a+n,cmp);
	for(int i=0; i<5; i++)
	{
		printf("%d %d\n",a[i].xuehao,a[i].sum);
	}
	
	return 0;	
}
