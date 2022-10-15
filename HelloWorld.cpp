#include <iostream>
using namespace std;

int main(){
    
    

    int i = 2;
    int *i1 = &i;
    int &i2 = i;

    cout << i << "\n";
    cout << *i1 << "\n";
    cout << &i2 << "\n";
    
    return 0;
}

