#include <iostream>
#include <string>
#include <queue> 
using namespace std;
int main(){
    queue<string> input;
    string name;
    for(int i=0; i<3; i++){
        cin >> name;
        input.push(name);
    }
    while(!input.empty()){
        cout<<"Serving: "<<input.front()<< endl;
        input.pop();
    }
    return 0;

}