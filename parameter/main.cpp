#include <iostream>

using namespace std;
void nilai (int &a) {
    a=10;
}
int main(){
    int a=5;
    cout<< "Nilai awal :" << a << endl;
    nilai(a); // passing by value
    cout<< "Nilai akhir :" << a << endl;
}

