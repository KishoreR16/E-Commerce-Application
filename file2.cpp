#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
void display()
{
	cout<<"press 1 to add products"<<endl;
	cout<<"press 2 to modify the product price"<<endl;
	cout<<"press 3 to log out"<<endl;
}
void display1()
{
	cout<<"CATEGORIES"<<endl;
	cout<<"1.Appliances"<<endl;
	cout<<"2.Laptops"<<endl;
	cout<<"3.Mobiles"<<endl;
	cout<<"4.TV"<<endl;
	cout<<"5.Go Back"<<endl;
}
void addproducts()
{
	
	int category;
	ofstream of;
	string str,product,price;
	do
	{
		display1();
		cout<<"Choose the category to add the products:";
		cin>>category;
		switch(category)
		{
			case 1:
				of.open("appliances.txt",ios::app);
				cout<<"APPLIANCES"<<endl;
				cout<<"enter the product name:";
				cin>>product;
				cout<<"enter the price of the product";
				cin>>price;
				str="item:";
				product=str+product;
				str="price:";
				price=str+price;
				of<<product<<endl<<price<<endl;
				cout<<"product added"<<endl;
				of.close();
				break;
			case 2:
				of.open("laptops.txt",ios::app);
				cout<<"LAPTOPS"<<endl;
				cout<<"enter the product name:";
				cin>>product;
				cout<<"enter the price of the product";
				cin>>price;
				str="item:";
				product=str+product;
				str="price:";
				price=str+price;
				of<<product<<endl<<price<<endl;
				cout<<"product added"<<endl;
				of.close();
				break;
			case 3:
				of.open("mobiles.txt",ios::app);
				cout<<"MOBILES"<<endl;
				cout<<"enter the product name:";
				cin>>product;
				cout<<"enter the price of the product";
				cin>>price;
				str="item:";
				product=str+product;
				str="price:";
				price=str+price;
				of<<product<<endl<<price<<endl;
				cout<<"product added"<<endl;
				of.close();
				break;
			case 4:
				of.open("tv.txt",ios::app);
				cout<<"TV"<<endl;
				cout<<"enter the product name:";
				cin>>product;
				cout<<"enter the price of the product";
				cin>>price;
				str="item:";
				product=str+product;
				str="price:";
				price=str+price;
				of<<product<<endl<<price<<endl;
				cout<<"product added"<<endl;
				of.close();
				break;
				
		}
	}while(category!=5);
}
void modify_products()
{
	int category,flag=0;
	ifstream of;
	ofstream of1;
	string str,str1,product,price;
	do
	{
		display1();
		cout<<"Choose the category to add the products:";
		cin>>category;
		switch(category)
		{
			case 1:
				of.open("appliances.txt");
				of1.open("temp1.txt");
				cout<<"APPLIANCES"<<endl;
				cout<<"enter the product name:";
				cin>>product;
				cout<<"enter the price of the product";
				cin>>price;
				while(of>>str)
				{
					str1="item:"+product;
					if(str==str1)
					{
						of1<<str1<<endl;
						of>>str;
						price="price:"+price;
						of1<<price<<endl;
						flag=1;
					}
					else
					{
						of1<<str<<endl;
						of>>str;
						of1<<str<<endl;
						
					}
				}
				if(flag==0)
				{
					cout<<"no product found";
				}
				else{
					cout<<"Changed the price"<<endl;
				}
				of.close();
				of1.close();
				remove("appliances.txt");
				rename("temp1.txt","appliances.txt");
				
				break;
			case 2:
				of.open("laptops.txt");
				of1.open("temp1.txt");
				cout<<"LAPTOPS"<<endl;
				cout<<"enter the product name:";
				cin>>product;
				cout<<"enter the price of the product";
				cin>>price;
				while(of>>str)
				{
					str1="item:"+product;
					if(str==str1)
					{
						of1<<str1<<endl;
						of>>str;
						price="price:"+price;
						of1<<price<<endl;
						flag=1;
					}
					else
					{
						of1<<str<<endl;
						of>>str;
						of1<<str<<endl;
						
					}
				}
				if(flag==0)
				{
					cout<<"no product found";
				}
				else{
					cout<<"Changed the price"<<endl;
				}
				of.close();
				of1.close();
				remove("laptops.txt");
				rename("temp1.txt","laptops.txt");
				
				break;
			case 3:
				of.open("mobiles.txt");
				of1.open("temp1.txt");
				cout<<"MOBILES"<<endl;
				cout<<"enter the product name:";
				cin>>product;
				cout<<"enter the price of the product";
				cin>>price;
				while(of>>str)
				{
					str1="item:"+product;
					if(str==str1)
					{
						of1<<str1<<endl;
						of>>str;
						price="price:"+price;
						of1<<price<<endl;
						flag=1;
					}
					else
					{
						of1<<str<<endl;
						of>>str;
						of1<<str<<endl;
						
					}
				}
				if(flag==0)
				{
					cout<<"no product found";
				}
				else{
					cout<<"Changed the price"<<endl;
				}
				of.close();
				of1.close();
				remove("mobiles.txt");
				rename("temp1.txt","mobiles.txt");
				
				break;
			case 4:
				of.open("tv.txt");
				of1.open("temp1.txt");
				cout<<"APPLIANCES"<<endl;
				cout<<"enter the product name:";
				cin>>product;
				cout<<"enter the price of the product";
				cin>>price;
				while(of>>str)
				{
					str1="item:"+product;
					if(str==str1)
					{
						of1<<str1<<endl;
						of>>str;
						price="price:"+price;
						of1<<price<<endl;
						flag=1;
					}
					else
					{
						of1<<str<<endl;
						of>>str;
						of1<<str<<endl;
						
					}
				}
				if(flag==0)
				{
					cout<<"no product found";
				}
				else{
					cout<<"Changed the price"<<endl;
				}
				of.close();
				of1.close();
				remove("tv.txt");
				rename("temp1.txt","tv.txt");
				
				break;
				
		}
	}while(category!=5);
}

void show()
{
	cout<<"         E COMMERCE APPLICATION"<<endl;
	cout<<"ADMIN PAGE"<<endl;
	int choice;
	do
	{
		display();
		cout<<"enter your choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"ADD PRODUCTS"<<endl;
				addproducts();
				break;
			case 2:
				cout<<"MODIFY PRODUCTS"<<endl;
				modify_products();
				break;
			case 3:
				cout<<"Thank you..."<<endl;
		}
	}while(choice!=3);
	
}
void display2()
{
	cout<<"press 1 to log in"<<endl;
	cout<<"press 2 to exit the application"<<endl;
}

template<class T>
class admin
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
		ifstream i("admin.txt");
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
int main()
{
	cout<<"         E COMMERCE APPLICATION"<<endl;
	
	int choice;
	do
	{
		display2();
		cout<<"enter your choice:";
		cin>>choice;
		if(choice==1)
		{
			cout<<"LOG IN PAGE"<<endl;
			admin<string> s1;
			s1.getdata();
			if(s1.checking())
			{
				cout<<"HOME PAGE"<<endl;
				show();
				
			}
			else
			{
				cout<<"wrong user name or password"<<endl;
			}
		}
		else
		{
			cout<<"Thank You,Please visit again...";
			break;
		}
		
	}while(choice!=1);
	
	return 0;
}