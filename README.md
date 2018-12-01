# Latihan01
"Menukar Nilai dari Dua Angka"

Deskripsi algoritma :

1. Mulai.
2. Inisiasi Nilai a, Nilai b, Nilai c sebagai integer.
3. Baca Nilai a
4. Baca Nilai b
5. Hitung Nilai c=Nilai a
6. Hitung Nilai a
7. Hitung Nilai b=Nilai c
8. Cetak Nilai a dan Nilai b
9. Selesai

# Program C++

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

# Foto hasil
![img](https://raw.githubusercontent.com/arifhanifanudin/praktikum07/master/latihan01/hasil01.PNG)

# Latihan02

" Perkalian 2 bilangan dengan Operator Penjumlahan "

Deklarasi algoritma :
1. mulai program
2. int kali (int m, int n)
3. int i,hasil=0;
4. for(i=1;i<=n;i++)
5. hasil+=m;
6. if (n<0)
7. int a,b;
8. cout<<"Masukan Bilangan :";
9. cin>> a;
10. cout<<"Masukan Bilangan :";
11. cin>> b;
12. cout << "\n\nHasil dari " << a <<" X "<< b <<" = "<<kali(a,b);
13. selesai

# Program C++

#include <iostream>

using namespace std;

int kali (int m, int n)

{

    int i,hasil=0;
    
    for(i=1;i<=n;i++)
    
        hasil+=m;
        
    if (n<0)
    
        {
        
        return(-hasil);
        
        }
        
    else
    
        {
        
        return(hasil);
        
        }
        
}

int main()

{

    int a,b;
    
    cout<<"Masukan Bilangan :";
    
    cin>> a;
    
    cout<<"Masukan Bilangan :";
    
    cin>> b;
    
    cout << "\n\nHasil dari " << a <<" X "<< b <<" = "<<kali(a,b);
    
    return 0;
    
}

# Foto hasil 
![img]()
