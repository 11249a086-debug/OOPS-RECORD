#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string name, designation;
    double basicPay, hra, da, tax, grossPay, netPay;

public:
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore(); 

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Designation: ";
        getline(cin, designation);

        cout << "Enter Basic Pay: ";
        cin >> basicPay;

        cout << "Enter HRA (% of Basic Pay): ";
        double hraPercent;
        cin >> hraPercent;

        cout << "Enter DA (% of Basic Pay): ";
        double daPercent;
        cin >> daPercent;

        cout << "Enter Tax (% of Gross Pay): ";
        double taxPercent;
        cin >> taxPercent;

        hra = (hraPercent / 100.0) * basicPay;
        da = (daPercent / 100.0) * basicPay;
        grossPay = basicPay + hra + da;
        tax = (taxPercent / 100.0) * grossPay;
        netPay = grossPay - tax;
    }

    void displayPaySlip() {
        cout << fixed << setprecision(2);
        cout << "\n===\n";
        cout << "           EMPLOYEE PAY SLIP         \n";
        cout << "===\n";
        cout << "Employee ID     : " << empID << endl;
        cout << "Name            : " << name << endl;
        cout << "Designation     : " << designation << endl;
        cout << "---\n";
        cout << "Basic Pay       : " << setw(10) << basicPay << endl;
        cout << "HRA             : " << setw(10) << hra << endl;
        cout << "DA              : " << setw(10) << da << endl;
        cout << "---\n";
        cout << "Gross Pay       : " << setw(10) << grossPay << endl;
        cout << "Tax Deducted    : " << setw(10) << tax << endl;
        cout << "---\n";
        cout << "Net Pay         : " << setw(10) << netPay << endl;
        cout << "===\n";
    }
};

int main() {
    Employee emp;
    emp.getDetails();
    emp.displayPaySlip();

    return 0;
}
