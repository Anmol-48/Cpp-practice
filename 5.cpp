// abstract class concept in c++
#include<iostream>
using namespace std;
class A{
	int x;
	public:
		A()
		{
			cout<<"A's constructor\n";
		}
		virtual void display()=0;
};

class B:public A{
	int y;
	public:
		B()
		{
			cout<<"B's constructor\n";
		}
		void display()
		{
			cout<<"Calling display function for class B\n";
		}
};
int main()
{
//	A obj1;   this generate error as A is an abstract class so we can't create its direct object
	B obj2;
	obj2.display();
	
	A *ptr=&obj2;	// we can create pointer of an abstract class to achieve run time polymorphism
	ptr->display();
	return 0;
}