#ifndef PORTE_H
#define PORTE_H
#include "ObjetTempo.h"
#include "Chrono.h"
#include "Capteur.h"


namespace nsDigicode {


class Porte : public ObjetTempo
{
private:
    bool fermer();
    Capteur myCapteur;
public:
    Porte(Chrono* pchrono ,int delai);
    bool ouvrir();
};
}
#endif // PORTE_H
