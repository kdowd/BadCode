#include <iostream> 

using namespace std;


class Cat {
public:
	string name{ "cat" };
	string sound{ "miow" };
	unsigned int numFeet{ 4 };

public:
	Cat() {

	}

	void sayName() {
		cout << name << endl;
	}

	void makeSound() {
		cout << sound << endl;
	}

	void feetCount() {
		cout << numFeet << endl;
	}

};

class Dog {
public:
	string name{ "dog" };
	string sound{ "woof" };
	unsigned int numFeet{ 4 };

public:
	Dog() {

	}

	void sayName() {
		cout << name << endl;
	}

	void makeSound() {
		cout << sound << endl;
	}

	void feetCount() {
		cout << numFeet << endl;
	}

};


class Kangaroo {
public:
	string name{ "kangaroo" };
	string sound{ "grunt" };
	unsigned int numFeet{ 5 };

public:
	Kangaroo() {

	}

	void sayName() {
		cout << name << endl;
	}

	void makeSound() {
		cout << sound << endl;
	}

	void feetCount() {
		cout << numFeet << endl;
	}

};





int main()

{
	cout << string(99, '*') << endl;
	Cat c;
	c.sayName();
	c.makeSound();
	c.feetCount();

	cout << string(99, '*') << endl;
	Dog d;
	d.sayName();
	d.makeSound();
	d.feetCount();

	cout << string(99, '*') << endl;
	Kangaroo k;
	k.sayName();
	k.makeSound();
	k.feetCount();


	cout << string(99, '*') << endl;

}

