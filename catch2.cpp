#include <iostream>
using namespace std;

class NegativeNumberException : public exception {
public:
    const char* what() const throw() {
        return "Error: You have entered a negative number.";
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0) throw NegativeNumberException();
        else cout << "You have entered a non-negative number: " << num << endl;
    }

    catch (const NegativeNumberException& e) {
        cout << e.what() << endl;
    }

    return 0;
}