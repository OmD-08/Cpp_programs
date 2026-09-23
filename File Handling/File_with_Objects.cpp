#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

int main() {
    Student s1;

    s1.getData();

    fstream file("student.txt", ios::out | ios::in | ios::app );
    file << " Name : " << s1.name << " " << " Age: " << s1.age;

    cout << "\nData stored in file!" << endl;

    file.seekg(0, ios::beg);

    cout << "\n File Content:\n";

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

    return 0;
}
