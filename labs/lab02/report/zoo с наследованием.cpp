#include <iostream>
#include <string>

class Animal {
public:
    int age;
    std::string name_of_animal;
    std::string diet;

    virtual void feed() {
        std::cout << "You fed " << name_of_animal << " with " << diet << std::endl;
    };

    virtual void drink() {
        std::cout << "You got drink " << name_of_animal << " with water" << std::endl;
    };
};

class Bird : public Animal {
public:
    void fly() {
        std::cout << "You made " << name_of_animal << " fly" << std::endl;
    };
};

class Lion : public Animal {
public:
    void roar() {
        std::cout << "You made " << name_of_animal << " roar" << std::endl;
    };
};

class Horse : public Animal {
public:
    void ride() {
        std::cout << "You rode " << name_of_animal << std::endl;
    };
};

int main() {
    std::string animal, action;
    Bird Bob;
    Bob.name_of_animal = "Bob";
    Bob.age = 3;
    Bob.diet = "seeds";

    Lion Simba;
    Simba.name_of_animal = "Simba";
    Simba.age = 5;
    Simba.diet = "meat";

    Horse spirit;
    spirit.name_of_animal = "Spirit";
    spirit.age = 7;
    spirit.diet = "grass";

    std::cout << "Choose an animal from bird, lion, horse: ";
    std::cin >> animal;

    if (animal == "bird") {
        std::cout << "Bird's name is " << Bob.name_of_animal << "." << std::endl;
        std::cout << "Choose action from feed, drink, fly: ";
        std::cin >> action;

        if (action == "feed") {
            Bob.feed();
        }
        else if (action == "drink") {
            Bob.drink();
        }
        else if (action == "fly") {
            Bob.fly();
        }
    }
    else if (animal == "lion") {
        std::cout << "Lion's name is " << Simba.name_of_animal << "." << std::endl;
        std::cout << "Choose action from feed, drink, roar: ";
        std::cin >> action;

        if (action == "feed") {
            Simba.feed();
        }
        else if (action == "drink") {
            Simba.drink();
        }
        else if (action == "roar") {
            Simba.roar();
        }
    }
    else if (animal == "horse") {
        std::cout << "Horse's name is " << spirit.name_of_animal << "." << std::endl;
        std::cout << "Choose action from feed, drink, ride: ";
        std::cin >> action;

        if (action == "feed") {
            spirit.feed();
        }
        else if (action == "drink") {
            spirit.drink();
        }
        else if (action == "ride") {
            spirit.ride();
        }
    }

    return 0;
}
