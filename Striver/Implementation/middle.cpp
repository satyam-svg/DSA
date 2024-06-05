#include <iostream>
#include <sstream>
#include <iomanip> // For std::setw and std::setfill

using namespace std;

int main() {
    string time1, time2;

    // Read the time strings
    getline(cin, time1);
    getline(cin, time2);

    // Extract hour and minute from strings
    int h1, m1, h2, m2;
    char colon; // To skip the colon character

    stringstream ss1(time1);
    ss1 >> h1 >> colon >> m1;

    stringstream ss2(time2);
    ss2 >> h2 >> colon >> m2;
    // Calculate total minutes from midnight for both times
    int totalMinutes1 = h1 * 60 + m1;
    int totalMinutes2 = h2 * 60 + m2;

    // Calculate the average time in total minutes from midnight
    int avgMinutes = (totalMinutes1 + totalMinutes2) / 2;

    // Convert average minutes back to hours and minutes
    int avgHours = avgMinutes / 60;
    int avgMins = avgMinutes % 60;

    // Print the average time
    cout << setfill('0') << setw(2) << avgHours << ":" << setfill('0') << setw(2) << avgMins << endl;

    return 0;
}
