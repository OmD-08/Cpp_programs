#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("data.txt");

    if (!file) {
        cout << "Error! File could not be created." << endl;
        return 0;
    }

    file << " Hello File Handling!" << endl;
    file << " Writing data to file." << endl;

    if (file.fail()) {
        cout << "Error! Unable to write data to file." << endl;
    }
    else {
        cout << " Data written successfully!" << endl;
    }

    file.close();
    return 0;
}
