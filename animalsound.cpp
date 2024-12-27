
#include <iostream>
#include <vector>
using namespace std;

class Animal {

public:

	virtual void makesound() = 0;

	virtual ~Animal() {}


};

class Dog : public Animal {
	void makesound() {
		cout << "bow" << endl;

	}

};

class Cat : public Animal {
	void makesound() {
		cout << "maw" << endl;
	}
};

class Cow : public Animal {
	void makesound() {

		cout << "mow" << endl;
	}

};

int main() {

	vector<Animal*> animal;
	animal.push_back(new Dog());
	animal.push_back(new Cat());
	animal.push_back(new Cow());


	for (size_t i = 0; i < animal.size(); ++i) {
		animal[i]->makesound();

	}


	for (size_t i = 0; i < animal.size(); ++i) {

		delete animal[i];

	}

	return 0;
};

