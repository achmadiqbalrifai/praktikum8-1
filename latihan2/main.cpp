#include<iostream>

using namespace std;

//faktorial dengan iterasi
int faktorial(int n){
    int fak = 1;
    for (int i=1; i<=n; i++)
    fak *= i;
    return fak;
}

int main(){
int n;
cout << "masukkan nilai n! ";
cin >> n;
cout << "Nilai N faktorial dengan iterasi: " << faktorial(n) << endl;
}
