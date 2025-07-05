#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
        cout << "The number is positive." << endl;
    else if (number < 0)
        cout << "The number is negative." << endl;
    else
        cout << "The number is zero." << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive number: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum from 1 to " << n << " is: " << sum << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;

    cout << "1234 ";
    cin >> num1;

    cout << "5678";
    cin >> num2;

    sum = num1 + num2;

    cout << "the Result " << sum << endl;

    return 0;
}

