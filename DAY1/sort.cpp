#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    // Input the name
    cout << "Enter a name: ";
    getline(cin, name);

    // Sort the characters in the name using bubble sort
    int n = name.length();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (name[j] > name[j + 1]) {
                // Swap characters
                char temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }

    // Output the sorted name
    cout << "Sorted name: " << name << endl;

    return 0;
}
