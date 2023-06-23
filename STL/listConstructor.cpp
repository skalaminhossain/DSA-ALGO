#include <bits/stdc++.h>
using namespace std;

int main(){
    // list<int>mylist2 =  {1,2,3,4,5};
    int arr[6] = {1,2,3,4,5,6};
    list<int>mylist(arr,arr + 6);
    for(auto it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << endl;
    }
    mylist.clear();
    cout << mylist.size() << endl;
    return 0;
}