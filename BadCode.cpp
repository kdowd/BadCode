#include <iostream> 

using namespace std;

class Mammal {
protected:
	string name{};
	string sound{};
	unsigned int numFeet{ 4 };

public:
	Mammal() {
		cout << "Base: Mammal" << endl ;
	}

	void sayName() {
		cout << "Name: " << name << endl;
	}

	void getSound() {
		cout << "Sound: " << sound << endl;
	}
	void getNumFeet() {
		cout << "Feet: " << numFeet << endl;
	}

};


class Cat: public Mammal {

public:
	Cat() {
		cout << "Derived: Cat" << endl;
		name = "Cat";
		sound = "Miow";

	}
};

class Dog : public Mammal {

public:
	Dog() {
		cout << "Derived: Dog" << endl;
		name = "Dog";
		sound = "Bark";

	}
};

class Kangaroo : public Mammal {

public:
	Kangaroo() {
		cout << "Derived: kangaroo" << endl;
		name = "Kangaroo";
		sound = "Grunt";
		numFeet = 5;
	}
	 
};






int main()

{
	Cat c;
	c.sayName();
	c.getSound();
	c.getNumFeet();

	cout << string(99, '-') << endl;

	Dog d;
	d.sayName();
	d.getSound();
	d.getNumFeet();

	Kangaroo k;
	k.sayName();
	k.getSound();
	k.getNumFeet();
}

