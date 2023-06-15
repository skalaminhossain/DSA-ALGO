#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 50;
    int *p = &x;
    *p = 100;
    cout << *p << endl;

    cout << &x << endl;
    cout << x << endl;

    return 0;
}