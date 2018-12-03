//
//  main.cpp
//  PowerSeries
//
//  Created by Asher Abrams on 2018/02/06.
//  Copyright © 2018 Asher Abrams. All rights reserved.
//  
//  Executes the sum y of (-1^x)/(2x+1) over x iterations.
//  The value of y will approach pi/4.

// PREPROCESSOR
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// DECLARATIONS
double x;
double y;
double func01(double);

// DEFINITIONS
double func01(double x)
{
    for(x = 0; x <= 100; x++)
    {
        y = y + (pow (-1,x))/((2*x) + 1);
        cout << (pow (-1,x))/((2*x) + 1) << '\n';
        cout << y << '\n';
        cout << '\n';
    }
    return y;
}

// MAIN
int main() {
    func01(x);
    return 0;
}

