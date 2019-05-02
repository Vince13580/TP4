#include "ObjetTempo.h"

namespace nsDigicode {
    ObjetTempo::ObjetTempo(Chrono* pchrono, int delai) : mypChrono(pchrono) , myDelai(delai)
    {

    }
    Chrono* ObjetTempo::getChrono() const
    {
        return mypChrono;
    }
    void ObjetTempo::finTempo()
    {
        myAttente = false;
    }
    int ObjetTempo::getDelai() const
    {
        return myDelai;
    }

}
