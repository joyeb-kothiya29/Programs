#include<iostream>
using namespace std;

class Length
{
	int value;			
	
	public:	
		Length(int v)
		{
			value=v;
		}
		
		Length operator >(Length &obj)
		{
			if(value>obj.value){
				return value;
			}
			else{
				return obj.value;
			}
		}
		void display()
		{
			cout<<"Value : "<<value<<endl;
		}
};

int main()
{
	int a,b;
	cout << "Enter Value of Length In Centimeter A: ";
	cin >> a;
	
	cout << "Enter Value of Length In Centimeter B: ";
	cin >> b;
	
	Length d1(a);
	Length d2(b);
	Length d3=d1>d2;
	
	d1.display();
	d2.display();
	d3.display();
	
	return 0;
}
