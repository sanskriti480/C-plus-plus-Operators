//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 3

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter the marks out of 100: ";
    cin >> marks;
    
    if(marks>=90 && marks<=100){
        cout << "Your grade is A+.";
    }
    else if(marks>=80 && marks<90){
        cout << "Your grade is A.";
    }
    else if(marks>=70 && marks<80){
        cout << "Your grade is B.";
    }
    else if(marks>=60 && marks<70){
        cout << "Your grade is C.";
    }
    else if(marks>=50 && (marks<60)){
        cout << "Your grade is D.";
    }
    else{
        cout << "You failed.";
    }
    return 0;
}

//Output

//Enter the marks out of 100: 99
//Your grade is A+.
