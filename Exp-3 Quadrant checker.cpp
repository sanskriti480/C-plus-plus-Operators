//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 3

#include <iostream>
using namespace std;

int main() {
    int x,y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    
    if(x>0 && y>0){
        cout << "1st Quadrant.";
    }
    else if(x<0 && y>0){
        cout << "2nd Quadrant.";
    }
    if(x<0 && y<0){
        cout << "3rd Quadrant.";
    }
    if(x>0 && y<0){
        cout << "4th Quadrant.";
    }
    return 0;
}

//Output

//Program 3
//Enter the value of x: 4
//Enter the value of y: -8
//4th Quadrant.
