#include<iostream>
using namespace std;

class Person{
	public:
		int age=10;
		void isolder(int age){
			cout << "Person 1: " << endl;
			cout << age << endl;
			cout << "Person 2: " << endl;
			cout << this->age << endl;
		}	
};


int main(){
	Person p;
	p.isolder(20);
	
	return 0;
}
