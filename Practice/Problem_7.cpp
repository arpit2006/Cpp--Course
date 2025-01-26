// #include <iostream>
// using namespace std;
//
// int main() {
//     int n, term1 = 0, term2 = 1, next_Term = 0;
//
//     cout << "Enter the number of terms: ";
//     cin >> n;
//
//     cout << "Fibonacci Series: ";
//
//     for (int i = 1; i <= n; ++i) {
//         // Prints the first two terms.
//         if(i == 1) {
//             cout << term1 << ", ";
//             continue;
//         }
//         if(i == 2) {
//             cout << term2 << ", ";
//             continue;
//         }
//         next_Term = term1 + term2;
//         term1 = term2;
//         term2 = next_Term;
//
//         cout << next_Term << ", ";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main() {

    int num = 0;
    int term1 = 0,term2 = 1;
    int nest_term = 0;

    cout << "Enter Number..: " << endl;
    cin >> num;

    for (int i = 1;i <=num;i++) {
        if ( i == 1) {
            cout << term1 << " ";
            continue;
        }
        if ( i == 2) {
            cout << term2 << " ";
            continue;
        }

        nest_term = term1 + term2;
        term1 = term2;
        term2 = nest_term;

        cout << nest_term << " ";
    }

    return 0;

}