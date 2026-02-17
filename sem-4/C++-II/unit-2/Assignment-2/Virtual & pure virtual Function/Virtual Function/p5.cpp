#include<iostream>
using namespace std;

class Media{
	public:
		virtual void play(){
			cout << "Call From Employee" << endl;
		}
};

class Audio : public Media{
	public:
		void play(){
			cout << "Call From FullTime" << endl;
		}
};

class Video : public Media{
	public:
		void play(){
			cout << "Call From Parttime" << endl;
		}
};

int main(){
	Audio a;
	Video v;
	
	a.play();
	v.play();
	
	return 0;
}
