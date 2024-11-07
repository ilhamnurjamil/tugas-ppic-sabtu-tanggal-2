#include <iostream>

using namespace std;

int main() {
    int start_time, end_time, hours_worked;

    cout << "Enter the start time (1-12): ";
    cin >> start_time;

    cout << "Enter the end time (1-12): ";
    cin >> end_time;

    if (end_time > start_time) {
        hours_worked = end_time - start_time;
    } else {
        hours_worked = 12 - start_time + end_time;
    }

    cout << "Lama bekerja: " << hours_worked << " jam" << endl;

    return 0;
}
