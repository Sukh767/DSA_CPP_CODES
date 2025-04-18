#include <iostream>
#include <string>

using namespace std;

// Define Structure for Expense
struct Expense {
    string type;
    float amount;
};

int main() {
    float income;
    Expense expenses[100];  // Array to store expenses (Max 100 entries)
    int count = 0;          // Expense count
    string input;

    // Take Income Input
    cout << "Enter your monthly income (INR): ";
    cin >> income;

    // Loop for expense input
    while (true) {
        cout << "Enter expense type (Shopping, Tour, Travelling) or 'done' to stop: ";
        cin >> input;

        // Stop when user enters "done"
        if (input == "done" || input == "Done") {
            break;
        }

        // Store expense type
        expenses[count].type = input;

        // Take expense amount
        cout << "Enter expense amount: ";
        cin >> expenses[count].amount;

        // Check if amount is valid
        if (expenses[count].amount < 0) {
            cout << "Invalid amount! Try again." << endl;
            continue;
        }

        count++;  // Increase count
    }

    // Display Expense Summary
    float totalExpense = 0;
    cout << "\n------ Expense Summary ------\n";
    for (int i = 0; i < count; i++) {
        cout << expenses[i].type << ": " << expenses[i].amount << " INR" << endl;
        totalExpense += expenses[i].amount;
    }

    // Display total expenses and remaining balance
    cout << "Total Expenses: " << totalExpense << " INR" << endl;
    cout << "Remaining Balance: " << (income - totalExpense) << " INR" << endl;

    return 0;
}
