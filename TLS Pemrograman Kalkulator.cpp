#include <iostream>  
#include <stdio.h>
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
using namespace std;
void add()  
{  
int n, sum = 0, i, number;  
cout <<"Berapa angka yang ingin Anda jumlahkan?: ";  
cin >> n;  
cout << "Masukkan angka yang ingin dijumlahkan satu per satu: \n";  
for (i = 1; i <= n; i++)  
{  
cin >> number;  
sum = sum + number;  
}  
cout << "\n Hasil penjumlahannya adalah = "<< sum;  
}  
void sub()  
{  
int num1, num2, z;  
cout <<" \n Masukkan angka pertama = ";  
cin >> num1;  
cout << "\n Masukkan angka kedua = ";  
cin >> num2;  
z = num1 - num2;  
cout <<"\n Hasil pengurangannya adalah = " << z;  
}  
void multi()  
{  
int num1, num2, mul;  
cout <<" \n Masukkan angka pertama = ";  
cin >> num1;  
cout << "\n Masukkan angka kedua = ";  
cin >> num2;  
mul = num1 * num2;  
cout <<"\n Hasil perkalian dari 2 angka tersebut adalah = " << mul;  
}  
void division()  
{  
float num1, num2; 
int div = 0;  
cout <<" \n Masukkan angka pertama = ";  
cin >> num1;  
cout << "\n Masukkan angka kedua = ";  
cin >> num2;  
while ( num2 == 0)  
     {  
     cout << "\n Pembagi tidak boleh = 0"  
         "\n Masukkan angka kedua = ";  
         cin >> num2;  
         }  
div = num1 / num2;  
cout <<"\n Hasil pembagian dari 2 angka tersebut adalah = " << div;  
}  
void sqr()  
{  
int num1;  
float sq;  
cout <<" \n Masukkan angka yang ingin dikuadratkan: ";  
cin >> num1;  
sq = num1 * num1;  
cout <<" \n Hasil kuadrat dari " << num1<< " adalah : "<< sq;  
}  
void srt()  
{  
float q;  
int num1;  
cout << "\n Masukkan angka yang ingin di akar kuadrat:";  
cin >> num1;  
q = sqrt(num1);  
cout <<" \n Hasil akar dari " << num1<< " adalah : "<< q;  
}  
int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
int main()  
{ 
system("cls"); 
int opr, n;
    cout << "Apa yang Anda butuhkan?\n";
    cout << "1 = Kalkulator\n";
    cout << "2 = Konversi Suhu\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> opr;
    if (opr == 1 ){
    cout <<"Pilih operasi yang Anda inginkan";
    do  
{
    cout <<"\n1 = Penjumlahan"  
            "\n2 = Pengurangan"  
            "\n3 = Perkalian"  
            "\n4 = Pembagian"  
            "\n5 = Kuadrat"  
            "\n6 = Akar Kuadrat"  
            "\n7 = Faktorial"
            "\n8 = Exit"  
            "\n \n Masukkan pilihan anda: ";  
            cin >> opr; 
            
  
   switch (opr)  
     {  
     case 1:  
    add();
    break;  
    case 2:  
    sub();
    break;  
    case 3:  
    multi();
    break;  
    case 4:  
    division();
    break;  
    case 5:  
    sqr();
    break;  
    case 6:  
    srt();
    break;  
    case 7:
    cout << "Masukkan angka yang ingin Anda faktorialkan:";
    cin >> n;
    cout << n <<"! adalah " << factorial(n);
    break;
    case 8:  
    exit(0);
    break;  
    default:  
    cout <<"Masukkan angka yang benar!";  
    break;  
    }  
    cout <<" \n------------------------------\n";  
    }while(opr != 8);   
    }  
    else if (opr == 2){
    float cel, re, fahren, kelvin;
    cout<<"Masukkan suhu yang ingin Anda konversi (dalam celsius): ";
    cin >> cel;
    re = (cel * 4 / 5);
    fahren = (cel * 9 / 5) + 32;
    kelvin = 273 + cel;
    cout <<"Hasil konversi suhu dalam Fahrenheit = " << fahren;
    cout <<"\nHasil konversi suhu dalam Reamur = " << re;
    cout <<"\nHasil konversi suhu dalam Kelvin = " << kelvin;
    }
    else
    cout<<"Masukkan angka yang benar!\nSilakan jalankan ulang program ini.";
}