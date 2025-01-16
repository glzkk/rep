#include <iostream>
#include <vector>
using namespace std;

// Klasa bazowa
class Vehicle {
public:
    virtual void move() const = 0; // Wirtualna metoda czysto abstrakcyjna
    virtual ~Vehicle() {} // Wirtualny destruktor
};

// Klasy pochodne
class Car : public Vehicle {
public:
    void move() const override {
        cout << "Samochód jedzie po drodze" << endl;
    }
};

class Boat : public Vehicle {
public:
    void move() const override {
        cout << "Łódź płynie po wodzie" << endl;
    }
};

class Plane : public Vehicle {
public:
    void move() const override {
        cout << "Samolot leci w powietrzu" << endl;
    }
};

int main() {
    // Tworzenie obiektów
    Vehicle* car = new Car();
    Vehicle* boat = new Boat();
    Vehicle* plane = new Plane();

    // Umieszczanie obiektów w wektorze wskaźników
    vector<Vehicle*> vehicles = {car, boat, plane};

    // Wywoływanie metody move() dla każdego obiektu
    for (const auto& vehicle : vehicles) {
        vehicle->move();
    }

    // Czyszczenie pamięci
    for (auto& vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}