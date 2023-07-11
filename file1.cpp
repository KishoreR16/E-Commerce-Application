/*Create a Shopping E-Commerce application using C++ programming it should contains,*/

#include "file3.cpp"
#include<stdlib.h>
vector<string> v;


class Authenticate{
	public:
	virtual void getdata()=0;
	virtual int checking()=0;
	
};
template<class T>
class signin:public Authenticate
{
	T a;
	T b;
	public:
	void getdata()
	{
		cout<<"enter username:";
		cin>>a;
		cout<<"enter password:";
		cin>>b;
	}
	int checking()
	{
		ifstream i("signin.txt");
		string str;
		while(1)
		{
			if(i>>str)
			{
				string valid="Username:";
				valid=valid+a;
				if(str.compare(valid)==0)
				{
					valid="Password:";
					valid=valid+b;
					i>>str;
					if(str.compare(valid)==0)
					{
						transform(a.begin(), a.end(), a.begin(), ::toupper);
						cout<<"                 WELCOME "<<a<<endl;
						return 1;
					}
					else
					{
						return 0;
					}
				}	
			}
			else
			{
				return 0;
			}			
		}
		i.close();
	}
	

};
class match
{
	public:
	template<class a>
	int match1(a string1,a string2)
	{
		if(string1==string2)
		{
			cout<<"Username and password must not be same"<<endl;
			return 0;
		}
		return 1;
	}
};
class signup:public match
{
	public:
	string a,b,c;
	void getdata()
	{
		cout<<"enter username:";
		cin>>a;
		cout<<"enter password:";
		
		
		cin>>b;
		cout<<"confirm your password:";
		cin>>c;
	}
	
	friend int passwords(signup);
	
};
int passwords(signup s2)
{
	if(s2.b==s2.c)
	{
		ofstream o("signin.txt",ios::app);
		string str;
		o<<endl<<"Username:"<<s2.a<<endl;
		o<<"Password:"<<s2.b<<endl;
		o.close();
		return 1;
	}
	else
	{
		return 0;
	}
}

