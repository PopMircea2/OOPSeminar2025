#include<iostream>
#include "banca.h"
using namespace std;

//destructorul nu il apelam
//destructorul il apeleaza compilatorul cand iasa din scope
//aplicatie conturi de banca
//nume, iban, suma de bani, adaugam si extragem bani


int main(){

  {BankAccount b1("hghgchgchasgv",12435,"Ionut");}
  BankAccount b2("vhcgsvghchg",12435,"paul");


  return 0;
}