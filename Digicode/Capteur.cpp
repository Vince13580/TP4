#include "Capteur.h"
#include "kbhit.h"

namespace nsDigicode {


Capteur::Capteur()
{


}
int Capteur::Detecter()
{
    return _kbhit();
}
}
