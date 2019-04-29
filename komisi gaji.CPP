#include<iostream.h>
#include<conio.h>
void main () {
     int pendapatan,komisi,total,jasa;
     clrscr();
     cout<<"           INPUT KOMISI KEPADA SALESMAN    \n";
     cout<<"-----------------------------------------------"<<endl;
     cout<<"penjualan salesman : ";cin
     >>pendapatan;
     cout<<"==============================================="<<endl;
    if(pendapatan>=0&&pendapatan<=2000000){
       jasa   = 500000;
       komisi =(0.1*pendapatan);
       total  =komisi+jasa;
       }
    else if(pendapatan<=2000000){
      jasa   =500000;
      komisi =(0.15*pendapatan);
      total  =komisi+jasa;
      }
    else {
      cout<<"Tidak ada kode yang sesuai";   }
cout<<"Uang jasa :"<<jasa<<endl;
cout<<"Komisi    :"<<komisi<<endl;
cout<<"Total     :"<<total<<endl;
getch (); }
