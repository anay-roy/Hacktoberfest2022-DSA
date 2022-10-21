#include<iostream>
using namespace std;

class A
{
public:
	int a;
	void display()
	{
		cout<<"Base class A"<<endl;
	}
};

class B
{
public:
	int a;
	void display()
	{
		cout<<"Base class B"<<endl;
	}
};

class C: virtual public A 
{
public:
	void display()
	{
		cout<<"Single Inheritance"<<endl;
	}
};

class D: virtual public A, public B
{
public:
	void display()
	{
		cout<<"Multiple Inheritance"<<endl;
	}
};

class E: virtual public A
{
public:
	void display()
	{
		cout<<"Hierarchy Inheritance"<<endl;
	}
};

class F: virtual public C 
{
public:
	void display()
	{
		cout<<"MultiLevel Inheritance"<<endl;
	}
};

class G: virtual public C, public D 
{
public:
	void display()
	{
		cout<<"Hybrid inheritence"<<endl;
	}
};


int main ()
{
	
	D d; 
	F f; 
	G g; 

	g.display();//Hybrid
	g.C::display();//Single
	g.D::display();//Multiple

	f.display();//Multilevel
	f.C::display();//Single

	d.display();//Multiple
	d.A::display();//Base class A
	d.B::display();//Base class B

	return 0;
}





























