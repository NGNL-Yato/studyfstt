#include <iostream>
#include <list>
#include <string>

using namespace std;

class User_Data {
public:
    string First_Name;
    string Family_Name;
    int age;

    User_Data(const string& first_n, const string& family_n, int aging) {
        First_Name = first_n;
        Family_Name = family_n;
        age = aging;
    }
};

bool triUser_Data(const User_Data& p1, const User_Data& p2) {
    return p1.Family_Name < p2.Family_Name;
}

int main() {
    list<User_Data> Person;
    bool StopInput = false;
    int Loops = 1;
    char Entering_Data;

    do {
        string f_name, fam_name;
        int age;

        cout << "Person Number " << Loops << ":" << endl;
        cout << "Enter your first name: ";
        cin >> f_name;
        cout << "Enter your family name: ";
        cin >> fam_name;
        cout << "Enter your age: ";
        cin >> age;

        User_Data px(f_name, fam_name, age);
        Person.push_back(px);
        Loops++;

        cout << "Do you want to add more people? (y/n): ";

        do {
            cin >> Entering_Data;
        } while (Entering_Data != 'y' && Entering_Data != 'Y' && Entering_Data != 'n' && Entering_Data != 'N');

        if (Entering_Data == 'n' || Entering_Data == 'N')
            StopInput = true;

    } while (!StopInput);

    cout << endl;
    Person.sort(triUser_Data);
    for (const User_Data& px : Person) {
    cout << "First Name: " << px.First_Name << ", Family Name: " << px.Family_Name << ", Age: " << px.age << endl;
    }
    return 0;
}