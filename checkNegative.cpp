//Write a program to accept a number and check if it is negative.


#include <iostream>
using namespace std;

bool isNegative(int num)
{
    if (num <0)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int num;
    cout << "Enter the Number to check whether its Negative or not:" << endl;
    cin >> num;
    if (isNegative(num))
    {
        cout << "Given number is Negative." << endl;
    }
    else
        cout << "Given Number is not Negative." << endl;

    return 0;
}
/*Output:
Enter the Number to check whether its Negative or not:
-10
Given number is Negative.*/