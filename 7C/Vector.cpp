#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

void outputVector(const vector<int>&);
void inputVector(vector<int>&);

int main() {
    vector<int> integers1(7);
    vector<int> integers2(10);

    cout << "Size of vector Integers1 is " << integers1.size()
        << "\nvector after initialization:";
    outputVector(integers1);

    cout << "Size of vector Integers2 is " << integers2.size()
        << "\nvector after initialization:";
    outputVector(integers2);

    cout << "\nEnter 17 integers:" << endl;
    inputVector(integers1);
    inputVector(integers2);

    cout << "\nAfter input, the vectors contain:\n"
        << "Integers1:";
    outputVector(integers1);
    cout << "Integers2:";
    outputVector(integers2);

    cout << "\nEvaluating: Integers1 != Integers2" << endl;

    if (integers1 != integers2) {
        cout << "Integers1 and Integers2 are not equal" << endl;
    }

    vector<int> integers3{integers1};

    cout << "\nSize of vector Integers3 is " << integers3.size()
        << "\nvector after initialization: ";
    outputVector(integers3);

    cout << "\nAssigning Integers2 to Integers1:" << endl;
    integers1 = integers2;

    cout << "Integers1: ";
    outputVector(integers1);
    cout << "Integers2: ";
    outputVector(integers2);

    cout << "\nEvaluating: Integers1 == Integers2" << endl;
    if (integers1 == integers2) {
        cout << "Integers1 and Integers2 are equal" << endl;
    }

    cout << "\nIntegers1[5] is " << integers1[5];

    cout << "\n\nAssigning 1000 to Integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "Integers1: ";
    outputVector(integers1);

    try {
        cout << "\nAttempt to display Integers1.at(15)" << endl;
        cout << integers1.at(15) << endl;
    }
    catch (out_of_range& ex) {
        cerr << "An exception ocurred" << ex.what() << endl;
    }

    cout << "\nCurrent Integers3 size is: " << integers3.size() << endl;
    integers3.push_back(1000);
    cout << "New Integers3 size is: " << integers3.size() << endl;
    cout << "Integers3 now contains: ";
    outputVector(integers3);
}

void outputVector(const vector<int>& items) {
    for (int item : items) {
        cout << item << " ";
    }

    cout << endl;
}

void inputVector(vector<int>& items) {
    for (int& item : items) {
        cin >> item;
    }
}