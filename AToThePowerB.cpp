// Write a program to accept 2 numbers a A,B and calculate A ^ B(A to the powe B) .
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter num1:" << endl;
    cin >> num1;
    cout << "Enter num2" << endl;
    cin >> num2;
    num3 = pow(num1, num2);
    cout << "Num1 to the power num2 is :" << num3 << endl;

    return 0;
}
/*Output:

Enter num1:
12
Enter num2
2
Num1 to the power num2 is :144*/
