#include<iostream>
using namespace std;

class Employee{
	public:
		int i=10,s=1000;
		Employee(int i, int s){
			
			cout << "First Employee Info: "<< endl;
			cout << "Id is: "<< i << endl;
			cout << "Salary is: "<< s << endl;
			
			cout << "Second Employee Info: "<< endl;
			cout << "Id is: "<< this->i << endl;
			cout << "Salary is: "<< this->s << endl;
		}
};

int main(){
	
	Employee e(20,2000);
	return 0;	
}

