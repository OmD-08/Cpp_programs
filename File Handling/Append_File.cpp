#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    file.open("data.txt", ios::in | ios::out | ios::app);

    if (!file) {
        cout << "File could not be opened!" << endl;
        return 0;
    }

    // Write / Append data into file
    file << "Appending New elements in filedata.txt file" << endl;

    if (file.fail()) {
        cout << "Error! Unable to write to the file." << endl;
    }
    else {
        cout << " File written successfully!" << endl;
    }

    file.seekp(0, ios::beg);
    cout << "\n File Content:\n";

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}

//ios::in -> read karna
//ios::out -> write karna
//ios::app -> write hamesha file ke end me
