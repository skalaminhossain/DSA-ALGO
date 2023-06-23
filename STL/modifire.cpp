#include <bits/stdc++.h>
using namespace std;


int main(){
    list<int>myList = {10,20,30};
    list<int>newList;
    newList = myList;
    newList.push_back(40);
    newList.push_front(50);
    newList.pop_front();
    newList.insert(next(newList.begin(),2),100);
    newList.erase(next(newList.begin(),2));
    for(int val:newList){
        cout << val << endl;
    }
    return 0;
}