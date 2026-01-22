#include<iostream>
using namespace std;

class Consumer
{
  public:int c_id;
  public:string name;
  public:float units_c;
  
  void get()
  {
  	cout << "Enter Consumer ID: ";
  	cin >> c_id;
  	
  	cout << "Enter Consumer Name: ";
  	cin >> name;
  	
  	cout << "Enter Units Consumed: ";
  	cin >> units_c;
  }
  
  void input()
  {
  	cout << "Consumer ID is : " << c_id << endl;
  	cout << "Consumer Name is : " << name << endl;
  	cout << "Bill Consumer  is : " << units_c << endl;
  }
  
  void Bill_method()
  {
  	if(units_c<=100)
  	{
  	  cout << "Total Consumed bill is: " << units_c*1.50;	
	}
	
	else if(units_c>=101 && units_c<300)
	{
	  cout << "Total Consumed bill is : "<< units_c*2.00;	
	}
	
	else if(units_c>=300)
	{
		cout << "Total Consumed bill is : "<< units_c*3.00;
	}
  }
};

int main()
{
	class Consumer k;
	k.get();
	k.input();
	k.Bill_method();
}
