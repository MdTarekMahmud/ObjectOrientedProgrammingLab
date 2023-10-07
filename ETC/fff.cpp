#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal animal;
    Dog dog;
    Cat cat;

    animal.speak(); // Calls Animal's speak()
    dog.speak();  // Calls Dog's bark()
    cat.speak();     // Calls Cat's meow()

    return 0;
}
