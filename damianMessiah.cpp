//  damianMessiah.cpp
//  Pi Factorization Module
//
//  Created by Pedro Damian Sanchez Jr. on 2/4/20.
//  Copyright © 2020 Pedro Damian Sanchez Jr. All rights reserved.

#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

/*
 struct MyStruct {
    int i;
    float f;
    double d;
};
*/

int main() {
/*
    string name;
    string city;

    cout << "Hello, my name is Indira; adjutant to the God-Emperor.\n";
    cout << "\nMay I have your name: ";
    getline(cin, name);

    cout << "Please enter your place of birth: ";
    getline(cin, city);

    cout << "\nGreetings " << name << ", it is noted that you were born in " << city << ".\n\n";
    
    cout << "sizeof(double) = " << sizeof(double) << endl;
    cout << "sizeof(MyStruct) = " << sizeof(MyStruct) << endl;
 */
    
    // Pi Declaration
    long double pi = M_PI;
 
    // Extends the precision count to 62 places past the decimal.
    for (int i = 61; i < 62; i++) {
        cout << "pi = " << fixed << setprecision(i) << pi << endl;
    }
    cout << endl;
    
    // IMPORTANT
    // Sets goal of the whole number you want to investigate.
    // Will only work between 5 to 12 so far.
    long double goal = 12;
    
    // Numerical Analysis Using Binary Dissection.
    // Newton's Method in C++.
    long double n = 3;
    long double step = n/4;
    auto result = n * pi;
    
    while(abs(goal - result) > 0.0) {
        if (result > goal) {
            n = n - step;
        }
        else {
            n = n + step;
        }
        step /= 2;
        result = n * pi;
        cout << result << endl;
    }
    
    // Displays the Multiple of Pi needed to produce a your goal.
    cout << endl;
    cout << "The Pi-Fi n = " << n << endl;
    cout << "Where n = " << fixed << setprecision(1) << goal << "/pi" << endl;
    cout << endl;
    return 0;
}
