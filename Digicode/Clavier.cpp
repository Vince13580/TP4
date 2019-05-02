#include "Clavier.h"
#include "kbhit.h"

using namespace std;
namespace nsDigicode {



Clavier::Clavier()
{

}
int Clavier::saisirChiffre(){
    int temp = _kbhit();
    if (temp == 0 )
    {
        return -1;
    }
    else
    {
        return temp - '0';
    }
}
}

