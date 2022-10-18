// Write a program to accept a number and check if it is prime.
// Write a program to accept a number and check if it is negative.

#include <iostream>
using namespace std;

bool isPrime(int num)

{
    if(num==1){
        return false;
    }
    for (int i = 2; i < num; i++)

        if (num % i == 0)

            return false;

    return true;
}
int main()
{
    int num;
    cout << "Enter the Number to check whether its Prime or not:" << endl;
    cin >> num;
    if (isPrime(num))
    {
        cout << "Given number is Prime." << endl;
    }
    else
        cout << "Given Number is not Prime." << endl;

    return 0;
}
/*Output:
Enter the Number to check whether its Prime or not:
15
Given Number is not Prime.

Enter the Number to check whether its Prime or not:
17
Given number is Prime.*/