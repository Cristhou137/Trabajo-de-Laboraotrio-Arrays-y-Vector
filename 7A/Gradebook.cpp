#include <array>
#include "Gradebook.h"

using namespace std;

int main() {
    const array<int, Gradebook::students> grades{
        87, 68, 91, 100, 83, 78, 85, 91, 76, 87};
    string courseName{"Cs101 Introduccion to C++ Programming"};

    Gradebook myGradebook(courseName, grades);
    myGradebook.displayMessage();
    myGradebook.processGrades();
}