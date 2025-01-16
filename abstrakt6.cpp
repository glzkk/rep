#include <iostream>
using namespace std;

// Klasa abstrakcyjna
class Zwierze {
public:
    virtual void dzwiek()  = 0; // Metoda czysto wirtualna
};

// Klasa dziedzicząca Pies
class Pies : public Zwierze {
public:
    void dzwiek() {
        cout << "Hau Hau!" << endl;
    }
};

// Klasa dziedzicząca Kot
class Kot : public Zwierze {
public:
    void dzwiek()  {
        cout << "Miau Miau!" << endl;
    }
};

// Funkcja wykorzystująca polimorfizm
void wydajDzwiek(Zwierze* zwierze) {
    zwierze->dzwiek();
}

int main() {
    // Tworzymy obiekty Pies i Kot
    Pies pies;
    Kot kot;

    // Tablica wskaźników do obiektów typu Zwierze
    Zwierze* zwierzeta[] = { &pies, &kot };

    // Iteracja przez tablicę obiektów i wywołanie dzwiek()
    for (int i = 0; i < 2; i++) {
        wydajDzwiek(zwierzeta[i]);
    }

    return 0;
}
// #include <iostream>

// // Klasa abstrakcyjna Animal
// class Animal {
// public:
//     virtual void makeSound() const = 0; // Czysto wirtualna metoda
//     virtual ~Animal() {} // Wirtualny destruktor
// };

// // Klasa pochodna Dog
// class Dog : public Animal {
// public:
//     void makeSound() const override {
//         std::cout << "Woof! Woof!" << std::endl;
//     }
// };

// // Klasa pochodna Cat
// class Cat : public Animal {
// public:
//     void makeSound() const override {
//         std::cout << "Meow! Meow!" << std::endl;
//     }
// };

// int main() {
//     // Tworzenie tablicy wskaźników do Animal
//     Animal* animals[4];

//     // Dodawanie obiektów Dog i Cat do tablicy
//     animals[0] = new Dog();
//     animals[1] = new Cat();
//     animals[2] = new Dog();
//     animals[3] = new Cat();

//     // Iteracja przez tablicę i wywołanie metody makeSound dla każdego zwierzęcia
//     for (int i = 0; i < 4; ++i) {
//         animals[i]->makeSound();
//     }

//     // Czyszczenie pamięci
//     for (int i = 0; i < 4; ++i) {
//         delete animals[i];
//     }

//     return 0;
// }
