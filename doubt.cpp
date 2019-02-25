#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	string str;
	cin>>num;
	for(int i = 0 ; i < num ; i++)
	{
		int flag=0;
		cin>>str;
		for(int j = 0 ; j < str.length() - 1 ; j++)
		{	
			if(isdigit(str[j]) && isalpha(str[j+1]))
			{
				flag = 0;
				break;
			}		
			else
			{
				flag  = 1;			
			}
		}

		if(flag == 0)
		{
			int ff = 0 , row = 0 , col = 0;
			string ans = "";
			for(int j = 0 ; j < str.length() ; j++)
			{	
				if(isalpha(str[j]))
				{
					ff++;
					continue;				
				}
				if(ff == 1)
				{
					row = row*10 + (int(str[j]) - int('0'));
				}
				else
				{
					col = col*10 + (int(str[j]) - int('0'));
				}
			
			}

			if(col<26)
			{
				ans = char(64+col) + to_string(row);
				cout<<ans;			
			}
	
			else
			{
				while(col>0)
				{
					int lst = col%26;
					if (lst == 0)
					{
						ans = ans + char(64+26+lst);					
						col =  col / 26 -1;				
					}
					else
					{
						ans = ans + char(64+lst);
						col =  col / 26;				
					}
				}				
				reverse(ans.begin() , ans.end());
				cout<<ans + to_string(row)<<"\n";			
									
			}
		}
		else if(flag == 1)
		{
			string s = "";
			int ans = 0  , f = 0;
			for(int j = str.length() -1 ; j>=0 ; j--)
			{
				if(isdigit(str[j]))
					s = s + str[j];
				else{				
					ans = ans + pow(26,f) * (int(str[j]) - 64);
					f++;
				} 				
			}	
	
			reverse(s.begin() , s.end());
			cout<<('R' + s+ 'C' +to_string(ans))<<"\n";						
		}
		
	}
	return 0;
}
