#include <iostream> // Untuk penggunaan fungsi cout, cin, dan endl
#include<conio.h>   // Untuk penggunaan fungsi getch
#include <stdlib.h> // Untuk bisa menggunakan fungsi clear pada terminal
using namespace std; // Agar tidak perlu menuliskan "std::"

struct data // Terdapat sebuah struct untuk mendeklarasi array dari nama dan umur
{
    char nama[20];
    char umur[10];
};

struct data batas[100]; // Untuk mendeklarasikan sebuah array batas yang bertipe struct data
int a, b, c, d, i, j, k, l, x, y; // Untuk keperluan pertambahan indeks array, nomor dan perulangan

void inputdata() // Prosedur untuk input data
{
    cout<<"Nama Panggilan\t: ";cin>>batas[a].nama; 
    cout<<"Umur\t\t: ";cin>>batas[a].umur;
    a++; // Untuk penambahan indeks array
    cout<<"\n=========================== Data Berhasil Ditambahkan ===========================";
    getch();system("cls");
}


void lihatdata() // Prosedur untuk lihat data
{
 cout<<"\n==================== Menampilkan Data ====================\n\n";
 cout<<"==========================================================\n";
 cout<<"||\tNO\t||\tNama Panggilan\t||\tUmur\t||";
 cout<<"\n==========================================================";
 j = 0; // Untuk penomoran dalam tabel
 for(i=0;i<a;i++)
 {
    j=j+1;
    cout<<"\n";
    cout<<"||\t"<<j<<"\t||";
    cout<<"\t"<<batas[i].nama<<"\t\t||";
    cout<<"\t"<<batas[i].umur<<"\t||";
    cout<<"\n==========================================================";
  }
 getch();system("cls");
}

void hapusdata() // Prosedur untuk hapus data
{
    while (true)
    {
        cout<<"Masukan indeks data yang ingin dihapus : ";cin>>x;
        y=x-1; // Untuk pengakses indeks di array
        a--;
        for(int i=y;i<a;i++)
        {
            batas[i]=batas[i+1];
        }

        system("cls");
        cout<<"\n=============== Data ke - "<<x<< " Berhasil Dihapus ===============\n";
        lihatdata();break;
    }
}

void editdata() // Prosedur untuk edit data
{
    while (true)
    {
        cout<<"Masukan indeks data yang ingin diedit : ";cin>>k;
        l=k-1; // Untuk pengakses indeks di array
        cout<<"Nama Panggilan\t: ";cin>>batas[l].nama;
        cout<<"Umur\t: ";cin>>batas[l].umur;
        cout<<"\n=============== Data ke - "<<x+1<< " Berhasil Diedit ===============\n";
        lihatdata();break;
    }
}

int main() // Fungsi utama
{
    int pilih; // Untuk pilihan
    char tanya; // Untuk tanya saat ingin keluar dari program
    cout<<"\n\n\n\n\n============================= PROGRAM CRUD MENU =============================";
    system("cls");
    awal: // Terdapat label awal sebagai tempat untuk kembali ke menu utama setelah melakukan eksekusi data
    cout<<"\n================================ PILIHAN MENU =================================";
    cout<<"\n1. Masukkan data";
    cout<<"\n2. Lihat Data";
    cout<<"\n3. Edit Data";
    cout<<"\n4. Hapus Data";
    cout<<"\n5. Keluar";
    cout<<"\n\nMasukkan Pilihan : ";
    cin>>pilih;
    if(pilih==1)
    {system("cls");inputdata();goto awal;} // goto yang berfungsi untuk melompat ke baris label
    if(pilih==2)
    {system("cls");lihatdata();goto awal;} // goto yang berfungsi untuk melompat ke baris label
    if(pilih==3)
    {system("cls");editdata();goto awal;} // goto yang berfungsi untuk melompat ke baris label
    if(pilih==4)
    {system("cls");hapusdata();goto awal;} // goto yang berfungsi untuk melompat ke baris label
    if(pilih==5)
    {system("cls");
        cout<<"\nApakah anda ingin keluar dari program ? (Y / T) : "<< endl;cin>>tanya; // Untuk menanyakan user apakah ingin keluar dari program

        if(tanya == 'y'|| tanya == 'Y')
        {
            system("cls");
            cout<<"=======================================================================" << endl;
            cout << "Terimakasih telah menggunakan program ini :) Semoga harimu menyenangkan" << endl;
            cout<<"======================================================================="; exit(0);
        }
        if(tanya =='n'|| tanya =='N')
            {
                system("cls");goto awal;
            }
    }
    else // Untuk kesalahan dalam memilih
    {cout<<"Pilihan yang anda masukkan salah, Mohon pilih kembali";getch();goto awal;}
}
