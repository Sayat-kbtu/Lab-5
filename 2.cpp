#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    stack<char> word;
    string w;
    cin >> w;
    for(size_t i=0; i<w.length(); i++){
        char ch = w[i];
        word.push(ch);
    }
    string reversed = "";
    while(!word.empty()){
        reversed += word.top();
        word.pop();    
    }
    cout << reversed <<endl;
    return 0;
}