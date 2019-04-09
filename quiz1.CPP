#include <iostream.h>
#include <conio.h>

main ()
{
int NK, L, I, D, NM, NQ, NF, TNT, NA, Z, U, N, K, E;
char Y[10], A [15];
cout <<" Akumulasi Nilai Akhir Mahasiswa \n " ;
cout <<" Masukkan Nama Mahasiswa =  " ; cin >> Y;
cout <<" Jurusan Mahasiswa = " ; cin >>A;
cout <<" Masukkan Nilai Keaftikan =  " ; cin >> NK;
cout <<" Masukkan Nilai Tugas1 =  " ; cin >> L;
cout <<" Masukkan Nilai Tugas2 =  " ; cin >> I;
cout <<" Masukkan Nilai Tugas3 =  " ; cin >> D;
cout <<" Masukkan Nilai Mid =  " ; cin >> NM;
cout <<" Masukkan Nilai Quiz =  " ; cin >> NQ;
cout <<" Masukkan Nilai Final =  " ; cin >> NF;
 TNT = ( L + I + D)/3;
  Z = TNT*20/100;
  U = NK*20/100;
  N = NM*20/100;
  K = NQ*20/100;
  E = NF*20/100;
NA = Z + U + N + K + E;
cout <<" Nama Mahasiswa\t :  "<< Y<<endl;
cout <<" Jurusan Mahasiswa\t :  "<< A<<endl;
cout <<" Nilai Akhir Mahasiswa\t :  "<< NA<<endl;
getch();
}