#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    public:
    void gettime();
    void addtime(const Time &t1, const Time &t2);
    void displaytime() const;
};
void Time::gettime() {
    cout << "Enter the hours: ";
    cin >> hours;
    cout << "Enter the minutes: ";
    cin >> minutes;
}
void Time::addtime(const Time &t1, const Time &t2) {
    int Minutes = t1.minutes + t2.minutes;
    int extraHours = Minutes / 60;
    minutes = Minutes % 60;
    hours = t1.hours + t2.hours + extraHours;
}
void Time::displaytime() const {
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
}
int main() {
    Time t1, t2, t3;
    t1.gettime();
    t2.gettime();
    t3.addtime(t1, t2);
    t3.displaytime();
    return 0;
}
