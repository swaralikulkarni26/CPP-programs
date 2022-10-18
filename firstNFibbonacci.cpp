#include <iostream>
using namespace std;

int main() {
    int n, n1 = 0, n2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << n1 << " ";
            continue;
        }
        if(i == 2) {
            cout << n2 <<" ";
            continue;
        }
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
        
        cout << nextTerm<<" " ;
    }
    return 0;
}

/*Output:

Enter the number of terms: 10
Fibonacci Series: 0 1 1 2 3 5 8 13 21 34 */