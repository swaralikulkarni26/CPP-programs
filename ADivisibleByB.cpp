// Write a program to accept 2 numbers A,B and check if A is divisible by B.
#include <iostream>
using namespace std;

bool isADivisibleByB(int A, int B)

{
    if (A % B == 0)

       return true;

   return false;
}
int main()
{
    int num1, num2;
    cout << "Enter Number 1" << endl;
    cin >> num1;
    cout << "Enter Number 2" << endl;
    cin >> num2;
    if (isADivisibleByB(num1, num2))
    {

        cout << "Given Number 1 is Divisible by Number 2" << endl;
    }
    else
    {
        cout << "Given Number 1 is not is Divisible by Number 2" << endl;
    }

    return 0;
}
/*Output:
Enter Number 1
10
Enter Number 2
5
Given Number 1 is Divisible by Number 2.*/