// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 10C


#include <iostream>
#include <string>

using namespace std;

class AreaOfRectangle {
public:
    int width;
    int breadth; 
    string calculateArea() {
        if (width == breadth) {
            return to_string(width * breadth) + "\nIt's a Square";
        } else {
            return to_string(width * breadth) + "\nIt's a rectangle";
        }
    }
};

int main() {
    AreaOfRectangle rect;

    cout << "Enter the width of the Rectangle : ";
    cin >> rect.width;
    cout << "Enter the breadth of the Rectangle : ";
    cin >> rect.breadth;

    cout << "The area of the rectangle is: " << rect.calculateArea() << endl;

    return 0;
}

/*
OPUTPUT :

Enter the width of the Rectangle : 2
Enter the breadth of the Rectangle : 2
The area of the rectangle is: 4 It's a Square


=== Code Execution Successful ===
Enter the width of the Rectangle : 4
Enter the breadth of the Rectangle : 5
The area of the rectangle is: 20
It's a rectangle


=== Code Execution Successful ===
*/
