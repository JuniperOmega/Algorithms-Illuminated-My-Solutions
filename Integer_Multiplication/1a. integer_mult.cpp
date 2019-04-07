// mult.cpp
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

string line(50, '-');           

int main()
{
    int product = 0;        // Store product of ints
    int big, small, temp;   // Max, min integer, temp variable 
    int size, x, y, r, i;   // length of small, inputs
    int store = big;        // Temporarily hold max int
    
    cout << line << endl;
    cout << '\t' << '\t' 
         << "Integer Multiplication" << endl;
    cout << line << endl;
    
    cout << "Enter two integer numbers: " << endl;
    cout << "(ENTER) after each integer " << endl;
    cin >> x;
    cin >> y;

    if( x == 0 || y == 0){   // Base Case
        product = 0;
    }

    if( x >= y){            // Find max int
        big = x;
        small = y;
        store = big;
    }
    else{
        big = y;
        smals = x;
        store = big;
    }

    //cout << "big int: "    << big                 // Output max, min integer
    //<< " small int: " << small << endl;

    size = log10(small) + 1;                        // length of smallest integer
    //cout << "Size: " << size << endl;

    for( i = 0; i < size; i++)
    {
        r = small % 10;                             // parse each number from small
        //cout << "r = " << r << endl;
        temp = (store *r);                          // big int multiplied by each number in small
        product += (temp * pow(10, i));
        //cout << "Product = " << product << endl;
        small = small / 10;
    }

     cout << "Product of " << x << " and " 
          << y << " is: " << product << endl;
    return 0;
}


