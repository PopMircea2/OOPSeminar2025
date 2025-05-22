
#include "main6.h"
#include<iostream>
using namespace std;
int main(){
    BiletController B;
    int opt;
    do {
        Ui();
        cin>>opt;
        if (opt==1) {
            int id;
            std::string film;
            int rand;
            int loc;
            float pret;
            cout<<"Id:\n";
            cin>>id;
            cout<<"Film:\n";
            cin>>film;
            cout<<"Rand:\n";
            cin>>rand;
            cout<<"Loc:\n";
            cin>>loc;
            cout<<"Pret:\n";
            cin>>pret;
            B.adaugaBilet(id,film,rand,loc,pret);
        }
        else if (opt==2) {
            std::vector<Bilet> bilete = B.print_all();
            for (const auto &bilet : bilete) {
                bilet.print();
            }
        }
        else if (opt==3) {
            float pret_dorit;
            cout<<"Pretul dorit:\n";
            cin>>pret_dorit;
            std::vector<Bilet> bilete = B.sortBilet(pret_dorit);
            for (const auto &bilet : bilete) {
                bilet.print();
            }
        }
    }
    while (opt !=4);
    return 0;
}
