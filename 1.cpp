#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> number;
    int s;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> s;
        number.push(s);
    }

    cout << "Stack (Top to Bottom): ";
    while (!number.empty()) {
        cout << number.top() << " ";
        number.pop();
    }
    cout << endl;

    return 0;
    
}