//Write a program to accept a number N and print the first N odd numbers.
// Write a program to accept a number N and print the first N even numbers.
#include <iostream>
using namespace std;
void printNOdd(int num){

    for(int i=1;i<=num*2;i++){
        if(i%2!=0)
        cout<<i<<"  ";
    }
}
int main()
{
    int num;
    cout << "Enter Number" << endl;
    cin >> num;
    cout << "Following are the first " << num << " Odd Numbers" << endl;
   printNOdd(num);
    return 0;
}
/*Output:
Enter Number
10
Following are the first 10 Odd Numbers
1  3  5  7  9  11  13  15  17  19*/