#include <cstdlib>
#include <iostream>

using namespace std;

void tukar(int &a,int &b){int c;
c=a;
a=b;
b=c;
}

int main(int argc, char *argv[])
{
int x,y;
    cout<<"Sebelum ditukar\n";
    cout<<"Masukkan angka A: ";
    cin>>x;
    cout<<"Masukkan angka B: ";
    cin>>y;
    cout<<"\nSetelah ditukar\n";
    tukar(x,y);
    cout<<"angka A: "<<x<<endl;
    cout<<"angka B: "<<y<<endl;


}
