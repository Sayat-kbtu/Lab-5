#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> num;
    int number;
    for(int i = 0; i < 5; i++){
        cin >> number;
        num.push(number);
    }
    while(!num.empty()){
        cout << num.front() << " ";
        num.pop();
    }
    cout << endl;
}