#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n , m , a, num1 , num2 , num;
	cin>>n>>m>>a;
	num1 = ceil((double)n/a);
       	num2 = ceil((double)m/a);
	cout<<num1*num2;
	return 0;
}
