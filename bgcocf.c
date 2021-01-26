
#include<iostream>
#include<bits/stdc++.h>

int l[10001];
int N2[] = {6,2,4,8};
int N5[] = {1,5};
int N9[] = {1,9};
int N[] = {1,1,1,3,9};
int ans;

int f2(int n)
{
	int tn, t;

	if(n<2)
		return 0;
	tn = n;
	if(tn%2==0)
		tn--;
	if(tn%10==5)
		tn -= 2;
	t = tn/10;
	ans *= N9[t%2];
	ans *= N[(tn%10)%5];
	ans %= 10;
	return (n/2+f2(n/2));
}

int f5(int n)
{
	if(n<5)
	{
		return 0;
	}
	return (n/5+f5(n/5));
}

int cal(int n)
{
	int n2, n5;

	n2 = f2(n);
	n5 = f5(n);
	ans *= N2[(n2-n5)%4];
	ans %= 10;
	for(n5 = 5; n5 <= n; n5+=5)
	{
		n2 = n5;
		while(n2%5==0)
			n2/=5;
		while(n2%2==0)
			n2/=2;
		ans *= n2;
		ans %= 10;
	}
	return ans;
}

void input()
{
	int n;

	while(scanf("%d",&n)==1)
	{
		if(n<2)
		{
			printf("%5d -> 1\n",n);
			continue;
		}
		ans = 1;
		cal(n);
		printf("%5d -> %d\n",n,ans);
	}
}

int main()
{
	input();
	return 1;
}
