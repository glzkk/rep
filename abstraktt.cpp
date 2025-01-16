// Zadanie 1: Zwierzęta
// Napisz program, w którym:

// Istnieje abstrakcyjna klasa Animal z czysto wirtualną metodą makeSound().
// Klasy pochodne, takie jak Dog i Cat, implementują tę metodę.

//  wywołaj metodę makeSound() dla każdego zwierzęcia.
// Przykładowy wynik:

// Skopiuj kod
// Hau!
// Miau!
#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void makeSound() = 0;
};
class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Woof woof hau hau" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "miau miau " << endl;
    }
};
int main()
{
    Animal *dog1 = new Dog();
    cout << "dzwiek pieska" << endl;
    dog1->makeSound();
    cout << endl;
    cout << "dzwiek kotka: " << endl;
    Animal *cat1 = new Cat();
    cat1->makeSound();
    return 0;
}