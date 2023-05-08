#include <iostream>

class Circle {
    private: int radius;

    // class constructor
    public: Circle(int r) {
        radius = r;
    }

    // radius setter
    void setRadius(int radius) {
        this -> radius = radius;
    };

    // radius getter
    int getRadius() {
        return radius;
    }

};

class Utility {
    public: double calculateArea(Circle circle) {
        int radius = circle.getRadius();

        return 3.14*radius*radius;
    };
};

int main() {
    int radius = 0;
    std::cout << "Enter the radius in cm" << std::endl;
    std::cin >> radius;

    Circle circle(radius);
    Utility utilityInstance;

    std::cout << "Circle Area:" << utilityInstance.calculateArea(circle) << std::endl;

    return 0;
};