
#include <iostream>
#include <string>
using std::cout; using std::endl;
using std::string; using std::ostream;
/*
class Animal {
public:
    virtual string voice() const = 0;
    virtual int legs() const = 0;
    string getSpecies() const { return species; }
    string getName() const { return name; }
    Animal(string name) : name(name) {}
    friend ostream& operator<<(ostream& s, const Animal& a) {
        s << a.getSpecies() << " " << a.getName() << ", " << a.legs() << " legs, voice: \"" << a.voice() << "\"";
        return s;
    }
    friend ostream& operator<<(ostream& s, const Animal* p) {
        s << *p;
        return s;
    }
protected:
    string species;
    string name;
};

class Cat : public Animal {
public:
    Cat(string name) : Animal(name) {
        species = "Cat";
    }
    string voice() const {
        return "Meow";
    }
    int legs() const {
        return 4;
    }
};

class Snake : public Animal {
public:
    Snake(string name) : Animal(name) {
        species = "Snake";
    }
    string voice() const {
        return "Ssss";
    }
    int legs() const {
        return 0;
    }
};
*/



void rekur(const char* nap) {
    if ( *nap != 'D') {
        rekur(nap+1);
        std::cout << *nap;
    }
}
int main() {

    rekur("ABCD");
  /*  Cat cat1("Oliver"), cat2("Sophie");
    Snake snake("Wire");
    Animal* arr[] = {&cat1,&cat2,&snake};
    for (const auto& a : arr) cout << *a << endl;
    cout << endl;
    for (const auto& a : arr) cout << a << endl;*/
}
