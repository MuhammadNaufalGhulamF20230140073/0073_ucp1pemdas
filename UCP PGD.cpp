// 1.string desa; , float luas;, int sks;
// 2. impelementasi conditional statment
//if
// #include <iostream>
//using namespace std;

//int main(){
//int nMatematika, nFisika, nRerata;
//string status;

//cout << "Masukan Nilai Matematika = " << endl;
//cin >> nMatematika;
//cout << "Masukan Nilai Fisika = " << endl;
//cin >> nFisika;

//nRerata = (nMatematika+nFisika)/2;

//cout << "Nilai Rata Rata adalah : " << nRerata << endl;

//if (nRerata > 60 || nMatematika > 70){
//    status = "Lulus";
//}
//else{
//    status = "Tidak Lulus";
//}
//cout << "Anda Dinyatakan : " << status;
//return 0;

//}


        // 3. Implementasi Struct 

// #include <iostream>
//using namespace std;

//struct DetailAlamat{
//     string desa;
//     string kota;
//};

//struct Mahasiswa
//{
//     string nim;
//     string nama;
//     DetailAlamat alamat;
 //     int umur;

//};


        //4 implementasi prosedur dan fungsi
//#include <iostream>
//using namespace std;

//string nama;
//int nSamba, nNB, nTimberland, nErigo, nMJC;
//int hSamba = 300, hNB = 5000, hTimberland = 4000, hErigo = 200000, hMJC = 8000;  

//void input(){
//    cout << "Nama Pembeli : ";
//    cin >> nama;

//    cout << "Jumblah Samba: ";
//    cin >> nSamba;

//    cout << "Jumblah NB: ";
//    cin >> nNB;

//    cout << "Jumblah Timberland: ";
//    cin >> nTimberland;

//    cout << "Jumblah Erigo: ";
//    cin >> nErigo;

//    cout << "Jumblah MJC: ";
//    cin >> nMJC;
//}

//int TotalHarga(){
//    return (nSamba * hSamba) + (nNB * hNB) + (nTimberland * hTimberland) + (nErigo * hErigo) + (nMJC * hMJC);
//}

//void display(){
//    cout << "Total Harganya : " << TotalHarga() << endl;
//}

//int main(){
//    char pilihan;
//    do{
//    input();
//    display();
//    cout << "Apakah Ingin membeli lagi" ;
//    cin >> pilihan;
//    }while (pilihan == 'y'||pilihan == 'Y');
//    {
        /* code */
//    }
    
//}

        //5.Implementasi looping while
//        #include <iostream>
//using namespace std;

//int main(){

//    int bilangan ;
//    srand(time(0));
//    bilangan = rand() % 12;
    
//    while(bilangan % 2){
//        cout << bilangan << endl;
//        cout << "Maka Bilangannya ganjil" << endl;

//        bilangan = rand() % 12;
//    }

//    cout << bilangan << endl;
//    cout << " Bilangannya Genap" << endl;
//}

        //6.
#include <iostream>
using namespace std;

int main(){
int nMatematika, nBahasaInggris, nRerata;
string status;

cout << "Masukan Nilai Matematika = " << endl;
cin >> nMatematika;
cout << "Masukan Nilai BahasaInggris = " << endl;
cin >> nBahasaInggris;

nRerata = (nMatematika+nBahasaInggris)/2;

cout << "Nilai Rata Rata adalah : " << nRerata << endl;

if (nRerata > 70 || nMatematika > 80){
    status = "Lulus";
}
else{
    status = "Tidak Lulus";
}
cout << "Anda Dinyatakan : " << status;
return 0;

}