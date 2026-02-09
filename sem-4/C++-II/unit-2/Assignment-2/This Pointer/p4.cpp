#include<iostream>
using namespace std;

class Numbers{
	public:
		int value=10;
		void display(int value){
			cout << value << endl;
			cout << this->value << endl;
		}	
};


int main(){
	Numbers v;
	v.display(20);
	
	return 0;
}
