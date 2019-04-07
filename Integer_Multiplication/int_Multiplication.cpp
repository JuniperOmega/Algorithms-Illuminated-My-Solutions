// int_Mulitiplication.cpp
// Input: Two n-digit nonnegative integers, x and y.
// Output: The product x * y.
#include <iostream>
#include <iomanip>
using namespace std;

string line(50, '-');
bool store_int();

int main()
{
    bool flag = 0;
    const int MAXCNT = 4;       // Constant
    float arr_x[MAXCNT], t;     // Array, temp. variable
    int i, cnt;                 // Index, quantity
    float arr_y[MAXCNT] = { 1, 2, 3, 4 };

    cout << line << endl;
    cout << '\t' << '\t' << "Integer Multiplication";
    cout << '\n' << line << endl;
    
    flag = store_int();
    if(flag)
    
    return 0;
}

bool store_int()
{
    const int MAXCNT = 4;       // Constant
    float arr_x[MAXCNT], t;     // Array, temp. variable
    int i, cnt;                 // Index, quantity

    cout << "Enter up to 4 numbers \n"
         << "(QUIT with a letter): " << endl;

   // for(i = 0; i < MAXCNT && cin >> t; i++)
    for( i = 0; i < MAXCNT && cin >> t; ++i) 
    {
        arr_x[i] = t;
    }
    cnt = i;
    cout << "cnt: " << cnt << endl;
    cout << "The given numbers: " << endl;
    for(i=0; i < cnt; ++i)
        cout << setw(10) << arr_x[i];
    cout << endl;

    return true;
}
