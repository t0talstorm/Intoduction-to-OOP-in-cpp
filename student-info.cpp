// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 11A

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class Students {
    public:
    string Name; 
    string Branch;
    string Subject ;
    string Year;
    float Result;
    
};
int main() {
    string name , branch , sub , year   ;
    float result;
    Students obj[2];
    
    for(int i = 0 ; i < 2 ; i++){
    printf("Please enter Student details for student : %d", i +1 );
    cout << "\nName : ";
    cin>> name; 
    cout << "\nBranch : ";
    cin>> branch; 
    cout << "\nSubject : ";
    cin>> sub; 
    cout << "\nYear : ";
    cin>> year;
    cout << "\nResult : ";
    cin>> result;

    obj[i] = {name , branch , sub , year , result };
}
for(int j = 0 ; j < 2 ; j++){
printf("\n\nThe info you entered for Student  %d is :", j +1);
cout << obj[j].Name << " " << obj[j].Branch << " " << obj[j].Subject<< " "<< obj[j].Year<< " "<< obj[j].Result<< " ";
}
    return 0;
}

/*
OUTPUT :

Please enter Student details for student : 1
Name : Aditya 

Branch : EnTc

Subject : Cpp

Year : 2nd 

Result : 8.8 
Please enter Student details for student : 2
Name : Archisha 

Branch : EnTc

Subject : MTT

Year : 2nd 

Result : 9


The info you entered for Student  1 is :Aditya EnTc Cpp 2nd 8.8 

The info you entered for Student  2 is :Archisha EnTc MTT 2nd 9 

=== Code Execution Successful ===
*/
