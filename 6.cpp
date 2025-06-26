#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main(){
    deque<char> word;
    string s;
    cin >> s;
    for(int i =0; i<s.size(); i++){
        word.push_back(s[i]);
    }
    bool pol = true;
    while(word.size() > 1){
        if(word.front() == word.back()){
            word.pop_front();
            word.pop_back();
        }else{
        pol = false;
        break;
        }
    }
    if(pol){
        cout<<"It is a palindrome.";
    }else{
        cout << "It is not a palindrome.";
    }
    return 0;

}