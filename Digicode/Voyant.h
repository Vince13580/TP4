#ifndef VOYANT_H
#define VOYANT_H
#include <string>

namespace nsDigicode {
enum Couleur {vert,rouge};
enum Etat {allume,eteint};

class Voyant
{
private:
    Couleur myCouleur;
    Etat myEtat;

public:
    Voyant(Couleur couleur, Etat etat);
    void allumer();
    void eteindre();
    std::string getStatut();
};
}

#endif // VOYANT_H
