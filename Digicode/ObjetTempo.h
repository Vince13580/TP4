#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode {

	class ObjetTempo 
    {
    protected:
        bool myAttente;
        int myDelai;
        Chrono* mypChrono;
    public:
        ObjetTempo(Chrono* pchrono, int delai);
        Chrono* getChrono()const ;
        void finTempo();
        int getDelai() const ;

    };
	
} /* ns_Digicode */

#endif /* _OBJETTEMPO */
