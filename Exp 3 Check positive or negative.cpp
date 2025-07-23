//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 3

#include <iostream>
using namespace std;

int x,y;
int main() {
    cout << "The variable x is: ";
    cin >> x;
    cout << "The variable y is: ";
    cin >> y;
    
    if(x>0){
        cout << "x is a positive integer." <<endl;
    }
    else{
        cout << "x is a negative integer."<<endl;
    }
    
    if(y>0){
        cout << "y is a positive integer."<<endl;
    }
    else{
        cout << "y is a negative integer."<<endl;
    }
    
    return 0;
}

//Output

//The variable x is: 4
//The variable y is: -8
//x is a positive integer.
//y is a negative integer.
