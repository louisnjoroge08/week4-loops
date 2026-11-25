
// ACTIVITY 3B: INPUT VALIDATION WITH DO-WHILE LOOP
// Learning Outcome: Evaluate while vs do-while for validation

// Include the input/output library
#include <iostream>

// Use the standard namespace
using namespace std;

// The main function
int main() {

// Declare an integer variable to store the user's input
// We initialise it to 0 so that the loop runs at least once
int number = 0;

// Do-while loop: executes the body FIRST, then checks the condition
// This guarantees the body runs at least once
do {
    
    // Display a prompt asking for a positive number
    cout << "Enter a positive number: ";
    
    // Read the user's input
    cin >> number;

    // Check if the number is invalid and display an error
    if (number <= 0) {
        cout << "Invalid!" << endl;
    }

} while (number <= 0); // Condition checked AFTER the body runs

// This line runs only when a valid positive number has been entered
cout << "You entered: " << number << endl;

// Return 0 to signal successful completion
return 0;

}