#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    // Write Code to Swap
    a+=b;
    b=a-b;
    a-=b;
    cout << a << " " << b << endl;
    return 0;
}