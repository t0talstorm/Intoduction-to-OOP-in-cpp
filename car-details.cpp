// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 11B

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class cars {
    public:
    string Brand; 
    string Model; 
    int Year; 
    
};
int main() {
    string make , model ;
    int year;
    cars obj[2];
    
    for(int i = 0 ; i < 2 ; i++){
    printf("Please enter car Make , model and Year for car %d", i +1 );
    cout << "\nMake : ";
    cin>> make; 
    cout << "\nModel : ";
    cin>> model; 
    cout << "\nYear : ";
    cin>> year; 

    obj[i] = {make,model, year};
}
for(int j = 0 ; j < 2 ; j++){
printf("\n\nThe car info you entered for %d car is :", j +1);
cout << obj[j].Brand << " " << obj[j].Model << " " << obj[j].Year<< " ";
}
    return 0;
}

/*
OUTPUT ::

Please enter car Make , model and Year for car 1
Make : BMW 

Model : XM9

Year : 1999
Please enter car Make , model and Year for car 2
Make : VW

Model : Polo

Year : 2014


The car info you entered for 1 car is :BMW XM9 1999 

The car info you entered for 2 car is :VW Polo 2014 

=== Code Execution Successful ===
*/
