// Write a program to accept a number N and print the first N natural numbers.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number:" << endl;
    cin >> num;
    cout<<"First "<<num <<" natural Numbers are:"<<endl;
    for (int i = 1; i <= num; i++)
    {

        cout << i << "  ";
    }
    return 0;
}
/*Output: 
Enter Number:
15
First 15 natural Numbers are:
1  2  3  4  5  6  7  8  9  10  11  12  13  14  15
PS D:\Assignment171022> */