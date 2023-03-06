#include <iostream>
#include <string>
using namespace std;

struct Pissa {
    string CompanyName;
    double diameter;
    double weight;
};

int main() {
    Pissa *p = new Pissa();
    cout << "Enter the name of Pizza Company: ";
    getline(cin, p->CompanyName);
    cout << "Enter the weight of Pizza: ";
    cin >> p->diameter;
    cout << "Enter the weight of Pizza: ";
    cin >> p->weight;
    cout << "The Pizza of company: " << p->CompanyName << endl;
    cout << "Diameter is: " << p->diameter << endl;
    cout << "Weight is: " << p->weight << endl;
    delete p;
    return 0;
}