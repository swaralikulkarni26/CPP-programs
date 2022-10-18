// Write a program to accept a number and check if it is Even.
#include <iostream>
using namespace std;

bool isEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int num;
    cout << "Enter the Number to check whether its Even or not:" << endl;
    cin >> num;
    if (isEven(num))
    {
        cout << "Given number is Even" << endl;
    }
    else
        cout << "Given Number is not Even" << endl;

    return 0;
}
/*Output:
Enter the Number to check whether its Even or not:
15
Given Number is not Even*/