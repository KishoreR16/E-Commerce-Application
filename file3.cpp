#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

class Wishlist{
	public:
class Add_to_cart
{
	public:
	vector<string> buy;
	void cart(vector<string> v,int i,int j)
	{
		buy.push_back(v[i]);
		buy.push_back(v[j]);
	}

};
class total:public Add_to_cart
{
	public:
	int payable=0;
	int quantity=buy.size()/2;
	void amount()
	{
		for(int i=1;i<buy.size();i=i+2)
		{
			int n=stoi(buy[i]);
			payable=payable+n;
		}
		
	}
	
};
};