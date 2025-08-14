// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 11E

#include <iostream>
using namespace std;
const double PI = 3.14159;

class Circle {
public:
    double radius;
    double calculateArea() {
        return PI * radius * radius;
    }
    double calculateCircumference();
};

double Circle::calculateCircumference() {
    return 2 * PI * radius;
}

int main() {
    Circle myCircle;
    printf("Enter The radius of the circle : ");
    cin >> myCircle.radius;

    cout << "Area of the circle: " << myCircle.calculateArea() << endl;
    cout << "Circumference of the circle: " << myCircle.calculateCircumference() << endl;

    return 0;
}
/*
OUTPUT :

Enter The radius of the circle : 3
Area of the circle: 28.2743
Circumference of the circle: 18.8495


=== Code Execution Successful ===

*/
