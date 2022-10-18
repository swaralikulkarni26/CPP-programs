//Write a program to accept a number and check if it is positive.

#include <iostream>
using namespace std;

bool isPositive(int num)
{
    if (num >0)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int num;
    cout << "Enter the Number to check whether its Positive or not:" << endl;
    cin >> num;
    if (isPositive(num))
    {
        cout << "Given number is positive." << endl;
    }
    else
        cout << "Given Number is not positive." << endl;

    return 0;
}
/*Output:
Enter the Number to check whether its Positive or not:
-5
Given Number is not positive.*/