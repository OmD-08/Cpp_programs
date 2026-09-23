#include <iostream>
#include <fstream>
using namespace std;

int main() {
    /* CREATE & WRITE FILE */
    ofstream file("text.txt");

    if (!file) {
        cout << "Error creating file!" << endl;
        return 0;
    }

    file << "HELLO WORLD";
    file.close();

    // Modify in the existing file using seekp()
    fstream rw("text.txt", ios::in | ios::out);

    if (!rw) {
        cout << "Error opening file for modification!" << endl;
        return 0;
    }

    rw.seekp(6);  // move to 'W'
    rw << "C++ ";
    rw.close();

    // Read the file using seekg()
    ifstream readFile("text.txt");

    if (!readFile) {
        cout << "Error opening file for reading!" << endl;
        return 0;
    }

    readFile.seekg(0);

    string text;
    getline(readFile, text);

    cout << "Data read using seekg(): " << text << endl;

    readFile.close();

    return 0;
}

//
//Function  Meaning Used for
//tellp()   Tell Put Position   Writing
//tellg()   Tell Get Position   Reading
//seekp()   Seek Put Position   Move write pointer
//seekg()   Seek Get Position   Move read pointer

//seekp() vs seekg()
//Function  Full meaning  Pointer Purpose
//seekp()   Seek Put      Write pointer   Move where you will write
//seekg()   Seek Get      Read pointer    Move where you will read
//tellp()   Tell Put      Write pointer   Find current write position
//tellg()   Tell Get      Read pointer    Find current read position
