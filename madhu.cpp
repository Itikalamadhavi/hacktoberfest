#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    getline(cin,a);
    getline(cin,b);
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;
    swap(a[0],b[0]);
    cout<<a<<" "<<b<<endl;
    return 0;
}
