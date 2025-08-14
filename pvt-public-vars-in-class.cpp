// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 11F

#include <iostream>
using namespace std; 

class cube{
    private :
    double height = 2.0; 
    double width = 3.0; 
    double length = 5.0; 
    
    public :
    double volume(){
        double v; 
        v = height*width* length ; 
        return v;
    }

};
int main() {
    cube cu;
    cout << "The volume is : " << cu.volume();

    return 0;
}

/*
OUTPUT :

The volume is : 30

=== Code Execution Successful ===
*/
