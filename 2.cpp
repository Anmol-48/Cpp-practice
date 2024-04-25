//Runtime polymorphism or Late Binding or Dynamic Polymorphism in cpp
#include<iostream>
using namespace std;

class Base{
	int x;
	public:
		Base(){
			cout<<endl<<"Call goes to Base constructor";
		}
		virtual void display()
		{
			cout<<"\nBase class display function";
		}
};

class Child:public Base{
	int y;
	public:
		Child(){
			cout<<endl<<"Call goes to Child constructor";
		}
		void display()	// here function overriding occur as same name function is create in child class with same prototype
		{
			cout<<"\nChild class display function";
		}
};
int main()
{
	Base obj1;
	Child obj2;
	
	obj1.display(); // call goes to base display
	obj2.display();// call goes to child display
	
	obj2.Base::display();// call goes to base display using scope resolution operator
	Base *ptr=&obj2;
	ptr->display();	//call goes to child display as we use vitual function in our base class and showing nature of run time polymorphism
	return 0;
}