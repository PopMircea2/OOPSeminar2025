using namespace std;
#ifndef BANCA_H
#define BANCA_H

    class BankAccount {
        private:
            string name;
            string iban;
            double balance;
        public:
            BankAccount(string iban, string name) {
                this->iban = iban;
                this->name = name;
                balance = 0.0;
                cout<<"Bank Account created: "<<iban<<endl;
            };
            BankAccount(string iban, double balance, string name) {
                this->iban = iban;
                this->balance = balance;
                this->name = name;
                cout<<"Bank Account created: "<<iban<<endl;
            }
            string getIban() {
                return iban;
            };
            double getBalance() {
                return balance;
            }
            void add_money(double amount) {
                balance += amount;
            };
            void sub_money(double amount) {
                balance -= amount;
            }
        ~BankAccount(){
                cout<<"Bank Account deleted"<<endl;
            };

    };



#endif //BANCA_H
