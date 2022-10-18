// Write a program to accept a number N and calculate N!
#include <iostream>
using namespace std;
int fact(int num)
{
    if (num == 1)
        return 1;
    return num * fact(num - 1);
}
int main()
{
    int num;
    cout << "Enter the Number:" << endl;
    cin >> num;
    int factValue = fact(num);
    cout << "factorial of " << num << " is: " << factValue << endl;
    return 0;
}
/*Output:
Enter the Number:
5
factorial of 5 is: 120*/