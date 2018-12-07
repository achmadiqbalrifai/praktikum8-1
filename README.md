# praktikum8

latihan 1 (fungsi fibonacci dengan cara iteratif)

=>> Alur algoritma :


1.mulai program
2.int iteratif (int suku, int a, int b, int c)
3.a=0, b=1;
4.if (suku == 1) return b;
5.if (suku == 0) return a;
6.else
7.for(int i=2; i<=suku; i++){
8.c = a + b;
9.a = b;
10.b = c;
11.int suku, a, b,c;
12.cout<<"Masukkan nilai suku ke-: ";
13.cin>>suku;
14.cout<<"\nBilangan fibonaccinya untuk "<<suku<<" adalah ";
15.cout<< iteratif ( suku,  a,  b,  c);
16.selesai


=>> kode C++ program :


#include <iostream>

using namespace std;

int iteratif (int suku, int a, int b, int c)

{
a=0, b=1;

if (suku == 1) return b;
if (suku == 0) return a;

else{
for(int i=2; i<=suku; i++){


c = a + b;
a = b;
b = c;
}
return c;

}
}

int main()
{
int suku, a, b,c;

cout<<"Masukkan nilai suku ke-: ";


cin>>suku;
cout<<"\nBilangan fibonaccinya untuk "<<suku<<" adalah ";
cout<< iteratif ( suku,  a,  b,  c);
return 0;
}


=>> Flowchart latihan1 :


![flowchart_latihan1](https://user-images.githubusercontent.com/43899109/49623980-5fdd0900-fa02-11e8-97a2-a101612d0fd5.jpg)


=>> Hasil Sreenshot program :


![latihan1](https://user-images.githubusercontent.com/43899109/49623982-623f6300-fa02-11e8-88f7-dcf80c76c32b.jpg)


latihan 2 fungsi rekursif untuk perkalian dua buah bilangan


=>> Alur algoritma :


1.mulai program
2.faktorial dengan rekursif
3.int faktorial(int n){
4.if (n==0 || n==1){
5.cout << "1\n";
6.return 1;
7.} else 
8.cout << n << "*";
9.return n * faktorial (n-1);
10.int main()
11.int n;
12.cout << "\nMasukkan nilai n! ";
13.cin >> n;
14.cout << n << "! = ";
15.cout << "Maka nilai " << n << " faktorial dengan rekursif: " << faktorial(n) << endl << endl;
16.selesai


=>> Kode C++ program :


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


=>> Hasil Sreenshot program :


![latihan2](https://user-images.githubusercontent.com/43899109/49623983-62d7f980-fa02-11e8-85dc-cfee9dce9e3b.jpg)


latihan 3


=>> Alur algoritma :


1.mulai program
2.int kali1(int a, int b){
3.int hasil =0;
4.for(int i=0;i<b;i++){
5.hasil=hasil+a;
 }
6.return hasil;
 }
7.int kali2(int a, int b){
8.if(b==0)
9.return 1;
10.else if(b==1)
11.return a;
12.else
13.return a+kali2(a,b-1);
 }
14.int main(int argc, char *argv[])
 {
15.int a,b;
16.cout<<"masukkan a :";
17.cin>>a;
18.cout<<"masukkan b :";
19.cin>>b;
20.cout<<"secara ITERATIF :"<<endl;
21.cout<<kali1(a,b)<<endl;
22.cout<<"secara REKURSIF"<<endl;
23.cout<<kali2(a,b)<<endl;
24.system("PAUSE");
25.return EXIT_SUCCESS;
 }
26.selesai


=>> kode C++ program :


#include <iostream>

using namespace std;

int main(){
    int n;
    int A = 0, B=1, C;

    cout << " Masukan N : " ;
    cin >> n ;

    for (int i = 0; i<n-1; i++){

        if (i==0){
            cout << A << " " << B << " " ;
        }

        else {
            C = A + B ;
            A = B;
            B = C;

            cout << C << " ";
        }
    }
}


=>> Hasil screenshoot program :


![latihan3](https://user-images.githubusercontent.com/43899109/49624542-68364380-fa04-11e8-86f7-bd99443aeb28.jpg)


latihan5 contoh cara rekursif dan iteratif


=>> KOde C++ program :


#include <cstdlib>
 #include <iostream>
using namespace std;
 int kali1(int a, int b){
 int hasil =0;
 for(int i=0;i<b;i++){
 hasil=hasil+a;
 }
 return hasil;
 }
 int kali2(int a, int b){
 if(b==0)
 return 1;
 else if(b==1)
 return a;
 else
 return a+kali2(a,b-1);
 }
 int main(int argc, char *argv[])
 {
 int a,b;
 cout<<"masukkan a :";
 cin>>a;
 cout<<"masukkan b :";
 cin>>b;
 cout<<"secara ITERATIF :"<<endl;
 cout<<kali1(a,b)<<endl;
 cout<<"secara REKURSIF"<<endl;
 cout<<kali2(a,b)<<endl;
 system("PAUSE");
 return EXIT_SUCCESS;
 }


=>>  Hasil screenshoot program :


![latihan5](https://user-images.githubusercontent.com/43899109/49624562-7edc9a80-fa04-11e8-8169-8a7860e78aba.jpg)

