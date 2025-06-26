#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> num;
    // int number, n;
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     cin >> number;
    //     num.push_back(number);
    // }
    num.push_front(10);
    num.push_back(20);
    num.push_front(5);
    cout<<"Deque contains: ";
    for(int x : num){
        cout << x << " ";
    }
    cout << endl;
    cout<< "Pop back: "<<num.back()<<endl;
    cout <<"Remaining: ";
    num.pop_back();
    for(int x : num){
        cout << x << " ";
    }
    cout << endl;
    cout<<"Pop front: ";
    cout<<num.front()<<endl;
    num.pop_front();
    cout <<"Remaining: ";
    for(int x : num){
        cout << x << " ";
    }

}