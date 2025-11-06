#include <iostream>
using namespace std;

class EBbill {
    private:
        int customer_id, units;
        char customername[50], address[50];
        float amount;

    public:
        void get_customer_details();
        void calculate_amount();
        void print_bill();
};

void EBbill::get_customer_details() {
    cout << "Enter customer ID: ";
    cin >> customer_id;
    cout << "Enter customer name: ";
    cin.ignore();
    cin.getline(customername, 50);
    cout << "Enter address: ";
    cin.getline(address, 50);
    cout << "Enter number of units: ";
    cin >> units;
}

void EBbill::calculate_amount() {
    if (units <= 100)
        amount = 0;
    else if (units <= 200)
        amount = (units - 100) * 2.25;
    else if (units <= 400)
        amount = (100 * 2.25) + (units - 200) * 4.25;
    else if (units <= 600)
        amount = (100 * 2.25) + (200 * 4.25) + (units - 400) * 6.25;
    else
        amount = (100 * 2.25) + (200 * 4.25) + (200 * 6.25) + (units - 600) * 9.00;
}

void EBbill::print_bill() {
    cout << "\nElectricity Bill\n";
    cout << "Customer ID: " << customer_id << endl;
    cout << "Customer Name: " << customername << endl;
    cout << "Address: " << address << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Amount to Pay: Rs " << amount << endl;
}

int main() {
    EBbill E1;
    E1.get_customer_details();
    E1.calculate_amount();
    E1.print_bill();
    return 0;
}

