//
// Created by Mircea Pop on 22.05.2025.
//

#ifndef MAIN6_H
#define MAIN6_H
#include <iostream>
#include <string>


class Bilet {
private:
    int Id;
    std::string Film;
    int rand;
    int loc;
    float pret;

public:
    Bilet(int id, const std::string &film, int rand, int loc, float pret) : Id(id), Film(film), rand(rand), loc(loc), pret(pret) {}

    int getId() const {
        return Id;
    }
    const std::string &getFilm() const {
        return Film;
    }
    int getRand() const {
        return rand;
    }
    int getLoc() const {
        return loc;
    }
    float getPret() const {
        return pret;
    }
    void print() const {
        std::cout << "ID: " << Id
             << ", Film: " << Film
             << ", Rand: " << rand
             << ", Loc: " << loc
             << ", Pret: " << pret <<std::endl;
    }
};

class BiletController {
private:
    std::vector<Bilet> bilete;
public:
    void adaugaBilet(int id, std::string film, int rand, int loc, float pret) {
        Bilet b(id, film, rand, loc, pret);
        bilete.push_back(b);
    }
    std::vector<Bilet> print_all() const {
        return bilete;
    }
    std::vector<Bilet> sortBilet(float pret) const {
        std::vector<Bilet> resultat;
        for (const auto &bilet : bilete) {
            if (bilet.getPret() > pret) {
                resultat.push_back(bilet);
            }
        }
        return resultat;
    }
};

void Ui() {
    std::cout<<"Alege o optiune: \n"
            "1. Adauga bilet\n"
            "2. Afiseaza toate biletele\n"
            "3. Afiseaza bilete cu pret mai mare decat un anumit pret\n"
            "4. Iesire\n";
}



#endif //MAIN6_H
