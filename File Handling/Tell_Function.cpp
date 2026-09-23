#include <iostream>
#include <fstream>
using namespace std;

int main() {
    /* WRITE POINTER */
    ofstream out("data.txt");

    out << "HELLO C++";

    cout << "Write pointer position (tellp): "
         << out.tellp() << endl;

    out.close();

    /* READ POINTER */
    ifstream in("data.txt");

    cout << "Initial read position (tellg): "
         << in.tellg() << endl;

    char ch;
    in.get(ch);

//  cout << "After reading one character, tellg: "
//       << in.tellg() << ch << endl;

    cout << "After reading one character, tellg: "
         << in.tellg()
         << ", character: " << ch << endl;

    in.close();

    return 0;
}

//1. tellp() - Write Pointer
//
//tellp() means "tell put position".
//
//2. tellg() - Read Pointer
//
//tellg() means "tell get position".
