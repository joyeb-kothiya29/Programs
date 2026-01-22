#include<iostream>
using namespace std;

class Consumer
{
  public:int c_id;
  public:string name;
  public:int t_p;
  
  void get()
  {
  	cout << "Enter Consumer ID: ";
  	cin >> c_id;
  	
  	cout << "Enter Consumer Name: ";
  	cin >> name;
  	
  	cout << "Enter Total Purchase: ";
  	cin >> t_p;
  }
  
  void input()
  {
  	cout << "Consumer ID is : " << c_id << endl;
  	cout << "Consumer Name is : " << name << endl;
  	cout << "Total Purchase is : " << t_p << endl;
  }
  
  void Discount()
  {
  	if(t_p>5000)
  	{
  	  cout << " discount is: " << t_p*5/100 << endl;	
  	  cout << "Total Purchase after discount is: " << t_p-(t_p*5/100);
	} 
	
	else if(t_p>2000 && t_p<5000)
	{
	 cout << " discount is: " << t_p*10/100 << endl;	
  	  cout << "Total Purchase after discount is: " << t_p-(t_p*10/100);	
	}
	
	else if(t_p<2000)
	{
		cout <<"No Discount";
	}
  }
};

int main()
{
	class Consumer k;
	k.get();
	k.input();
	k.Discount();
}
