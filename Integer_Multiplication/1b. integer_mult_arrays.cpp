#include <iostream>
#include <cmath>

using namespace std;

int getshifts(int);
int * splitnum(int*, int, int);
void multiply(int* , int, int);
int main()
{   
     
    // Get two integers from the user
    int x, y;
    cout << "Enter two Integers:  ";
    cin >> x; 
    cin >> y; 

    if(x < 10 || y < 10)
    { 
      int result;
      result = x * y;
      cout << "Result: " << result << endl; 
    }
    else
    {
        int big, small;
        if(x > y)
        {
            big = x;
            small = y;
        }
        else
        {
            small = x;
            big = y;
        }
    
    int count;
    count = getshifts(small);
    int splitarr[count+1];
    int* arrS = splitnum(splitarr, small, count);
    multiply(arrS , big, count);
    }
    return(0);

}

int getshifts(int small)
{
    int cnt = 0;
    int i = 1;
    while(i)
    {
        small = small/10;
        if(small == 0)
            i = 0;
        else
            cnt += 1;
    }
    return cnt;
}
int * splitnum(int* arr, int k, int cnt)
{
   int a;
   for(int i = cnt; i > 0; i--)
   {
    int power = pow(10, i);
        a = k/power;
        k = k % power;
        if(k < 10)
        {
            arr[i] = a;
            arr[i-1] = k;
        }
        else
        {
            arr[i] = a;
        }
   }
   
   return  arr;
}
void multiply(int arr[], int big, int cnt)
{

   int temp = 0, result = 0;
    for(int j = 0; j<= cnt; j ++)
    {
        int power = pow(10, j);
        temp = arr[j]*big;
        result += temp*power;
    }
      cout << "Result: " << result << endl; 

}
