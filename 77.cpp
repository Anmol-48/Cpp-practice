#include<iostream>
using namespace std;

class A{
	public:
		int x;
		A(){
			cout<<"A's constructor\n";
			x=5;
		}
		A(int a){
			x=a;
		}
		int get_x(){
			return x;
		}
};

class B:virtual public A{
	int y;
	public:
		B(){
			cout<<"B's constructor\n";
			x=30;
			y=4;
		}
		int get_y(){
			return y;
		}
		void display(){
			cout<<"X: "<<get_x()<<endl<<"Y: "<<get_y()<<endl;
		}
};

class C:virtual public A{
	int z;
	public:
		C(){
			cout<<"C's constructor\n";
//			x=x+1;
			z=3;
		}
		void display(){
			cout<<"X: "<<get_x()<<endl<<"Z: "<<z<<endl;
		}	
};

class D:public B,C{
	int q;
	public:
		D(){
			cout<<"D's constructor\n";
			q=10;
		}
		int get_d()
		{
			return q;
		}
		void display(){
			cout<<"X: "<<get_x()-1;
		}
};

int main()
{
	
	D obj;
	obj.display();
	
	return 0;
}