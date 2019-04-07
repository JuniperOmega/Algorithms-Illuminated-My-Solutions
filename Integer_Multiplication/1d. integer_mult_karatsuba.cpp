// karatsuba Algorithm
// An approach to integer multiplication
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int cnt(int);
int append_zeros(int, int);
string line(50, '-'); 
int recIntMult(int x, int y, int int_size, int n);

int main()
{
    int x, y;                   // two positive integers x and y, 
    int n_x, n_y, product;      // length of x and y, product of x*y
    int n;                      // n trailing zeros
    int size_max_n, size_min_n;

    cout << line << endl;
    cout << '\t' << '\t' 
         << "Integer Multiplication" << endl;
    cout << line << endl;
    
    cout << "Enter two integer numbers: " << endl;
    cout << "(ENTER) after each integer " << endl;
    cin >> x;
    cin >> y;

    if( x == 0 || y == 0)       // if integer = 0 , product = 0 
        product = 0;
    else
    {
        n_x = cnt(x);           // length of integer x  
        cout << "length of x: " << n_x << endl;
        n_y = cnt(y);           // length of integer y  
        cout << "length of y: " << n_y << endl;
    }
        
        // Determine if the length of the integers x, y is the same 
        if(n_x != n_y)          //if length of x and y is not the same
        {
            if(n_x > n_y)       // Find the largest integer length
            {
                size_max_n = n_x;
                size_min_n = n_y;
                n = size_max_n - size_min_n;    // get n trailing zeros
                y *= pow(10, n);                // append zeros to smallest integer length
                cout << "new value of y: " << y << endl;
                product = recIntMult(x, y, size_max_n, n) / (pow(10,n));
            }
            else
            {
                size_max_n = n_y;
                size_min_n = n_x;
                n = size_max_n - size_min_n;    // get n trailing zeros
                x *= pow(10, n);                // append zeros to smallest integer length
                cout << "new value of x: " << x << endl;
                

                product = recIntMult(x, y, size_max_n, n) / (pow(10,n));
            }
        }
        else
            product = recIntMult(x, y, n_x, n_y);     // Function call
    
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

/********************************************** 
 *               append_zeros() 
 *  Input: lengths of x and y 
 *  Output: smallest integer with appropriate
 *          n trailing zeros 
 **********************************************/
/*int append_zeros(int val1, int val2)
{
    int n_x = val1;       // length of x
    int n_y = val2;       // length of y
    int size_max_n, size_min_n;
    

            if(n_x > n_y)       // Find the largest integer length
            {
                size_max_n = n_x;
                size_min_n = n_y;
                n = size_max_n - size_min_n;    // get n trailing zeros
                y *= pow(10, n);                // append zeros to integer y
                cout << "new value of y: " << y << endl;
                
            }
            else
            {
                size_max_n = n_y;
                size_min_n = n_x;
                n = size_max_n - size_min_n;    // get n trailing zeros
                x *= pow(10, n);                // append zeros to smallest integer length
                cout << "new value of x: " << x << endl;
                return x;
            }
}
*/

/**************************************************
 *                   recIntMult
 *  Input: two n-digit positive integers x and y,
 *         lengths of positive integers x and y.
 *  Output: the product of x * y.
 *  Assumption: length is a power of 2
 **************************************************/
int recIntMult(int x, int y, int int_size, int n)
{
    int a, b;   // first and second halves of x
    int c, d;   // first and second halves of y
    int pow_int, product, total_product;  // Length of (int / 2),
                                          // product of x *y
    
    if((int_size == 1) || (n == 1))      // Base case
    {
        return x * y;
    }
    else                              // Recursive case
    {
        pow_int = pow(10, int_size / 2);  // parse integer x in halves
        b = x % pow_int;                
        a = x / pow_int;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
       
        d = y % pow_int;                  // parse integer y in halves
        c = y / pow_int;
        cout << "c = " << c << endl;
        cout << "d = " << d << endl; 
        
        // (1.1) x = 10^(n/2) * a + b    y = 10^(n/2) *  c + d
        // x * y = 10^n * (a*c) + 10^(n/2) * (a*d + b*c) + b*d
        // Recursive integer multiplication uses 4 recursive calls
        // we can get away with three recursive calls
        int p = a + b;  
        int q = c + d;
        int ac, bd, pq, adbc;        // recursive computations: a*c, b*d, p*q 
     
        ac = recIntMult(a, c, 1, 1);
        bd = recIntMult(b, d, 1, 1);
        pq = recIntMult(p, q, 1, 1);

        adbc = pq - ac - bd;
        cout << "adbc = " << adbc << endl;
        
        product = (pow(10, n) * ac + pow(10, n/2) *adbc + bd);
        return product;
    }
    
   // cout << "New product is " << total_product << endl; 
    return product;
}