void display1()
{
	cout<<"press 1 to sign in"<<endl;
	cout<<"press 2 to sign up"<<endl;
	cout<<"press 3 to exit the application"<<endl;
}Wishlist::total add;
class payment:public Wishlist
{
	public:
	void show()
	{
		add.amount();
		cout<<"List of items bought"<<endl;
		cout<<setw(20)<<"quantity"<<setw(20)<<"Item"<<setw(20)<<"cost"<<endl;
		int j=1;
		for(int i=0;i<add.buy.size();i=i+2)
		{
			cout<<setw(20)<<j++<<setw(20)<<add.buy[i]<<setw(20)<<add.buy[i+1]<<endl;
		}
		cout<<endl;
		cout<<setw(20)<<"price:"<<add.payable<<setw(20)<<"(excluding gst)"<<endl;
		
	}
	void operator ++ () {
        int payable1;
		payable1=add.payable*28/100;
		add.payable=add.payable+payable1;
    }
};
int categories()
{
	string str;
	ifstream of;
	int count1,count2,count3,count4;
	of.open("appliances.txt");
				while(of>>str)
				{
				
					str=str.substr(5);
					v.push_back(str);
					of>>str;
					str=str.substr(6);
					v.push_back(str);
				}
				count1=v.size();
				of.close();

				of.open("laptops.txt");
				while(of>>str)
				{
					str=str.substr(5);
					v.push_back(str);
					of>>str;
					str=str.substr(6);
					v.push_back(str);
				}
				count2=v.size();
				of.close();
				
				of.open("mobiles.txt");
				while(of>>str)
				{
				
					str=str.substr(5);
					v.push_back(str);
					of>>str;
					str=str.substr(6);
					v.push_back(str);
				}
				count3=v.size();
				of.close();
			
				of.open("tv.txt");
				while(of>>str)
				{
				
					str=str.substr(5);
					v.push_back(str);
					of>>str;
					str=str.substr(6);
					v.push_back(str);
				}
				count4=v.size();
				of.close();
	
	
	
	int choice,cart,sample;
	string final2;
	
	char answer;
	do{
		cout<<"CATEGORIES"<<endl;
		cout<<"1.Appliances"<<endl;
		cout<<"2.Laptops"<<endl;
		cout<<"3.Mobiles"<<endl;
		cout<<"4.TV"<<endl;
		cout<<"5.Cart"<<endl;
		cout<<"6.Go Back"<<endl;
		cout<<"enter your choice:";
		cin>>choice;
		string str;
		ifstream of;
		char final1;
		
		switch(choice)
		{
			case 1:
				cout<<setw(40)<<"APPLIANCES"<<endl;
				cout<<setw(20)<<"Item No"<<setw(20)<<"Item"<<setw(20)<<"cost"<<endl;
				for(int i=0,j=i+1;i<count1;i++,j++)
				{
					cout<<setw(20)<<j<<setw(20)<<v[i++];
					cout<<setw(20)<<v[i]<<endl;
				}
				cout<<"do you want to continue:press(y/Y)"<<endl;
				cin>>answer;
				if((answer!='Y') && (answer!='y'))
				{
					break;
				}
				cout<<"press the item no to add to the cart:";
				cin>>cart;
				
					sample=(cart-1)*2;
					add.cart(v,sample,sample+1);
				
				break;
			case 2:
				cout<<setw(40)<<"LAPTOPS"<<endl;
				cout<<setw(20)<<"Item No"<<setw(20)<<"Item"<<setw(20)<<"cost"<<endl;
				for(int i=count1,j=i/2+1;i<count2;i++,j++)
				{
					cout<<setw(20)<<j<<setw(20)<<v[i++];
					cout<<setw(20)<<v[i]<<endl;
				}
				cout<<"do you want to continue:press(y/Y)"<<endl;
				cin>>answer;
				if((answer!='Y') && (answer!='y'))
				{
					break;
				}
				cout<<"press the item no to add to the cart:";
				cin>>cart;
				
					sample=(cart-1)*2;
					add.cart(v,sample,sample+1);
				
				break;
			case 3:
				cout<<setw(40)<<"MOBILES"<<endl;
				cout<<setw(20)<<"Item No"<<setw(20)<<"Item"<<setw(20)<<"cost"<<endl;
				for(int i=count2,j=i/2+1;i<count3;i++,j++)
				{
					cout<<setw(20)<<j<<setw(20)<<v[i++];
					cout<<setw(20)<<v[i]<<endl;
				}
				cout<<"do you want to continue:press(y/Y)"<<endl;
				cin>>answer;
				if((answer!='Y') && (answer!='y'))
				{
					break;
				}
				cout<<"press the item no to add to the cart:";
				cin>>cart;
				
					sample=(cart-1)*2;
					add.cart(v,sample,sample+1);
				
				break;
			case 4:
				cout<<setw(40)<<"TV"<<endl;
				cout<<setw(20)<<"Item No"<<setw(20)<<"Item"<<setw(20)<<"cost"<<endl;
				for(int i=count3,j=i/2+1;i<v.size();i++,j++)
				{
					cout<<setw(20)<<j<<setw(20)<<v[i++];
					cout<<setw(20)<<v[i]<<endl;
				}
				cout<<"do you want to continue:press(y/Y)"<<endl;
				cin>>answer;
				if((answer!='Y') && (answer!='y'))
				{
					break;
				}
				cout<<"press the item no to add to the cart:";
				cin>>cart;
				
					sample=(cart-1)*2;
					add.cart(v,sample,sample+1);
				
				break;
			case 5:	
				cout<<"press 'p' to go to the cart-->";
				char answer1;
				cin>>answer1;
				if(answer1=='p')
				{
					payment p;
				
					p.show();
					cout<<"do you want to buy the products,if 'yes' press 'y' or 'Y'"<<endl;
					cin>>final1;
					if((final1=='y') || (final1='Y'))
					{
						++p;
						
					cout<<setw(50)<<add.payable<<setw(5)<<"including gst"<<endl;
					cout<<"enter 'pay' to pay the amount"<<endl;
					cin>>final2;
					if(final2=="pay")
					{
						cout<<"Items Bought,Thank You";
						exit(0);
					}	
					}
				}
		}
	}while(choice!=6);

	return 0;
}




int main()
{
	cout<<"         E COMMERCE APPLICATION"<<endl;
	
	int choice;
	do
	{
		display1();
		cout<<"enter your choice:";
		cin>>choice;
		if(choice==1)
		{
			cout<<"SIGN IN PAGE"<<endl;
			Authenticate *s1;
			
			signin<string> s2;
			s1=&s2;
			s1->getdata();
			if(s1->checking())
			{
				cout<<"HOME PAGE"<<endl;
				categories();
				
			}
			else
			{
				cout<<"wrong user name or password"<<endl;
			}
		}
		else if(choice==2)
		{
			cout<<"SIGN UP PAGE"<<endl;
			signup s2;
			s2.getdata();
			if(s2.match1(s2.a,s2.b))
			{
				if(passwords(s2))
				{
					cout<<"Account created"<<endl;	
				}
				else
				{
					cout<<"Invalid credentials"<<endl;
				}
					
					
			}
			else
			{
				try
				{
					throw 0;
				}
				catch(int x)
				{
					cout<<"Invalid credentials"<<endl;
				}
			
			}
		}
		else
		{
			cout<<"Thank You,Please visit again...";
			break;
		}
		
	}while(choice!=3);
	
	return 0;
}