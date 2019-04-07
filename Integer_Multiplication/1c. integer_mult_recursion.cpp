// A Recursive Algorithm 
// An approach to integer multiplication
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int cnt(int);
string line(50, '-'); 
int recIntMult(int x, int y, int x_n, int y_n);

int main()
{
    int x, y;   // two positive integers
    int n_x, n_y, product;

    cout << line << endl;
    cout << '\t' << '\t' 
         << "Integer Multiplication" << endl;
    cout << line << endl;
    
    cout << "Enter two integer numbers: " << endl;
    cout << "(ENTER) after each integer " << endl;
    cin >> x;
    cin >> y;

    if( x == 0 || y == 0)
        product = 0;
    else
    {
        n_x = cnt(x);
    //    cout << "length of x: " << n_x << endl;
        n_y = cnt(y);
    //    cout << "length of y: " << n_y << endl;
        product = recIntMult(x, y, n_x, n_y);     // Function call
    }
    
    cout << "Product is: " << product << endl;
    return 0;
}
/********************************************** 
 *                  cnt() 
 *  Input: positive integer 
 *  Output: Length of positive integer 
 **********************************************/
int cnt(int n)
{
    int count = 0;
    while (n != 0)  // while integer is not 0
    {
        n/= 10;
        count += 1;
    }
    return count;   // return length of int
}

/**************************************************
 *                   recIntMult
 *  Input: two n-digit positive integers x and y,
 *         lengths of positive integers x and y.
 *  Output: the product of x * y.
 *  Assumption: length is a power of 2
 **************************************************/
int recIntMult(int x, int y, int x_n, int y_n)
{
    int a, b;   // first and second halves of x
    int c, d;   // first and second halves of y
    int pow_x, pow_y, product;  // Length of (int / 2),
                                // product of x *y

    if((x_n == 1) || (y_n == 1))    // Base case
    {
        return x * y;
    }
    else                            // Recursive case
    {
        pow_x = pow(10, x_n / 2);     // 10 ^ (len /2)
        b = x % pow_x;                // x mod 10 ^ (len /2)
        a = x / (pow(10, x_n / 2));
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
       
        pow_y = pow(10, y_n / 2);
        d = y % pow_y;
        c = y / (pow(10, y_n / 2));
        cout << "c = " << c << endl;
        cout << "d = " << d << endl;
        
        //pow_x = pow(10, x_n);       // 10 ^ (x_n)
        //pow_y = pow(10, y_n);       // 10 ^ (y_n)
        //cout << "pow of x " << pow_x << "pow of y " << pow_y << endl;
        
        product = (pow_x * pow_y * recIntMult(a, c, 1, 1)) +
                  (pow_x * recIntMult(a, d, 1, 1)) +
                  (pow_y * recIntMult(b, c, 1, 1)) +
                  (recIntMult(b, d, 1, 1));
    }
    //cout << "product is " << product << endl; 
    return product;

}
