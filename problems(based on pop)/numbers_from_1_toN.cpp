#include<iostream>
using namespace std;
int main(){

#include <iostream>
using namespace std;

    int N;
    
    cout << "Enter a number N: ";
    cin >> N;
    
    
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            cout << i << " is Even" << endl;
        } else {
            cout << i << " is Odd" << endl;
        }
    }

return 0;
}

