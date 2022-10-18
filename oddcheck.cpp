// Write a program to accept a number and check if it is odd.
#include <iostream>
using namespace std;

bool isOdd(int num)
{
    if (num % 2 != 0)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int num;
    cout << "Enter the Number to check whether its odd or not:" << endl;
    cin >> num;
    if (isOdd(num))
    {
        cout << "Given number is Odd" << endl;
    }
    else
        cout << "Given Number is even" << endl;

    return 0;
}
/*Output:
Enter the Number to check whether its odd or not:
15
Given number is Odd*/