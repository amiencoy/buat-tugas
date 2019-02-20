#include <iostream>
#include <fstream> //untuk menerapkan varfile (akses file)
#include <cstdlib> //untuk menerapkan CLS (clear screen)
using namespace std;

int main(int argc,  char *argv[])
{
	struct data {
    char kb [10], nb [10], tt [10], pengarang [10], hg [10];
    };
	data batas [2];
	ofstream nota;
    cout<<"\t-----Selamat Datang Di Koleksi Buku ""-----\n\n\n";
    void idata();
    {
        cout<<"Masukkan 2 data Buku terlebih dahulu \n";
        for (int i=0; i<2; i++){
            cout<<"1. KODE BUKU\t: "; cin.getline(batas [i].kb, 10);
            cout<<"2. JUDUL BUKU\t: "; cin.getline(batas [i].nb, 10);
            cout<<"3. Tahun Terbit\t: "; cin.getline(batas [i].tt, 10);
            cout<<"4. Penulis\t: "; cin.getline(batas [i].pengarang, 10);
            cout<<"5. Harga Buku\t: "; cin.getline(batas [i].hg, 10);
            cout<<endl<<endl<<endl;
            nota.open ("notab.txt");
            if (nota == NULL){ //nota ke 1
            }
            else{
                for (int i=0; i<2; i++){
                nota<<"============================================="<<endl;
                nota<<"\t\t Bukti Struk Data Buku"<<endl;
                nota<<"============================================="<<endl;
                nota<<"Kode Buku    : "<<batas [i].kb<<endl;
                nota<<"Nama Buku    : "<<batas [i].nb<<endl;
                nota<<"Tahun terbit : "<<batas [i].tt<<endl;
                nota<<"Pengarang    : "<<batas [i].pengarang<<endl;
                nota<<"Harga Barang : "<<batas [i].hg<<endl;
                }
    }

}
}}
