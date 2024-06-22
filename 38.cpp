#include <iostream>

using namespace std;

int main() {
    // Allocate memory for an integer using 'new'
    int *ptr = new int(1);

    // Check if allocation succeeded
    if (ptr == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    // Assign a value to the allocated memory
    *ptr = 42;

    // Print the allocated value
    cout << "Value stored in allocated memory: " << *ptr << endl;

    // Deallocate memory using 'delete'
    delete ptr;

    // Set pointer to nullptr after deallocation (good practice)
    ptr = NULL;

    return 0;
}
