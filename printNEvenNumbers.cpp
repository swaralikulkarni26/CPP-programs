// Write a program to accept a number N and print the first N even numbers.
#include <iostream>
using namespace std;
void printNEven(int num){

    for(int i=0;i<=num*2;i++){
        if(i%2==0)
        cout<<i<<"  ";
    }
}
int main()
{
    int num;
    cout << "Enter Number" << endl;
    cin >> num;
    cout << "Following are the first " << num << " Even Numbers" << endl;
   printNEven(num);
    return 0;
}
/*Output:
Enter Number
10
Following are the first 10 Even Numbers
0  2  4  6  8  10  12  14  16  18  20*/