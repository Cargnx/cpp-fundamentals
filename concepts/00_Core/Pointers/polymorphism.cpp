#include <iostream>

class Animal {
public:
    virtual void makeSound() const {
        std::cout << "Some generic sound!\n";
    }

    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Woof!\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "Meow!\n";
    }
};

int main() {
    Animal* animals[] = {new Dog, new Cat, new Dog};

    for (Animal* animal : animals) {
        animal->makeSound();
    }

}