#include <iostream>
#include <string>
using namespace std;

string getDayName(int day) {
    switch (day) {
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        case 7: return "Sunday";
        default: return "Invalid Day";
    }
}

int main() {
    int wellDepth, climb, slip, specialDay, specialSlip, startDay, startDate;
    
    cout << "Enter well depth (feet): ";
    cin >> wellDepth;
    
    cout << "Enter climb per day (feet): ";
    cin >> climb;
    
    cout << "Enter slip per night (feet): ";
    cin >> slip;
    
    cout << "Enter special slip day (1=Monday, 7=Sunday): ";
    cin >> specialDay;
    
    cout << "Enter special slip amount (feet): ";
    cin >> specialSlip;
    
    cout << "Enter starting day (1=Monday, 7=Sunday): ";
    cin >> startDay;
    
    cout << "Enter starting date (day of the month): ";
    cin >> startDate;

    int position = 0, days = 0, currentDay = startDay, date = startDate;

    while (position < wellDepth) {
        days++;

        if (currentDay == specialDay) {
            position -= specialSlip;
            if (position < 0) position = 0;
        } else {
            position += climb;
            if (position >= wellDepth) break;
            position -= slip;
            if (position < 0) position = 0;
        }

        currentDay = (currentDay % 7) + 1;
        date++;
    }

    cout << "\nTotal days: " << days << endl;
    cout << "Snail reaches the top on: " << getDayName(currentDay) << ", Day " << date << endl;

    return 0;
}
