#include <iostream>
#include <fstream>
using namespace std;

int main() {
    /* CREATE FILE WITH INITIAL DATA */
    ofstream createFile("text.txt");
    createFile << "HELLO WORLD";
    createFile.close();

    /* READ COMPLETE FILE INTO MEMORY */
    ifstream readFile("text.txt");

    if (!readFile) {
        cout << "Error: File not found!" << endl;
        return 0;
    }

    string content, line;
    while (getline(readFile, line)) {
        content += line;  // store file data in memory
    }
    readFile.close();

    /* INSERT DATA AT SPECIFIC POSITION */
    int position = 5;  // after "HELLO"

    content.insert(position, " C++");

    /* WRITE MODIFIED CONTENT BACK */
    ofstream writeFile("text.txt");

    if (!writeFile) {
        cout << "Error: Cannot write to file!" << endl;
        return 0;
    }

    writeFile << content;
    writeFile.close();

    /* DISPLAY FINAL CONTENT*/
    cout << "Updated Memory content: \n" << content << endl;
    cout << "-------- File Content --------\n";
    cout << content << endl;

    return 0;
}
