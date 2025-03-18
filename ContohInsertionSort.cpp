#include <iostream>
using namespace std;

int arr [20]; //Membuat Array dengan panjang data 20
int n; // Membuat variable inputan n

void input ()
{
    while (true)
    {
        cout<<" Masukkan Jumlah Data pada Array = "; //Membuat Inputan Jumlah element Array
        cin >> n; //Memanggil variable inputan n

        if (n <= 20)
        {// Membuat Kondisi n tidak lebih dari 20
            break;
        }
        else
    {
